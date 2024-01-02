#pragma once
#include "Food.h"
#include <set>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Functions
{
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStr;

	//Data Source=DESKTOP-4V61EI6;Initial Catalog=FoodDB;Persist Security Info=True;User ID=sa;Password=***********;Encrypt=True;Trust Server Certificate=True
public: void ConnectToDB() {
	connStr = gcnew SqlConnectionStringBuilder();
	connStr->DataSource = "DESKTOP-4V61EI6";
	connStr->InitialCatalog = "FoodDB";
	connStr->IntegratedSecurity = true;
	connStr->UserID = "sa";
	connStr->Password = "sa";

	conn = gcnew SqlConnection(Convert::ToString(connStr));
}

public: Food^ SearchElement(int ID) {
	try
	{
		ConnectToDB();

		String^ cmdText = "SELECT * FROM FoodTable WHERE foodID = @ID";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@ID", ID);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		Food^ n;

		if (reader->Read()) {
			n->ID = Convert::ToInt32(reader["foodID"]->ToString());
			n->Name = reader["foodName"]->ToString();
			n->Favourite = Convert::ToBoolean(reader["fav"]);
			n->Rating = Convert::ToInt32(reader["rating"]->ToString());
			n->Image = reader["image"]->ToString();
		}
		else
		{
			n->ID = -1;
		}
		return n;
	}
	finally
	{
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

public: ListBox::ObjectCollection^ FillComboBox(int tagType) {
	/*ListBox^ list = gcnew ListBox();
	list->Items->Add(L"õçõç");
	return list->Items;*/


	try
	{
		ConnectToDB();

		String^ cmdText = "SELECT tag FROM TagTable WHERE type = @typeID";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@typeID", tagType);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		ListBox^ list = gcnew ListBox();
		list->Items->Add(L"...");

		while (reader->Read()) {
			if (list->Items->IndexOf(reader["tag"]->ToString()) == -1) {

				list->Items->Add(reader["tag"]->ToString());
			}
		}
		
		return list->Items;
	}
	finally
	{
		if (conn != nullptr) {
			conn->Close();
		}
	}


}

public: List<int>^ GetFilteredList(String^ tag1, String^ tag2, String^ tag3) {
	try {
		ConnectToDB();

		String^ cmdText = "SELECT foodID FROM TagTable WHERE tag IN ('@Tag1', '@Tag2', '@Tag3')";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		/*if ((tag1 == "...") && (tag2 == "...") && (tag3 == "...")){
			cmd->Parameters->AddWithValue("WHERE tag IN ('@Tag1', '@Tag2', '@Tag3')", "");
		}
		else {
			if (tag1 == "...") cmd->Parameters->AddWithValue("'@Tag1', ", "");
			else cmd->Parameters->AddWithValue("@Tag1", tag1);

			if (tag2 == "...") cmd->Parameters->AddWithValue(", '@Tag2'", "");
			else cmd->Parameters->AddWithValue("@Tag2", tag2);

			if (tag3 == "...") cmd->Parameters->AddWithValue(", '@Tag3'", "");
			else cmd->Parameters->AddWithValue("@Tag3", tag3);
		}*/

		cmd->Parameters->AddWithValue("@Tag1", tag1);
		cmd->Parameters->AddWithValue("@Tag2", tag2);
		cmd->Parameters->AddWithValue("@Tag3", tag3);

		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		List<int>^ list = gcnew List < int >();

		while (reader->Read()) {
			if(list->IndexOf(Convert::ToInt32(reader["foodID"]->ToString()))==-1) list->Add(Convert::ToInt32(reader["foodID"]->ToString()));
		}
		return list;
	}
	finally
	{
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
};

