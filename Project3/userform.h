//#pragma once
#ifndef USERFORM_H
#define USERFORM_H
#include"Header.h"
#include<fstream>
#include<iostream>
#include<msclr\marshal_cppstd.h>
extern long int pnr_check;
extern string temppassword;
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
	/// Summary for userform
	/// </summary>
	public ref class userform : public System::Windows::Forms::Form
	{
	public:
		userform(void)
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
		~userform()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;

























	private: System::Windows::Forms::Button^ button_Cancel;
	private: System::Windows::Forms::Button^ button_Back;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ ArriveLabel;
	private: System::Windows::Forms::Label^ DepartLabel;
	private: System::Windows::Forms::Label^ PriceLabel;
	private: System::Windows::Forms::Label^ ToLabel;
	private: System::Windows::Forms::Label^ FromLabel;
	private: System::Windows::Forms::Label^ ClassLabel;
	private: System::Windows::Forms::Label^ AirlineNameLabel;
	private: System::Windows::Forms::Label^ FlightNolabel;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(userform::typeid));
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->button_Cancel = (gcnew System::Windows::Forms::Button());
			this->button_Back = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ArriveLabel = (gcnew System::Windows::Forms::Label());
			this->DepartLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->ToLabel = (gcnew System::Windows::Forms::Label());
			this->FromLabel = (gcnew System::Windows::Forms::Label());
			this->ClassLabel = (gcnew System::Windows::Forms::Label());
			this->AirlineNameLabel = (gcnew System::Windows::Forms::Label());
			this->FlightNolabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// button_Cancel
			// 
			this->button_Cancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_Cancel->Location = System::Drawing::Point(482, 531);
			this->button_Cancel->Name = L"button_Cancel";
			this->button_Cancel->Size = System::Drawing::Size(75, 23);
			this->button_Cancel->TabIndex = 29;
			this->button_Cancel->Text = L"Cancel";
			this->button_Cancel->UseVisualStyleBackColor = true;
			this->button_Cancel->Click += gcnew System::EventHandler(this, &userform::button_Cancel_Click);
			// 
			// button_Back
			// 
			this->button_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_Back->Location = System::Drawing::Point(209, 531);
			this->button_Back->Name = L"button_Back";
			this->button_Back->Size = System::Drawing::Size(75, 23);
			this->button_Back->TabIndex = 30;
			this->button_Back->Text = L"Back";
			this->button_Back->UseVisualStyleBackColor = true;
			this->button_Back->Click += gcnew System::EventHandler(this, &userform::button_Back_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(35, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(685, 135);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &userform::groupBox1_Enter);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(534, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"label12";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(534, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 18);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Email";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(419, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"label10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(273, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(419, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 18);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Gender";
			this->label8->Click += gcnew System::EventHandler(this, &userform::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(273, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 18);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Contact Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(99, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(99, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Age";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(166, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(166, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 18);
			this->label3->TabIndex = 14;
			this->label3->Text = L"CNIC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(3, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 18);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Name";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->ArriveLabel);
			this->groupBox2->Controls->Add(this->DepartLabel);
			this->groupBox2->Controls->Add(this->PriceLabel);
			this->groupBox2->Controls->Add(this->ToLabel);
			this->groupBox2->Controls->Add(this->FromLabel);
			this->groupBox2->Controls->Add(this->ClassLabel);
			this->groupBox2->Controls->Add(this->AirlineNameLabel);
			this->groupBox2->Controls->Add(this->FlightNolabel);
			this->groupBox2->Location = System::Drawing::Point(21, 371);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(733, 129);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(628, 93);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 16);
			this->label21->TabIndex = 44;
			this->label21->Text = L"label21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(534, 93);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 16);
			this->label20->TabIndex = 43;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(458, 93);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 16);
			this->label19->TabIndex = 42;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(372, 93);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(53, 16);
			this->label18->TabIndex = 41;
			this->label18->Text = L"label18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(295, 93);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 16);
			this->label17->TabIndex = 40;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(213, 93);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 16);
			this->label16->TabIndex = 39;
			this->label16->Text = L"label16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(132, 93);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 16);
			this->label15->TabIndex = 38;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(33, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 16);
			this->label14->TabIndex = 37;
			this->label14->Text = L"label14";
			// 
			// ArriveLabel
			// 
			this->ArriveLabel->AutoSize = true;
			this->ArriveLabel->BackColor = System::Drawing::Color::Transparent;
			this->ArriveLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArriveLabel->ForeColor = System::Drawing::Color::Maroon;
			this->ArriveLabel->Location = System::Drawing::Point(628, 33);
			this->ArriveLabel->Name = L"ArriveLabel";
			this->ArriveLabel->Size = System::Drawing::Size(96, 18);
			this->ArriveLabel->TabIndex = 36;
			this->ArriveLabel->Text = L"Arrive Date";
			// 
			// DepartLabel
			// 
			this->DepartLabel->AutoSize = true;
			this->DepartLabel->BackColor = System::Drawing::Color::Transparent;
			this->DepartLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepartLabel->ForeColor = System::Drawing::Color::Maroon;
			this->DepartLabel->Location = System::Drawing::Point(525, 33);
			this->DepartLabel->Name = L"DepartLabel";
			this->DepartLabel->Size = System::Drawing::Size(100, 18);
			this->DepartLabel->TabIndex = 35;
			this->DepartLabel->Text = L"Depart Date";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->PriceLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel->ForeColor = System::Drawing::Color::Maroon;
			this->PriceLabel->Location = System::Drawing::Point(458, 33);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(48, 18);
			this->PriceLabel->TabIndex = 34;
			this->PriceLabel->Text = L"Price";
			// 
			// ToLabel
			// 
			this->ToLabel->AutoSize = true;
			this->ToLabel->BackColor = System::Drawing::Color::Transparent;
			this->ToLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToLabel->ForeColor = System::Drawing::Color::Maroon;
			this->ToLabel->Location = System::Drawing::Point(295, 33);
			this->ToLabel->Name = L"ToLabel";
			this->ToLabel->Size = System::Drawing::Size(28, 18);
			this->ToLabel->TabIndex = 33;
			this->ToLabel->Text = L"To";
			// 
			// FromLabel
			// 
			this->FromLabel->AutoSize = true;
			this->FromLabel->BackColor = System::Drawing::Color::Transparent;
			this->FromLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FromLabel->ForeColor = System::Drawing::Color::Maroon;
			this->FromLabel->Location = System::Drawing::Point(213, 33);
			this->FromLabel->Name = L"FromLabel";
			this->FromLabel->Size = System::Drawing::Size(50, 18);
			this->FromLabel->TabIndex = 32;
			this->FromLabel->Text = L"From";
			// 
			// ClassLabel
			// 
			this->ClassLabel->AutoSize = true;
			this->ClassLabel->BackColor = System::Drawing::Color::Transparent;
			this->ClassLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClassLabel->ForeColor = System::Drawing::Color::Maroon;
			this->ClassLabel->Location = System::Drawing::Point(132, 33);
			this->ClassLabel->Name = L"ClassLabel";
			this->ClassLabel->Size = System::Drawing::Size(47, 18);
			this->ClassLabel->TabIndex = 31;
			this->ClassLabel->Text = L"Class";
			// 
			// AirlineNameLabel
			// 
			this->AirlineNameLabel->AutoSize = true;
			this->AirlineNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->AirlineNameLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AirlineNameLabel->ForeColor = System::Drawing::Color::Maroon;
			this->AirlineNameLabel->Location = System::Drawing::Point(26, 33);
			this->AirlineNameLabel->Name = L"AirlineNameLabel";
			this->AirlineNameLabel->Size = System::Drawing::Size(109, 18);
			this->AirlineNameLabel->TabIndex = 30;
			this->AirlineNameLabel->Text = L"Airline Name";
			// 
			// FlightNolabel
			// 
			this->FlightNolabel->AutoSize = true;
			this->FlightNolabel->BackColor = System::Drawing::Color::Transparent;
			this->FlightNolabel->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FlightNolabel->ForeColor = System::Drawing::Color::Maroon;
			this->FlightNolabel->Location = System::Drawing::Point(372, 33);
			this->FlightNolabel->Name = L"FlightNolabel";
			this->FlightNolabel->Size = System::Drawing::Size(49, 18);
			this->FlightNolabel->TabIndex = 29;
			this->FlightNolabel->Text = L"F. No";
			// 
			// userform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(766, 577);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_Back);
			this->Controls->Add(this->button_Cancel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"userform";
			this->Text = L"Air Ticket Reservation System";
			this->Load += gcnew System::EventHandler(this, &userform::userform_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void userform_Load(System::Object^ sender, System::EventArgs^ e) {

		label2->Text = msclr::interop::marshal_as<String^>(mainObject->getname());
		label6->Text = msclr::interop::marshal_as<String^>(mainObject->getage());
		label4->Text = msclr::interop::marshal_as<String^>(mainObject->getcnic());
		label9->Text = msclr::interop::marshal_as<String^>(mainObject->getcontact());
		label10->Text = msclr::interop::marshal_as<String^>(mainObject->getgender());
		label12->Text = msclr::interop::marshal_as<String^>(mainObject->getemail());
		label14->Text = msclr::interop::marshal_as<String^>(fObject->get_airline());
		label15->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
		label16->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
		label17->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
		label18->Text = msclr::interop::marshal_as<String^>(fObject->get_flightnum());
		label19->Text = msclr::interop::marshal_as<String^>(fObject->get_price());
		label20->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
		label21->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
		if (fObject->get_category() == "One Way")
		{
			label21->Visible=false;
			ArriveLabel->Visible = false;
		}
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	fObject = new flight;
	ifstream is1("Booking123.dat", ios::in | ios::binary);
	if (!is1)
	{
		MessageBox::Show("No data Found!");
	}
	else
	{
		ofstream os1("Tempbooking.dat", ios::out | ios::binary);

		while (1)
		{
			if (is1.eof())
			{
				break;
			}

			is1.read((char*)&display, sizeof(display));
			
			if (pnr_check == display.getpnr())
			{

			}
			else
			{
				os1.write((char*)&display, sizeof(display));

			}

		}

		is1.close();
		os1.close();
		remove("Booking123.dat");
		rename("Tempbooking.dat","Booking123.dat");
	}
		ifstream is2("flight.dat", ios::in | ios::binary);
		if (!is2)
		{
			MessageBox::Show("No data Found!");
		}
		else
		{
			ofstream os2("tempflight.dat", ios::out | ios::binary);

			while (1)
			{
				if (is2.eof())
				{
					break;
				}

				is2.read((char*)fObject, sizeof(*fObject));
				
				if (pnr_check == fObject->get_pnr())
				{

				}
				else
				{
					os2.write((char*)fObject, sizeof(*fObject));

				}

			}

		os2.close();
		is2.close();
		remove("flight.dat");
		rename("tempflight.dat","flight.dat");
		MessageBox::Show("Flight Cancelled Successfully!");
		this->Hide();
		}

	
	
//}
	}
private: System::Void button_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	//abc mub;
	//mub.xyz();
	//Login^ obj = gcnew Login();
	//obj->ShowDialog();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#endif
