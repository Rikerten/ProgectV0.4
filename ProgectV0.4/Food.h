#pragma once
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Food
{
private:
	static int id;
	static int rating;
	static bool favourite;
	static String^ name;
	static String^ image;
	static String^ ingredients;
	static String^ recipe;
	static String^ tags;

public:
	static property int ID {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}
	static property int Rating {
		int get() {
			return rating;
		}
		void set(int value) {
			rating = value;
		}
	}
	static property bool Favourite {
		bool get() {
			return favourite;
		}
		void set(bool value) {
			favourite = value;
		}
	}
	static property String^ Name {
		String^ get() {
			return name;
		}
		void set(String^ value) {
			name = value;
		}
	}
	static property String^ Image {
		String^ get() {
			return image;
		}
		void set(String^ value) {
			image = value;
		}
	}
	static property String^ Ingredients {
		String^ get() {
			return ingredients;
		}
		void set(String^ value) {
			ingredients = value;
		}
	}
	static property String^ Recipe {
		String^ get() {
			return recipe;
		}
		void set(String^ value) {
			recipe = value;
		}
	}
	static property String^ Tags {
		String^ get() {
			return tags;
		}
		void set(String^ value) {
			tags = value;
		}
	}
};

