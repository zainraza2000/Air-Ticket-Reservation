#pragma once
#include<fstream>
#include"Header.h"
#include<msclr\marshal_cppstd.h>
extern long int pnr_check;
extern user* mainObject;
extern user display;
extern flight* fObject;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for bill
	/// </summary>
	public ref class bill : public System::Windows::Forms::Form
	{
	public:
		bill(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ label_age;
	private: System::Windows::Forms::Label^ label_email;


















	private: System::Windows::Forms::Label^ label_age1;
	private: System::Windows::Forms::Label^ label_email1;
	private: System::Windows::Forms::Label^ label_name1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label_contactnumber1;
	private: System::Windows::Forms::Label^ label_cnic1;
	private: System::Windows::Forms::Label^ label_gender1;

	private: System::Windows::Forms::Label^ label_contactnumber;
	private: System::Windows::Forms::Label^ label_cnic;
	private: System::Windows::Forms::Label^ label_gender;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label_price1;
	private: System::Windows::Forms::Label^ label_class1;
	private: System::Windows::Forms::Label^ label_airlinename1;
	private: System::Windows::Forms::Label^ label_fno1;
	private: System::Windows::Forms::Label^ label_fno;
	private: System::Windows::Forms::Label^ label_to1;
	private: System::Windows::Forms::Label^ label_from1;
	private: System::Windows::Forms::Label^ label_price;
	private: System::Windows::Forms::Label^ label_class;
	private: System::Windows::Forms::Label^ label_airlinename;
	private: System::Windows::Forms::Label^ label_to;
	private: System::Windows::Forms::Label^ label_from;











	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(bill::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_age = (gcnew System::Windows::Forms::Label());
			this->label_email = (gcnew System::Windows::Forms::Label());
			this->label_age1 = (gcnew System::Windows::Forms::Label());
			this->label_email1 = (gcnew System::Windows::Forms::Label());
			this->label_name1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label_contactnumber1 = (gcnew System::Windows::Forms::Label());
			this->label_cnic1 = (gcnew System::Windows::Forms::Label());
			this->label_gender1 = (gcnew System::Windows::Forms::Label());
			this->label_contactnumber = (gcnew System::Windows::Forms::Label());
			this->label_cnic = (gcnew System::Windows::Forms::Label());
			this->label_gender = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label_price1 = (gcnew System::Windows::Forms::Label());
			this->label_class1 = (gcnew System::Windows::Forms::Label());
			this->label_airlinename1 = (gcnew System::Windows::Forms::Label());
			this->label_fno1 = (gcnew System::Windows::Forms::Label());
			this->label_fno = (gcnew System::Windows::Forms::Label());
			this->label_to1 = (gcnew System::Windows::Forms::Label());
			this->label_from1 = (gcnew System::Windows::Forms::Label());
			this->label_price = (gcnew System::Windows::Forms::Label());
			this->label_class = (gcnew System::Windows::Forms::Label());
			this->label_airlinename = (gcnew System::Windows::Forms::Label());
			this->label_to = (gcnew System::Windows::Forms::Label());
			this->label_from = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(339, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &bill::button1_Click);
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->BackColor = System::Drawing::Color::Transparent;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_name->ForeColor = System::Drawing::Color::Maroon;
			this->label_name->Location = System::Drawing::Point(6, 32);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(74, 23);
			this->label_name->TabIndex = 1;
			this->label_name->Text = L"Name:";
			this->label_name->Click += gcnew System::EventHandler(this, &bill::label_name_Click);
			// 
			// label_age
			// 
			this->label_age->AutoSize = true;
			this->label_age->BackColor = System::Drawing::Color::Transparent;
			this->label_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_age->ForeColor = System::Drawing::Color::Maroon;
			this->label_age->Location = System::Drawing::Point(6, 83);
			this->label_age->Name = L"label_age";
			this->label_age->Size = System::Drawing::Size(50, 24);
			this->label_age->TabIndex = 2;
			this->label_age->Text = L"Age:";
			// 
			// label_email
			// 
			this->label_email->AutoSize = true;
			this->label_email->BackColor = System::Drawing::Color::Transparent;
			this->label_email->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_email->ForeColor = System::Drawing::Color::Maroon;
			this->label_email->Location = System::Drawing::Point(6, 133);
			this->label_email->Name = L"label_email";
			this->label_email->Size = System::Drawing::Size(75, 23);
			this->label_email->TabIndex = 3;
			this->label_email->Text = L"Email:";
			// 
			// label_age1
			// 
			this->label_age1->AutoSize = true;
			this->label_age1->BackColor = System::Drawing::Color::Transparent;
			this->label_age1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_age1->Location = System::Drawing::Point(108, 89);
			this->label_age1->Name = L"label_age1";
			this->label_age1->Size = System::Drawing::Size(47, 18);
			this->label_age1->TabIndex = 21;
			this->label_age1->Text = L"Age1";
			// 
			// label_email1
			// 
			this->label_email1->AutoSize = true;
			this->label_email1->BackColor = System::Drawing::Color::Transparent;
			this->label_email1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_email1->Location = System::Drawing::Point(108, 138);
			this->label_email1->Name = L"label_email1";
			this->label_email1->Size = System::Drawing::Size(66, 18);
			this->label_email1->TabIndex = 22;
			this->label_email1->Text = L"Email1";
			// 
			// label_name1
			// 
			this->label_name1->AutoSize = true;
			this->label_name1->BackColor = System::Drawing::Color::Transparent;
			this->label_name1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_name1->Location = System::Drawing::Point(97, 37);
			this->label_name1->Name = L"label_name1";
			this->label_name1->Size = System::Drawing::Size(65, 18);
			this->label_name1->TabIndex = 23;
			this->label_name1->Text = L"Name1";
			this->label_name1->Click += gcnew System::EventHandler(this, &bill::label_name1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label_email1);
			this->groupBox1->Controls->Add(this->label_email);
			this->groupBox1->Controls->Add(this->label_age);
			this->groupBox1->Controls->Add(this->label_age1);
			this->groupBox1->Controls->Add(this->label_name1);
			this->groupBox1->Controls->Add(this->label_name);
			this->groupBox1->Location = System::Drawing::Point(39, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(281, 174);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label_contactnumber1);
			this->groupBox2->Controls->Add(this->label_cnic1);
			this->groupBox2->Controls->Add(this->label_gender1);
			this->groupBox2->Controls->Add(this->label_contactnumber);
			this->groupBox2->Controls->Add(this->label_cnic);
			this->groupBox2->Controls->Add(this->label_gender);
			this->groupBox2->Location = System::Drawing::Point(418, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(336, 180);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			// 
			// label_contactnumber1
			// 
			this->label_contactnumber1->AutoSize = true;
			this->label_contactnumber1->BackColor = System::Drawing::Color::Transparent;
			this->label_contactnumber1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_contactnumber1->Location = System::Drawing::Point(178, 138);
			this->label_contactnumber1->Name = L"label_contactnumber1";
			this->label_contactnumber1->Size = System::Drawing::Size(151, 18);
			this->label_contactnumber1->TabIndex = 32;
			this->label_contactnumber1->Text = L"Contact number1";
			// 
			// label_cnic1
			// 
			this->label_cnic1->AutoSize = true;
			this->label_cnic1->BackColor = System::Drawing::Color::Transparent;
			this->label_cnic1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_cnic1->Location = System::Drawing::Point(172, 89);
			this->label_cnic1->Name = L"label_cnic1";
			this->label_cnic1->Size = System::Drawing::Size(60, 18);
			this->label_cnic1->TabIndex = 31;
			this->label_cnic1->Text = L"CNIC1";
			// 
			// label_gender1
			// 
			this->label_gender1->AutoSize = true;
			this->label_gender1->BackColor = System::Drawing::Color::Transparent;
			this->label_gender1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_gender1->ForeColor = System::Drawing::Color::Black;
			this->label_gender1->Location = System::Drawing::Point(172, 37);
			this->label_gender1->Name = L"label_gender1";
			this->label_gender1->Size = System::Drawing::Size(78, 18);
			this->label_gender1->TabIndex = 30;
			this->label_gender1->Text = L"Gender1";
			this->label_gender1->Click += gcnew System::EventHandler(this, &bill::label1_Click);
			// 
			// label_contactnumber
			// 
			this->label_contactnumber->AutoSize = true;
			this->label_contactnumber->BackColor = System::Drawing::Color::Transparent;
			this->label_contactnumber->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_contactnumber->ForeColor = System::Drawing::Color::Maroon;
			this->label_contactnumber->Location = System::Drawing::Point(5, 133);
			this->label_contactnumber->Name = L"label_contactnumber";
			this->label_contactnumber->Size = System::Drawing::Size(176, 23);
			this->label_contactnumber->TabIndex = 29;
			this->label_contactnumber->Text = L"Contact number:";
			// 
			// label_cnic
			// 
			this->label_cnic->AutoSize = true;
			this->label_cnic->BackColor = System::Drawing::Color::Transparent;
			this->label_cnic->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_cnic->ForeColor = System::Drawing::Color::Maroon;
			this->label_cnic->Location = System::Drawing::Point(5, 84);
			this->label_cnic->Name = L"label_cnic";
			this->label_cnic->Size = System::Drawing::Size(69, 23);
			this->label_cnic->TabIndex = 28;
			this->label_cnic->Text = L"CNIC:";
			// 
			// label_gender
			// 
			this->label_gender->AutoSize = true;
			this->label_gender->BackColor = System::Drawing::Color::Transparent;
			this->label_gender->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_gender->ForeColor = System::Drawing::Color::Maroon;
			this->label_gender->Location = System::Drawing::Point(5, 32);
			this->label_gender->Name = L"label_gender";
			this->label_gender->Size = System::Drawing::Size(90, 23);
			this->label_gender->TabIndex = 27;
			this->label_gender->Text = L"Gender:";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label_price1);
			this->groupBox3->Controls->Add(this->label_class1);
			this->groupBox3->Controls->Add(this->label_airlinename1);
			this->groupBox3->Controls->Add(this->label_fno1);
			this->groupBox3->Controls->Add(this->label_fno);
			this->groupBox3->Controls->Add(this->label_to1);
			this->groupBox3->Controls->Add(this->label_from1);
			this->groupBox3->Controls->Add(this->label_price);
			this->groupBox3->Controls->Add(this->label_class);
			this->groupBox3->Controls->Add(this->label_airlinename);
			this->groupBox3->Controls->Add(this->label_to);
			this->groupBox3->Controls->Add(this->label_from);
			this->groupBox3->Location = System::Drawing::Point(26, 320);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(711, 156);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			// 
			// label_price1
			// 
			this->label_price1->AutoSize = true;
			this->label_price1->BackColor = System::Drawing::Color::Transparent;
			this->label_price1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_price1->Location = System::Drawing::Point(623, 96);
			this->label_price1->Name = L"label_price1";
			this->label_price1->Size = System::Drawing::Size(60, 18);
			this->label_price1->TabIndex = 32;
			this->label_price1->Text = L"Price1";
			// 
			// label_class1
			// 
			this->label_class1->AutoSize = true;
			this->label_class1->BackColor = System::Drawing::Color::Transparent;
			this->label_class1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_class1->Location = System::Drawing::Point(623, 46);
			this->label_class1->Name = L"label_class1";
			this->label_class1->Size = System::Drawing::Size(60, 18);
			this->label_class1->TabIndex = 31;
			this->label_class1->Text = L"Class1";
			// 
			// label_airlinename1
			// 
			this->label_airlinename1->AutoSize = true;
			this->label_airlinename1->BackColor = System::Drawing::Color::Transparent;
			this->label_airlinename1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_airlinename1->Location = System::Drawing::Point(389, 46);
			this->label_airlinename1->Name = L"label_airlinename1";
			this->label_airlinename1->Size = System::Drawing::Size(127, 18);
			this->label_airlinename1->TabIndex = 30;
			this->label_airlinename1->Text = L"Airline Name1";
			// 
			// label_fno1
			// 
			this->label_fno1->AutoSize = true;
			this->label_fno1->BackColor = System::Drawing::Color::Transparent;
			this->label_fno1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_fno1->Location = System::Drawing::Point(121, 41);
			this->label_fno1->Name = L"label_fno1";
			this->label_fno1->Size = System::Drawing::Size(54, 18);
			this->label_fno1->TabIndex = 29;
			this->label_fno1->Text = L"F.no1";
			this->label_fno1->Click += gcnew System::EventHandler(this, &bill::label_fno1_Click);
			// 
			// label_fno
			// 
			this->label_fno->AutoSize = true;
			this->label_fno->BackColor = System::Drawing::Color::Transparent;
			this->label_fno->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_fno->ForeColor = System::Drawing::Color::Maroon;
			this->label_fno->Location = System::Drawing::Point(27, 38);
			this->label_fno->Name = L"label_fno";
			this->label_fno->Size = System::Drawing::Size(61, 23);
			this->label_fno->TabIndex = 28;
			this->label_fno->Text = L"F.no:";
			// 
			// label_to1
			// 
			this->label_to1->AutoSize = true;
			this->label_to1->BackColor = System::Drawing::Color::Transparent;
			this->label_to1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_to1->Location = System::Drawing::Point(389, 92);
			this->label_to1->Name = L"label_to1";
			this->label_to1->Size = System::Drawing::Size(39, 18);
			this->label_to1->TabIndex = 27;
			this->label_to1->Text = L"To1";
			this->label_to1->Click += gcnew System::EventHandler(this, &bill::label_to1_Click);
			// 
			// label_from1
			// 
			this->label_from1->AutoSize = true;
			this->label_from1->BackColor = System::Drawing::Color::Transparent;
			this->label_from1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_from1->Location = System::Drawing::Point(121, 92);
			this->label_from1->Name = L"label_from1";
			this->label_from1->Size = System::Drawing::Size(62, 18);
			this->label_from1->TabIndex = 26;
			this->label_from1->Text = L"From1";
			// 
			// label_price
			// 
			this->label_price->AutoSize = true;
			this->label_price->BackColor = System::Drawing::Color::Transparent;
			this->label_price->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_price->ForeColor = System::Drawing::Color::Maroon;
			this->label_price->Location = System::Drawing::Point(545, 92);
			this->label_price->Name = L"label_price";
			this->label_price->Size = System::Drawing::Size(61, 23);
			this->label_price->TabIndex = 25;
			this->label_price->Text = L"Price";
			// 
			// label_class
			// 
			this->label_class->AutoSize = true;
			this->label_class->BackColor = System::Drawing::Color::Transparent;
			this->label_class->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_class->ForeColor = System::Drawing::Color::Maroon;
			this->label_class->Location = System::Drawing::Point(545, 41);
			this->label_class->Name = L"label_class";
			this->label_class->Size = System::Drawing::Size(69, 23);
			this->label_class->TabIndex = 24;
			this->label_class->Text = L"Class:";
			// 
			// label_airlinename
			// 
			this->label_airlinename->AutoSize = true;
			this->label_airlinename->BackColor = System::Drawing::Color::Transparent;
			this->label_airlinename->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_airlinename->ForeColor = System::Drawing::Color::Maroon;
			this->label_airlinename->Location = System::Drawing::Point(241, 41);
			this->label_airlinename->Name = L"label_airlinename";
			this->label_airlinename->Size = System::Drawing::Size(148, 23);
			this->label_airlinename->TabIndex = 23;
			this->label_airlinename->Text = L"Airline Name:";
			// 
			// label_to
			// 
			this->label_to->AutoSize = true;
			this->label_to->BackColor = System::Drawing::Color::Transparent;
			this->label_to->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_to->ForeColor = System::Drawing::Color::Maroon;
			this->label_to->Location = System::Drawing::Point(241, 89);
			this->label_to->Name = L"label_to";
			this->label_to->Size = System::Drawing::Size(42, 23);
			this->label_to->TabIndex = 22;
			this->label_to->Text = L"To:";
			// 
			// label_from
			// 
			this->label_from->AutoSize = true;
			this->label_from->BackColor = System::Drawing::Color::Transparent;
			this->label_from->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_from->ForeColor = System::Drawing::Color::Maroon;
			this->label_from->Location = System::Drawing::Point(27, 89);
			this->label_from->Name = L"label_from";
			this->label_from->Size = System::Drawing::Size(71, 23);
			this->label_from->TabIndex = 21;
			this->label_from->Text = L"From:";
			// 
			// bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(781, 577);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Name = L"bill";
			this->Text = L"Air Ticket Reservation System";
			this->Load += gcnew System::EventHandler(this, &bill::bill_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void label_name_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void bill_Load(System::Object^ sender, System::EventArgs^ e) {

	label_name1->Text = msclr::interop::marshal_as<String^>(mainObject->getname());
	label_age1->Text = msclr::interop::marshal_as<String^>(mainObject->getage());
	label_cnic1->Text = msclr::interop::marshal_as<String^>(mainObject->getcnic());
	label_contactnumber1->Text = msclr::interop::marshal_as<String^>(mainObject->getcontact());
	label_gender1->Text = msclr::interop::marshal_as<String^>(mainObject->getgender());
	label_email1->Text = msclr::interop::marshal_as<String^>(mainObject->getemail());
	label_airlinename1->Text = msclr::interop::marshal_as<String^>(fObject->get_airline());
	label_class1->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
	label_fno1->Text = msclr::interop::marshal_as<String^>(fObject->get_flightnum());
	label_price1->Text = msclr::interop::marshal_as<String^>(fObject->get_price());
	label_from1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
	label_to1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
}
	   
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}


	   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		   this->Hide();
		   
	   }

private: System::Void label_fno1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_to1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label_name1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
