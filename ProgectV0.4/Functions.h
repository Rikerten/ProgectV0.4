#pragma once
#include "Food.h"
#include <set>
#include <iostream>
#include <vector>

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
		Food^ n;
		ConnectToDB();

		String^ cmdText = "SELECT * FROM FoodTable WHERE foodID = @ID";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@ID", ID);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read()) {
			n->ID = Convert::ToInt32(reader["foodID"]->ToString()->TrimEnd());
			n->Name = reader["foodName"]->ToString()->TrimEnd();
			n->Favourite = Convert::ToBoolean(reader["fav"]);
			n->Rating = Convert::ToInt32(reader["rating"]->ToString()->TrimEnd());
			n->Image = "../Resourses/Images/" + reader["image"]->ToString()->TrimEnd();
			n->Recipe = SearchRecipe(ID);
			n->Ingredients = SearchIngradients(ID);
			n->tags = SearchTags(ID);
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

private: String^ SearchRecipe(int ID) {
	try
	{
		String^ st;
		ConnectToDB();

		String^ cmdText = "SELECT recipe FROM RecipeTable WHERE foodID = @ID";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@ID", ID);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read()) {
			st = reader["recipe"]->ToString();
		}
		return st;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}

}

private:String^ SearchIngradients(int ID) {
	try
	{
		String^ st = "";
		ConnectToDB();

		String^ cmdText = "SELECT ingradients FROM RecipeTable WHERE foodID = @ID";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@ID", ID);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read()) {
			st = reader["ingradients"]->ToString();
		}
		return st;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

private: String^ SearchTags(int ID) {
	try
	{
		String^ st = "";
		ConnectToDB();

		String^ cmdText = "SELECT tag FROM TagTable WHERE foodID = @ID";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@ID", ID);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			st += reader["tag"]->ToString()->TrimEnd() + ", ";
		}
		return st;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

public: ListBox::ObjectCollection^ FillComboBox(int tagType) {
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
				list->Items->Add(reader["tag"]->ToString()->TrimEnd());
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

public: List<int>^ GetList() {

	try
	{
		List<int>^ l = gcnew List<int>();
		ConnectToDB();

		String^ cmdText = "SELECT foodID FROM FoodTable";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		while(reader->Read()) {
			l->Add(Convert::ToInt64(reader["foodID"]->ToString()));
		}

		return l;
	}
	finally
	{
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

public: List<int>^ GetFavList() {
	try
	{
		List<int>^ l = gcnew List<int>();
		ConnectToDB();

		String^ cmdText = "SELECT foodID FROM FoodTable WHERE fav = 1";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			l->Add(Convert::ToInt64(reader["foodID"]->ToString()));
		}

		return l;
	}
	finally
	{
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

};

