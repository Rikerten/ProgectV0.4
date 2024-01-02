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
public:
	static int id;
	static property int ID {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	static int rating;
	static property int Rating {
		int get() {
			return rating;
		}
		void set(int value) {
			rating = value;
		}
	}

	static bool favourite;
	static property bool Favourite {
		bool get() {
			return favourite;
		}
		void set(bool value) {
			favourite = value;
		}
	}

	static String^ name;
	static property String^ Name {
		String^ get() {
			return name;
		}
		void set(String^ value) {
			name = value;
		}
	}

	static String^ image;
	static property String^ Image {
		String^ get() {
			return image;
		}
		void set(String^ value) {
			image = value;
		}
	}

	static String^ ingredients;
	static property String^ Ingredients {
		String^ get() {
			return ingredients;
		}
		void set(String^ value) {
			ingredients = value;
		}
	}

	static String^ recipe;
	static property String^ Recipe {
		String^ get() {
			return recipe;
		}
		void set(String^ value) {
			recipe = value;
		}
	}

	static String^ tags;
	static property String^ Tags {
		String^ get() {
			return tags;
		}
		void set(String^ value) {
			tags = value;
		}
	}
};

