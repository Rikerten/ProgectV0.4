#pragma once
#include <Windows.h>
#include "Food.h"
#include "Functions.h"

namespace ProgectV04 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ OptionButton;
	private: System::Windows::Forms::Button^ FAQButton;

	private: System::Windows::Forms::Button^ FavouriteButton;

	private: System::Windows::Forms::Button^ HomeButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ PrevPageButton;

	private: System::Windows::Forms::Button^ NextPageButton;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ Namelabel1;
	private: System::Windows::Forms::Label^ Namelabel2;
	private: System::Windows::Forms::Label^ Namelabel3;
	private: System::Windows::Forms::Label^ Namelabel4;
	private: System::Windows::Forms::Label^ Namelabel5;
	private: System::Windows::Forms::Label^ Namelabel6;
	private: System::Windows::Forms::Label^ Namelabel7;







	private: System::Windows::Forms::Label^ Namelabel8;

	private: System::Windows::Forms::Label^ Namelabel9;
	private: System::Windows::Forms::Label^ Namelabel18;


	private: System::Windows::Forms::Label^ Namelabel17;

	private: System::Windows::Forms::Label^ Namelabel16;

	private: System::Windows::Forms::Label^ Namelabel15;

	private: System::Windows::Forms::Label^ Namelabel14;

	private: System::Windows::Forms::Label^ Namelabel13;

	private: System::Windows::Forms::Label^ Namelabel12;

	private: System::Windows::Forms::Label^ Namelabel11;

	private: System::Windows::Forms::Label^ Namelabel10;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ SearchButton;
private: System::Windows::Forms::PictureBox^ MainFoodPicture;

private: System::Windows::Forms::Label^ IngradientsChapterLabel;
private: System::Windows::Forms::Label^ IngradientsLabel;
private: System::Windows::Forms::Label^ RecipeLabel;
private: System::Windows::Forms::Label^ MainNameLabel;


private: int pageNumber; // Номер текущей страницы
private: List<int>^ list = gcnew List < int >(); // Список элементов.
private: int CurrentOpenFoodID;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->OptionButton = (gcnew System::Windows::Forms::Button());
			this->FAQButton = (gcnew System::Windows::Forms::Button());
			this->FavouriteButton = (gcnew System::Windows::Forms::Button());
			this->HomeButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->PrevPageButton = (gcnew System::Windows::Forms::Button());
			this->NextPageButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Namelabel1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Namelabel2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Namelabel3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Namelabel4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Namelabel5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Namelabel6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Namelabel7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Namelabel8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Namelabel9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Namelabel18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Namelabel17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Namelabel16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Namelabel15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Namelabel14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Namelabel13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Namelabel12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Namelabel11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Namelabel10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->MainFoodPicture = (gcnew System::Windows::Forms::PictureBox());
			this->IngradientsChapterLabel = (gcnew System::Windows::Forms::Label());
			this->IngradientsLabel = (gcnew System::Windows::Forms::Label());
			this->RecipeLabel = (gcnew System::Windows::Forms::Label());
			this->MainNameLabel = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainFoodPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1424, 30);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1391, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 30);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 30);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->OptionButton);
			this->panel2->Controls->Add(this->FAQButton);
			this->panel2->Controls->Add(this->FavouriteButton);
			this->panel2->Controls->Add(this->HomeButton);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(60, 955);
			this->panel2->TabIndex = 1;
			// 
			// OptionButton
			// 
			this->OptionButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OptionButton.BackgroundImage")));
			this->OptionButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->OptionButton->FlatAppearance->BorderSize = 0;
			this->OptionButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OptionButton->Location = System::Drawing::Point(0, 883);
			this->OptionButton->Name = L"OptionButton";
			this->OptionButton->Size = System::Drawing::Size(60, 60);
			this->OptionButton->TabIndex = 3;
			this->OptionButton->UseVisualStyleBackColor = true;
			this->OptionButton->Click += gcnew System::EventHandler(this, &MyForm::OptionButton_Click);
			// 
			// FAQButton
			// 
			this->FAQButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FAQButton.BackgroundImage")));
			this->FAQButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->FAQButton->FlatAppearance->BorderSize = 0;
			this->FAQButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FAQButton->Location = System::Drawing::Point(0, 246);
			this->FAQButton->Name = L"FAQButton";
			this->FAQButton->Size = System::Drawing::Size(60, 60);
			this->FAQButton->TabIndex = 2;
			this->FAQButton->UseVisualStyleBackColor = true;
			this->FAQButton->Click += gcnew System::EventHandler(this, &MyForm::FAQButton_Click);
			// 
			// FavouriteButton
			// 
			this->FavouriteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FavouriteButton.BackgroundImage")));
			this->FavouriteButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->FavouriteButton->FlatAppearance->BorderSize = 0;
			this->FavouriteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FavouriteButton->Location = System::Drawing::Point(0, 180);
			this->FavouriteButton->Name = L"FavouriteButton";
			this->FavouriteButton->Size = System::Drawing::Size(60, 60);
			this->FavouriteButton->TabIndex = 1;
			this->FavouriteButton->UseVisualStyleBackColor = true;
			this->FavouriteButton->Click += gcnew System::EventHandler(this, &MyForm::FavouriteButton_Click);
			// 
			// HomeButton
			// 
			this->HomeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomeButton.BackgroundImage")));
			this->HomeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->HomeButton->FlatAppearance->BorderSize = 0;
			this->HomeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HomeButton->Location = System::Drawing::Point(0, 114);
			this->HomeButton->Name = L"HomeButton";
			this->HomeButton->Size = System::Drawing::Size(60, 60);
			this->HomeButton->TabIndex = 0;
			this->HomeButton->UseVisualStyleBackColor = true;
			this->HomeButton->Click += gcnew System::EventHandler(this, &MyForm::HomeButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(103, 62);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 33);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(230, 62);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 33);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(357, 62);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 33);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// PrevPageButton
			// 
			this->PrevPageButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->PrevPageButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PrevPageButton.BackgroundImage")));
			this->PrevPageButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->PrevPageButton->FlatAppearance->BorderSize = 0;
			this->PrevPageButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->PrevPageButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->PrevPageButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PrevPageButton->Location = System::Drawing::Point(69, 209);
			this->PrevPageButton->Name = L"PrevPageButton";
			this->PrevPageButton->Size = System::Drawing::Size(60, 747);
			this->PrevPageButton->TabIndex = 5;
			this->PrevPageButton->UseVisualStyleBackColor = false;
			this->PrevPageButton->Click += gcnew System::EventHandler(this, &MyForm::PrevPageButton_Click);
			// 
			// NextPageButton
			// 
			this->NextPageButton->BackColor = System::Drawing::Color::Transparent;
			this->NextPageButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NextPageButton.BackgroundImage")));
			this->NextPageButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->NextPageButton->FlatAppearance->BorderSize = 0;
			this->NextPageButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->NextPageButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->NextPageButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextPageButton->Location = System::Drawing::Point(1354, 209);
			this->NextPageButton->Name = L"NextPageButton";
			this->NextPageButton->Size = System::Drawing::Size(60, 747);
			this->NextPageButton->TabIndex = 6;
			this->NextPageButton->Text = L"\r\n";
			this->NextPageButton->UseVisualStyleBackColor = false;
			this->NextPageButton->Click += gcnew System::EventHandler(this, &MyForm::NextPageButton_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->Namelabel1);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Location = System::Drawing::Point(136, 210);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(400, 120);
			this->panel3->TabIndex = 7;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			this->panel3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel3_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(132, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// Namelabel1
			// 
			this->Namelabel1->AutoSize = true;
			this->Namelabel1->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel1->Location = System::Drawing::Point(126, 8);
			this->Namelabel1->Name = L"Namelabel1";
			this->Namelabel1->Size = System::Drawing::Size(61, 24);
			this->Namelabel1->TabIndex = 1;
			this->Namelabel1->Text = L"label1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(120, 120);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->Namelabel2);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Location = System::Drawing::Point(542, 210);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(400, 120);
			this->panel4->TabIndex = 8;
			this->panel4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel4_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(132, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// Namelabel2
			// 
			this->Namelabel2->AutoSize = true;
			this->Namelabel2->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel2->Location = System::Drawing::Point(126, 8);
			this->Namelabel2->Name = L"Namelabel2";
			this->Namelabel2->Size = System::Drawing::Size(61, 24);
			this->Namelabel2->TabIndex = 2;
			this->Namelabel2->Text = L"label2";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(120, 120);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->Namelabel3);
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Location = System::Drawing::Point(948, 210);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(400, 120);
			this->panel5->TabIndex = 8;
			this->panel5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel5_MouseClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(132, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// Namelabel3
			// 
			this->Namelabel3->AutoSize = true;
			this->Namelabel3->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel3->Location = System::Drawing::Point(126, 8);
			this->Namelabel3->Name = L"Namelabel3";
			this->Namelabel3->Size = System::Drawing::Size(61, 24);
			this->Namelabel3->TabIndex = 2;
			this->Namelabel3->Text = L"label3";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(120, 120);
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->Namelabel4);
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Location = System::Drawing::Point(136, 335);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(400, 120);
			this->panel6->TabIndex = 8;
			this->panel6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel6_MouseClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(132, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// Namelabel4
			// 
			this->Namelabel4->AutoSize = true;
			this->Namelabel4->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel4->Location = System::Drawing::Point(126, 8);
			this->Namelabel4->Name = L"Namelabel4";
			this->Namelabel4->Size = System::Drawing::Size(61, 24);
			this->Namelabel4->TabIndex = 2;
			this->Namelabel4->Text = L"label4";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(120, 120);
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->Namelabel5);
			this->panel7->Controls->Add(this->pictureBox6);
			this->panel7->Location = System::Drawing::Point(542, 335);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(400, 120);
			this->panel7->TabIndex = 8;
			this->panel7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel7_MouseClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(132, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 19);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			// 
			// Namelabel5
			// 
			this->Namelabel5->AutoSize = true;
			this->Namelabel5->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel5->Location = System::Drawing::Point(126, 8);
			this->Namelabel5->Name = L"Namelabel5";
			this->Namelabel5->Size = System::Drawing::Size(61, 24);
			this->Namelabel5->TabIndex = 2;
			this->Namelabel5->Text = L"label5";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(120, 120);
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label6);
			this->panel8->Controls->Add(this->Namelabel6);
			this->panel8->Controls->Add(this->pictureBox7);
			this->panel8->Location = System::Drawing::Point(948, 335);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(400, 120);
			this->panel8->TabIndex = 8;
			this->panel8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel8_MouseClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(132, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 19);
			this->label6->TabIndex = 3;
			this->label6->Text = L"label6";
			// 
			// Namelabel6
			// 
			this->Namelabel6->AutoSize = true;
			this->Namelabel6->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel6->Location = System::Drawing::Point(126, 8);
			this->Namelabel6->Name = L"Namelabel6";
			this->Namelabel6->Size = System::Drawing::Size(61, 24);
			this->Namelabel6->TabIndex = 2;
			this->Namelabel6->Text = L"label6";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(0, 0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(120, 120);
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label7);
			this->panel9->Controls->Add(this->Namelabel7);
			this->panel9->Controls->Add(this->pictureBox8);
			this->panel9->Location = System::Drawing::Point(136, 460);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(400, 120);
			this->panel9->TabIndex = 8;
			this->panel9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel9_MouseClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(132, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 19);
			this->label7->TabIndex = 3;
			this->label7->Text = L"label7";
			// 
			// Namelabel7
			// 
			this->Namelabel7->AutoSize = true;
			this->Namelabel7->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel7->Location = System::Drawing::Point(126, 8);
			this->Namelabel7->Name = L"Namelabel7";
			this->Namelabel7->Size = System::Drawing::Size(61, 24);
			this->Namelabel7->TabIndex = 2;
			this->Namelabel7->Text = L"label7";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(0, 0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(120, 120);
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label8);
			this->panel10->Controls->Add(this->Namelabel8);
			this->panel10->Controls->Add(this->pictureBox9);
			this->panel10->Location = System::Drawing::Point(542, 460);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(400, 120);
			this->panel10->TabIndex = 8;
			this->panel10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel10_MouseClick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(132, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 19);
			this->label8->TabIndex = 3;
			this->label8->Text = L"label8";
			// 
			// Namelabel8
			// 
			this->Namelabel8->AutoSize = true;
			this->Namelabel8->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel8->Location = System::Drawing::Point(126, 8);
			this->Namelabel8->Name = L"Namelabel8";
			this->Namelabel8->Size = System::Drawing::Size(61, 24);
			this->Namelabel8->TabIndex = 2;
			this->Namelabel8->Text = L"label8";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(120, 120);
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label9);
			this->panel11->Controls->Add(this->Namelabel9);
			this->panel11->Controls->Add(this->pictureBox10);
			this->panel11->Location = System::Drawing::Point(948, 460);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(400, 120);
			this->panel11->TabIndex = 8;
			this->panel11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel11_MouseClick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(132, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 19);
			this->label9->TabIndex = 3;
			this->label9->Text = L"label9";
			// 
			// Namelabel9
			// 
			this->Namelabel9->AutoSize = true;
			this->Namelabel9->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel9->Location = System::Drawing::Point(126, 8);
			this->Namelabel9->Name = L"Namelabel9";
			this->Namelabel9->Size = System::Drawing::Size(61, 24);
			this->Namelabel9->TabIndex = 2;
			this->Namelabel9->Text = L"label9";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(0, 0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(120, 120);
			this->pictureBox10->TabIndex = 1;
			this->pictureBox10->TabStop = false;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label18);
			this->panel12->Controls->Add(this->Namelabel18);
			this->panel12->Controls->Add(this->pictureBox19);
			this->panel12->Location = System::Drawing::Point(948, 836);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(400, 120);
			this->panel12->TabIndex = 10;
			this->panel12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel12_MouseClick);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(132, 86);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 19);
			this->label18->TabIndex = 3;
			this->label18->Text = L"label18";
			// 
			// Namelabel18
			// 
			this->Namelabel18->AutoSize = true;
			this->Namelabel18->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel18->Location = System::Drawing::Point(126, 8);
			this->Namelabel18->Name = L"Namelabel18";
			this->Namelabel18->Size = System::Drawing::Size(71, 24);
			this->Namelabel18->TabIndex = 2;
			this->Namelabel18->Text = L"label18";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(0, 0);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(120, 120);
			this->pictureBox19->TabIndex = 1;
			this->pictureBox19->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->label17);
			this->panel13->Controls->Add(this->Namelabel17);
			this->panel13->Controls->Add(this->pictureBox18);
			this->panel13->Location = System::Drawing::Point(542, 836);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(400, 120);
			this->panel13->TabIndex = 11;
			this->panel13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel13_MouseClick);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(132, 86);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 19);
			this->label17->TabIndex = 3;
			this->label17->Text = L"label17";
			// 
			// Namelabel17
			// 
			this->Namelabel17->AutoSize = true;
			this->Namelabel17->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel17->Location = System::Drawing::Point(126, 8);
			this->Namelabel17->Name = L"Namelabel17";
			this->Namelabel17->Size = System::Drawing::Size(71, 24);
			this->Namelabel17->TabIndex = 2;
			this->Namelabel17->Text = L"label17";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(0, 0);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(120, 120);
			this->pictureBox18->TabIndex = 1;
			this->pictureBox18->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label16);
			this->panel14->Controls->Add(this->Namelabel16);
			this->panel14->Controls->Add(this->pictureBox17);
			this->panel14->Location = System::Drawing::Point(136, 836);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(400, 120);
			this->panel14->TabIndex = 12;
			this->panel14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel14_MouseClick);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(132, 86);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 19);
			this->label16->TabIndex = 3;
			this->label16->Text = L"label16";
			// 
			// Namelabel16
			// 
			this->Namelabel16->AutoSize = true;
			this->Namelabel16->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel16->Location = System::Drawing::Point(126, 8);
			this->Namelabel16->Name = L"Namelabel16";
			this->Namelabel16->Size = System::Drawing::Size(71, 24);
			this->Namelabel16->TabIndex = 2;
			this->Namelabel16->Text = L"label16";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(0, 0);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(120, 120);
			this->pictureBox17->TabIndex = 1;
			this->pictureBox17->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->label15);
			this->panel15->Controls->Add(this->Namelabel15);
			this->panel15->Controls->Add(this->pictureBox16);
			this->panel15->Location = System::Drawing::Point(948, 711);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(400, 120);
			this->panel15->TabIndex = 13;
			this->panel15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel15_MouseClick);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(132, 86);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 19);
			this->label15->TabIndex = 3;
			this->label15->Text = L"label15";
			// 
			// Namelabel15
			// 
			this->Namelabel15->AutoSize = true;
			this->Namelabel15->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel15->Location = System::Drawing::Point(126, 8);
			this->Namelabel15->Name = L"Namelabel15";
			this->Namelabel15->Size = System::Drawing::Size(71, 24);
			this->Namelabel15->TabIndex = 2;
			this->Namelabel15->Text = L"label15";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(0, 0);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(120, 120);
			this->pictureBox16->TabIndex = 1;
			this->pictureBox16->TabStop = false;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->label14);
			this->panel16->Controls->Add(this->Namelabel14);
			this->panel16->Controls->Add(this->pictureBox15);
			this->panel16->Location = System::Drawing::Point(542, 711);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(400, 120);
			this->panel16->TabIndex = 14;
			this->panel16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel16_MouseClick);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(132, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(57, 19);
			this->label14->TabIndex = 3;
			this->label14->Text = L"label14";
			// 
			// Namelabel14
			// 
			this->Namelabel14->AutoSize = true;
			this->Namelabel14->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel14->Location = System::Drawing::Point(126, 8);
			this->Namelabel14->Name = L"Namelabel14";
			this->Namelabel14->Size = System::Drawing::Size(71, 24);
			this->Namelabel14->TabIndex = 2;
			this->Namelabel14->Text = L"label14";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(0, 0);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(120, 120);
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label13);
			this->panel17->Controls->Add(this->Namelabel13);
			this->panel17->Controls->Add(this->pictureBox14);
			this->panel17->Location = System::Drawing::Point(136, 711);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(400, 120);
			this->panel17->TabIndex = 15;
			this->panel17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel17_MouseClick);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(132, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 19);
			this->label13->TabIndex = 3;
			this->label13->Text = L"label13";
			// 
			// Namelabel13
			// 
			this->Namelabel13->AutoSize = true;
			this->Namelabel13->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel13->Location = System::Drawing::Point(126, 8);
			this->Namelabel13->Name = L"Namelabel13";
			this->Namelabel13->Size = System::Drawing::Size(71, 24);
			this->Namelabel13->TabIndex = 2;
			this->Namelabel13->Text = L"label13";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(0, 0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(120, 120);
			this->pictureBox14->TabIndex = 1;
			this->pictureBox14->TabStop = false;
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->label12);
			this->panel18->Controls->Add(this->Namelabel12);
			this->panel18->Controls->Add(this->pictureBox13);
			this->panel18->Location = System::Drawing::Point(948, 586);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(400, 120);
			this->panel18->TabIndex = 16;
			this->panel18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel18_MouseClick);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(132, 86);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 19);
			this->label12->TabIndex = 3;
			this->label12->Text = L"label12";
			// 
			// Namelabel12
			// 
			this->Namelabel12->AutoSize = true;
			this->Namelabel12->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel12->Location = System::Drawing::Point(126, 8);
			this->Namelabel12->Name = L"Namelabel12";
			this->Namelabel12->Size = System::Drawing::Size(71, 24);
			this->Namelabel12->TabIndex = 2;
			this->Namelabel12->Text = L"label12";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(0, 0);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(120, 120);
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->label11);
			this->panel19->Controls->Add(this->Namelabel11);
			this->panel19->Controls->Add(this->pictureBox12);
			this->panel19->Location = System::Drawing::Point(542, 586);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(400, 120);
			this->panel19->TabIndex = 17;
			this->panel19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel19_MouseClick);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(132, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 19);
			this->label11->TabIndex = 3;
			this->label11->Text = L"label11";
			// 
			// Namelabel11
			// 
			this->Namelabel11->AutoSize = true;
			this->Namelabel11->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel11->Location = System::Drawing::Point(126, 8);
			this->Namelabel11->Name = L"Namelabel11";
			this->Namelabel11->Size = System::Drawing::Size(71, 24);
			this->Namelabel11->TabIndex = 2;
			this->Namelabel11->Text = L"label11";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(0, 0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(120, 120);
			this->pictureBox12->TabIndex = 1;
			this->pictureBox12->TabStop = false;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->label10);
			this->panel20->Controls->Add(this->Namelabel10);
			this->panel20->Controls->Add(this->pictureBox11);
			this->panel20->Location = System::Drawing::Point(136, 586);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(400, 120);
			this->panel20->TabIndex = 9;
			this->panel20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel20_MouseClick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(132, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 19);
			this->label10->TabIndex = 3;
			this->label10->Text = L"label10";
			// 
			// Namelabel10
			// 
			this->Namelabel10->AutoSize = true;
			this->Namelabel10->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Namelabel10->Location = System::Drawing::Point(126, 8);
			this->Namelabel10->Name = L"Namelabel10";
			this->Namelabel10->Size = System::Drawing::Size(71, 24);
			this->Namelabel10->TabIndex = 2;
			this->Namelabel10->Text = L"label10";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(0, 0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(120, 120);
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(1037, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 32);
			this->textBox1->TabIndex = 18;
			// 
			// SearchButton
			// 
			this->SearchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchButton.BackgroundImage")));
			this->SearchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->SearchButton->FlatAppearance->BorderSize = 0;
			this->SearchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchButton->Location = System::Drawing::Point(1354, 62);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(32, 32);
			this->SearchButton->TabIndex = 19;
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MyForm::SearchButton_Click);
			// 
			// MainFoodPicture
			// 
			this->MainFoodPicture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->MainFoodPicture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainFoodPicture.BackgroundImage")));
			this->MainFoodPicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->MainFoodPicture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MainFoodPicture->Location = System::Drawing::Point(103, 115);
			this->MainFoodPicture->Name = L"MainFoodPicture";
			this->MainFoodPicture->Size = System::Drawing::Size(500, 500);
			this->MainFoodPicture->TabIndex = 20;
			this->MainFoodPicture->TabStop = false;
			this->MainFoodPicture->Visible = false;
			this->MainFoodPicture->Click += gcnew System::EventHandler(this, &MyForm::MainFoodPicture_Click);
			// 
			// IngradientsChapterLabel
			// 
			this->IngradientsChapterLabel->AutoSize = true;
			this->IngradientsChapterLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->IngradientsChapterLabel->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IngradientsChapterLabel->Location = System::Drawing::Point(673, 159);
			this->IngradientsChapterLabel->Name = L"IngradientsChapterLabel";
			this->IngradientsChapterLabel->Size = System::Drawing::Size(137, 26);
			this->IngradientsChapterLabel->TabIndex = 21;
			this->IngradientsChapterLabel->Text = L"Инградиенты";
			this->IngradientsChapterLabel->Visible = false;
			// 
			// IngradientsLabel
			// 
			this->IngradientsLabel->AutoSize = true;
			this->IngradientsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->IngradientsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IngradientsLabel->Location = System::Drawing::Point(678, 189);
			this->IngradientsLabel->Name = L"IngradientsLabel";
			this->IngradientsLabel->Size = System::Drawing::Size(54, 18);
			this->IngradientsLabel->TabIndex = 22;
			this->IngradientsLabel->Text = L"label19";
			this->IngradientsLabel->Visible = false;
			// 
			// RecipeLabel
			// 
			this->RecipeLabel->AutoSize = true;
			this->RecipeLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->RecipeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RecipeLabel->Location = System::Drawing::Point(103, 637);
			this->RecipeLabel->Name = L"RecipeLabel";
			this->RecipeLabel->Size = System::Drawing::Size(60, 20);
			this->RecipeLabel->TabIndex = 23;
			this->RecipeLabel->Text = L"label19";
			this->RecipeLabel->Visible = false;
			// 
			// MainNameLabel
			// 
			this->MainNameLabel->AutoSize = true;
			this->MainNameLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->MainNameLabel->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainNameLabel->Location = System::Drawing::Point(672, 115);
			this->MainNameLabel->Name = L"MainNameLabel";
			this->MainNameLabel->Size = System::Drawing::Size(94, 33);
			this->MainNameLabel->TabIndex = 24;
			this->MainNameLabel->Text = L"label19";
			this->MainNameLabel->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(616, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 985);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->MainNameLabel);
			this->Controls->Add(this->RecipeLabel);
			this->Controls->Add(this->IngradientsLabel);
			this->Controls->Add(this->IngradientsChapterLabel);
			this->Controls->Add(this->MainFoodPicture);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->NextPageButton);
			this->Controls->Add(this->PrevPageButton);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainFoodPicture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//Загрузка формы =================================
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Functions DB;
		pageNumber = 0;
		list = DB.GetList();
		RefillPage(list);
		comboBox1->DataSource = DB.FillComboBox(1);
		comboBox2->DataSource = DB.FillComboBox(2);
		comboBox3->DataSource = DB.FillComboBox(3);
		MainFoodPicture->Visible = false;
		IngradientsChapterLabel->Visible = false;
		IngradientsLabel->Visible = false;
		RecipeLabel->Visible = false;
		MainNameLabel->Visible = false;

	}

	// Метод заполнения боксов
	private:System::Void RefillPage(List<int>^ l1) {
		Functions DB;
		Food^ f;
		if (pageNumber * 18 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18]);
			pictureBox2->Image = Image::FromFile(f->image);
			pictureBox2->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel1->Text = f->Name;
			this->label1->Text = f->Tags;
			panel3->Visible = true;
		}
		else
		{
			panel3->Visible = false;
		}

		if (pageNumber * 18+1 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+1]);
			pictureBox3->Image = Image::FromFile(f->image);
			pictureBox3->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel2->Text = f->Name;
			this->label2->Text = f->Tags;
			panel4->Visible = true;
		}
		else
		{
			panel4->Visible = false;
		}

		if (pageNumber * 18+2 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+2]);
			pictureBox4->Image = Image::FromFile(f->image);
			pictureBox4->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel3->Text = f->Name;
			this->label3->Text = f->Tags;
			panel5->Visible = true;
		}
		else
		{
			panel5->Visible = false;
		}

		if (pageNumber * 18 +3  < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+3]);
			pictureBox5->Image = Image::FromFile(f->image);
			pictureBox5->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel4->Text = f->Name;
			this->label4->Text = f->Tags;
			panel6->Visible = true;
		}
		else
		{
			panel6->Visible = false;
		}

		if (pageNumber * 18+4 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+4]);
			pictureBox6->Image = Image::FromFile(f->image);
			pictureBox6->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel5->Text = f->Name;
			this->label5->Text = f->Tags;
			panel7->Visible = true;
		}
		else
		{
			panel7->Visible = false;
		}

		if (pageNumber * 18 +5 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+5]);
			pictureBox7->Image = Image::FromFile(f->image);
			pictureBox7->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel6->Text = f->Name;
			this->label6->Text = f->Tags;
			panel8->Visible = true;
		}
		else
		{
			panel8->Visible = false;
		}

		if (pageNumber * 18 + 6 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+6]);
			pictureBox8->Image = Image::FromFile(f->image);
			pictureBox8->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel7->Text = f->Name;
			this->label7->Text = f->Tags;
			panel9->Visible = true;
		}
		else
		{
			panel9->Visible = false;
		}


		if (pageNumber * 18 + 7 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+7]);
			pictureBox9->Image = Image::FromFile(f->image);
			pictureBox9->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel8->Text = f->Name;
			this->label8->Text = f->Tags;
			panel10->Visible = true;
		}
		else
		{
			panel10->Visible = false;
		}


		if (pageNumber * 18 + 8 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+8]);
			pictureBox10->Image = Image::FromFile(f->image);
			pictureBox10->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel9->Text = f->Name;
			this->label9->Text = f->Tags;
			panel11->Visible = true;
		}
		else
		{
			panel11->Visible = false;
		}


		if (pageNumber * 18 + 9 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+9]);
			pictureBox11->Image = Image::FromFile(f->image);
			pictureBox11->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel10->Text = f->Name;
			this->label10->Text = f->Tags;
			panel20->Visible = true;
		}
		else
		{
			panel20->Visible = false;
		}

		if (pageNumber * 18 + 10< l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+10]);
			pictureBox12->Image = Image::FromFile(f->image);
			pictureBox12->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel11->Text = f->Name;
			this->label11->Text = f->Tags;
			panel19->Visible = true;
		}
		else
		{
			panel19->Visible = false;
		}

		if (pageNumber * 18 + 11 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+11]);
			pictureBox13->Image = Image::FromFile(f->image);
			pictureBox13->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel12->Text = f->Name;
			this->label12->Text = f->Tags;
			panel18->Visible = true;
		}
		else
		{
			panel18->Visible = false;
		}

		if (pageNumber * 18 + 12 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+12]);
			pictureBox14->Image = Image::FromFile(f->image);
			pictureBox14->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel13->Text = f->Name;
			this->label13->Text = f->Tags;
			panel17->Visible = true;
		}
		else
		{
			panel17->Visible = false;
		}

		if (pageNumber * 18 + 13 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+13]);
			pictureBox15->Image = Image::FromFile(f->image);
			pictureBox15->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel14->Text = f->Name;
			this->label14->Text = f->Tags;
			panel16->Visible = true;
		}
		else
		{
			panel16->Visible = false;
		}

		if (pageNumber * 18 + 14 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+14]);
			pictureBox16->Image = Image::FromFile(f->image);
			pictureBox16->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel15->Text = f->Name;
			this->label15->Text = f->Tags;
			panel15->Visible = true;
		}
		else
		{
			panel15->Visible = false;
		}

		if (pageNumber * 18+ 15 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+15]);
			pictureBox17->Image = Image::FromFile(f->image);
			pictureBox17->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel16->Text = f->Name;
			this->label16->Text = f->Tags;
			panel14->Visible = true;
		}
		else
		{
			panel14->Visible = false;
		}

		if (pageNumber * 18 + 16 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+16]);
			pictureBox18->Image = Image::FromFile(f->image);
			pictureBox18->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel17->Text = f->Name;
			this->label17->Text = f->Tags;
			panel13->Visible = true;
		}
		else
		{
			panel13->Visible = false;
		}

		if (pageNumber * 18 + 17 < l1->Count) {
			f = DB.SearchElement(l1[pageNumber * 18+17]);
			pictureBox19->Image = Image::FromFile(f->image);
			pictureBox19->SizeMode = PictureBoxSizeMode(4);
			this->Namelabel18->Text = f->Name;
			this->label18->Text = f->Tags;
			panel12->Visible = true;
		}
		else
		{
			panel12->Visible = false;
		}
	}
	
	//Кнопки переключения страниц
	private: System::Void NextPageButton_Click(System::Object^ sender, System::EventArgs^ e) {
		pageNumber++;
		RefillPage(list);
	}
	private: System::Void PrevPageButton_Click(System::Object^ sender, System::EventArgs^ e) {
		pageNumber--;
		if (pageNumber < 0) {
			pageNumber = 0;
		}
		RefillPage(list);
	}

	//Home ==========================================
	private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MainFoodPicture->Visible = false;
		IngradientsChapterLabel->Visible = false;
		IngradientsLabel->Visible = false;
		RecipeLabel->Visible = false;
		MainNameLabel->Visible = false;
		button2->Visible = false;

		comboBox1->Visible = true;
		comboBox2->Visible = true;
		comboBox3->Visible = true;
		SearchButton->Visible = true;
		textBox1->Visible = true;
		PrevPageButton->Visible = true;
		NextPageButton->Visible = true;

		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;
		comboBox3->SelectedIndex = 0;

		Functions DB;
		list = DB.GetList();
		pageNumber = 0;
		RefillPage(list);
	}
	

	//реализация фильтрации=====================================
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		list = filtering(list);
		RefillPage(list);

	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		list = filtering(list);
		RefillPage(list);
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		list = filtering(list);
		RefillPage(list);
	}
	
		   
	//============================================================
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

//Открытие рецепта ==============================================
private: System::Void ShowItem(int itemID) {
	CurrentOpenFoodID = itemID;
	MainFoodPicture->Visible = true;
	IngradientsChapterLabel->Visible = true;
	IngradientsLabel->Visible = true;
	RecipeLabel->Visible = true;
	MainNameLabel->Visible = true;
	button2->Visible = true;
	Functions DB;
	Food^ f;
	f = DB.SearchElement(itemID);
	MainFoodPicture->Image = Image::FromFile(f->image);
	MainFoodPicture->SizeMode = PictureBoxSizeMode(4);
	if (f->favourite == true) {
		button2->BackgroundImage = Image::FromFile("../Resourses/Images/s.png");
		button2->BackgroundImageLayout = ImageLayout::Center;
	}
	else
	{
		button2->BackgroundImage = Image::FromFile("../Resourses/Images/star.png");
		button2->BackgroundImageLayout = ImageLayout::Center;
	}

	MainNameLabel->Text = f->Name;
	IngradientsLabel->Text = f->Ingredients;
	RecipeLabel->Text = f->Recipe;

	panel3->Visible = false;
	panel4->Visible = false;
	panel5->Visible = false;
	panel6->Visible = false;
	panel7->Visible = false;
	panel8->Visible = false;
	panel9->Visible = false;
	panel10->Visible = false;
	panel11->Visible = false;
	panel12->Visible = false;
	panel13->Visible = false;
	panel14->Visible = false;
	panel15->Visible = false;
	panel16->Visible = false;
	panel17->Visible = false;
	panel18->Visible = false;
	panel19->Visible = false;
	panel20->Visible = false;
	PrevPageButton->Visible = false;
	NextPageButton->Visible = false;

	comboBox1->Visible = false;
	comboBox2->Visible = false;
	comboBox3->Visible = false;
	SearchButton->Visible = false;
	textBox1->Visible = false;
}

private: System::Void panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 1);
}
private: System::Void panel4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 2);
}
private: System::Void panel5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 3);
}
private: System::Void panel6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 4);
}
private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 5);
}
private: System::Void panel8_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 6);
}
private: System::Void panel9_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 7);
}
private: System::Void panel10_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 8);
}
private: System::Void panel11_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 9);
}
private: System::Void panel20_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 10);
}
private: System::Void panel19_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 11);
}
private: System::Void panel18_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 12);
}
private: System::Void panel17_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 13);
}
private: System::Void panel16_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 14);
}
private: System::Void panel15_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 15);
}
private: System::Void panel14_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 16);
}
private: System::Void panel13_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 17);
}
private: System::Void panel12_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ShowItem(pageNumber * 18 + 18);
}

// поиск ===================================
private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions DB;
	List<int>^ fullList = DB.GetList();
	String^ name = textBox1->Text;
	int i = 0;
	while ((i < fullList->Count) && !(DB.SearchElement(fullList[i])->Name->Contains(name))) {
		i++;
	}
	if (DB.SearchElement(fullList[i])->Name->Contains(name)) {
		ShowItem(fullList[i]);
	}
	else {
		MessageBox::Show(L"Ничего не найдено", L"Ошибка поиска");
	}

}

// Список избранного ======================
private: System::Void FavouriteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MainFoodPicture->Visible = false;
	IngradientsChapterLabel->Visible = false;
	IngradientsLabel->Visible = false;
	RecipeLabel->Visible = false;
	MainNameLabel->Visible = false;
	button2->Visible = false;


	comboBox1->Visible = true;
	comboBox2->Visible = true;
	comboBox3->Visible = true;
	SearchButton->Visible = true;
	textBox1->Visible = true;
	PrevPageButton->Visible = true;
	NextPageButton->Visible = true;
	comboBox1->SelectedIndex = 0;
	comboBox2->SelectedIndex = 0;
	comboBox3->SelectedIndex = 0;

	Functions DB;
	list = DB.GetFavList();
	pageNumber = 0;
	RefillPage(list);
}

private: List<int>^ filtering(List<int>^ startList) {
	String^ filter1 = comboBox1->Text;
	String^ filter2 = comboBox2->Text;
	String^ filter3 = comboBox3->Text;
	if (comboBox1->Text == "...") {
		filter1 = "";
	}
	if (comboBox2->Text == "...") {
		filter2 = "";
	}
	if (comboBox3->Text == "...") {
		filter3 = "";
	}
	Functions DB;
	List<int>^ newList = gcnew List<int>();
	Food^ f;
	for each (int i in startList) {
		f = DB.SearchElement(i);
		if ((f->Tags->Contains(filter1)) && (f->Tags->Contains(filter2)) && (f->Tags->Contains(filter3))) {
			newList->Add(i);
		}
	}
	return newList;
}

private: System::Void MainFoodPicture_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void FAQButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Контактных данных и/или адреса поддержки разработчик не оставил", L"Поддержка");
}
private: System::Void OptionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Настроек пока что нет, но наша команда уже работает над этим", L"");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions db;
	db.CahangeFavourite(CurrentOpenFoodID);
	if (db.SearchElement(CurrentOpenFoodID)->favourite == true) {
		button2->BackgroundImage = Image::FromFile("../Resourses/Images/s.png");
		button2->BackgroundImageLayout = ImageLayout::Zoom;
	}
	else
	{
		button2->BackgroundImage = Image::FromFile("../Resourses/Images/star.png");
		button2->BackgroundImageLayout = ImageLayout::Zoom;
	}
}
};
}
