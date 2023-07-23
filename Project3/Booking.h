//#pragma once
#ifndef BOOKING_H
#define BOOKING_H
#include"Header.h"
#include<fstream>
#include<iostream>
#include<msclr\marshal_cppstd.h>
#include"bill.h"
extern flight* fObject;
extern user* mainObject;
extern netBanking nObject;
extern credit cObject;
extern debit dObject;
extern long int pnr_display;
extern int click;
using namespace std;
using namespace System::IO;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Booking
	/// </summary>
	public ref class Booking : public System::Windows::Forms::Form
	{
	public:
		Booking(void)
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
		~Booking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ paymentMethod;
	private: System::Windows::Forms::RadioButton^ netButton;
	protected:

	protected:

	private: System::Windows::Forms::RadioButton^ debitButton;

	private: System::Windows::Forms::RadioButton^ creditButton;

	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ age;





	private: System::Windows::Forms::TextBox^ fullName;
	private: System::Windows::Forms::TextBox^ contactNum;
	private: System::Windows::Forms::TextBox^ email;

	private: System::Windows::Forms::TextBox^ cnic;





	private: System::Windows::Forms::TextBox^ debitCardnum;
	private: System::Windows::Forms::TextBox^ debitCvv;


	private: System::Windows::Forms::TextBox^ creditCvv;
	private: System::Windows::Forms::TextBox^ creditnum;

	private: System::Windows::Forms::TextBox^ netPassword;





	private: System::Windows::Forms::TextBox^ netUsername;
	private: System::Windows::Forms::ComboBox^ gender;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ emailLabel;

	private: System::Windows::Forms::Label^ contactLabel;

	private: System::Windows::Forms::Label^ ageLabel;

	private: System::Windows::Forms::Label^ nameLabel;

	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Label^ genderLabel;
	private: System::Windows::Forms::Label^ cnicLabel;
	private: System::Windows::Forms::Label^ debitcvvLabel;

	private: System::Windows::Forms::Label^ debitexpLabel;

	private: System::Windows::Forms::Label^ debitcardnumLabel;
	private: System::Windows::Forms::DateTimePicker^ debitExp;

	private: System::Windows::Forms::Label^ netpasswordLabel;
	private: System::Windows::Forms::Label^ netusernameLabel;
	private: System::Windows::Forms::Label^ creditnumLabel;

	private: System::Windows::Forms::Label^ creditcvvLabel;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Label^ pnrLabel;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Booking::typeid));
			this->paymentMethod = (gcnew System::Windows::Forms::GroupBox());
			this->netButton = (gcnew System::Windows::Forms::RadioButton());
			this->debitButton = (gcnew System::Windows::Forms::RadioButton());
			this->creditButton = (gcnew System::Windows::Forms::RadioButton());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->fullName = (gcnew System::Windows::Forms::TextBox());
			this->contactNum = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->cnic = (gcnew System::Windows::Forms::TextBox());
			this->debitCardnum = (gcnew System::Windows::Forms::TextBox());
			this->debitCvv = (gcnew System::Windows::Forms::TextBox());
			this->creditCvv = (gcnew System::Windows::Forms::TextBox());
			this->creditnum = (gcnew System::Windows::Forms::TextBox());
			this->netPassword = (gcnew System::Windows::Forms::TextBox());
			this->netUsername = (gcnew System::Windows::Forms::TextBox());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->contactLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->cnicLabel = (gcnew System::Windows::Forms::Label());
			this->debitcvvLabel = (gcnew System::Windows::Forms::Label());
			this->debitexpLabel = (gcnew System::Windows::Forms::Label());
			this->debitcardnumLabel = (gcnew System::Windows::Forms::Label());
			this->debitExp = (gcnew System::Windows::Forms::DateTimePicker());
			this->netpasswordLabel = (gcnew System::Windows::Forms::Label());
			this->netusernameLabel = (gcnew System::Windows::Forms::Label());
			this->creditnumLabel = (gcnew System::Windows::Forms::Label());
			this->creditcvvLabel = (gcnew System::Windows::Forms::Label());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->pnrLabel = (gcnew System::Windows::Forms::Label());
			this->paymentMethod->SuspendLayout();
			this->SuspendLayout();
			// 
			// paymentMethod
			// 
			this->paymentMethod->BackColor = System::Drawing::Color::Transparent;
			this->paymentMethod->Controls->Add(this->netButton);
			this->paymentMethod->Controls->Add(this->debitButton);
			this->paymentMethod->Controls->Add(this->creditButton);
			this->paymentMethod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentMethod->ForeColor = System::Drawing::Color::Black;
			this->paymentMethod->Location = System::Drawing::Point(77, 382);
			this->paymentMethod->Name = L"paymentMethod";
			this->paymentMethod->Size = System::Drawing::Size(200, 116);
			this->paymentMethod->TabIndex = 0;
			this->paymentMethod->TabStop = false;
			this->paymentMethod->Text = L"Payment Method";
			// 
			// netButton
			// 
			this->netButton->AutoSize = true;
			this->netButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netButton->Location = System::Drawing::Point(3, 81);
			this->netButton->Name = L"netButton";
			this->netButton->Size = System::Drawing::Size(113, 25);
			this->netButton->TabIndex = 2;
			this->netButton->TabStop = true;
			this->netButton->Text = L"Net Banking";
			this->netButton->UseVisualStyleBackColor = true;
			this->netButton->CheckedChanged += gcnew System::EventHandler(this, &Booking::netButton_CheckedChanged);
			// 
			// debitButton
			// 
			this->debitButton->AutoSize = true;
			this->debitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitButton->Location = System::Drawing::Point(3, 50);
			this->debitButton->Name = L"debitButton";
			this->debitButton->Size = System::Drawing::Size(102, 25);
			this->debitButton->TabIndex = 1;
			this->debitButton->TabStop = true;
			this->debitButton->Text = L"Debit Card";
			this->debitButton->UseVisualStyleBackColor = true;
			this->debitButton->CheckedChanged += gcnew System::EventHandler(this, &Booking::debitButton_CheckedChanged);
			// 
			// creditButton
			// 
			this->creditButton->AutoSize = true;
			this->creditButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditButton->Location = System::Drawing::Point(3, 19);
			this->creditButton->Name = L"creditButton";
			this->creditButton->Size = System::Drawing::Size(107, 25);
			this->creditButton->TabIndex = 0;
			this->creditButton->TabStop = true;
			this->creditButton->Text = L"Credit Card";
			this->creditButton->UseVisualStyleBackColor = true;
			this->creditButton->CheckedChanged += gcnew System::EventHandler(this, &Booking::creditButton_CheckedChanged);
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(320, 52);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(116, 25);
			this->password->TabIndex = 2;
			// 
			// age
			// 
			this->age->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->Location = System::Drawing::Point(77, 127);
			this->age->MaxLength = 3;
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(100, 25);
			this->age->TabIndex = 3;
			// 
			// fullName
			// 
			this->fullName->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fullName->Location = System::Drawing::Point(542, 52);
			this->fullName->Name = L"fullName";
			this->fullName->Size = System::Drawing::Size(131, 25);
			this->fullName->TabIndex = 4;
			// 
			// contactNum
			// 
			this->contactNum->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactNum->Location = System::Drawing::Point(320, 127);
			this->contactNum->Name = L"contactNum";
			this->contactNum->Size = System::Drawing::Size(116, 25);
			this->contactNum->TabIndex = 6;
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(542, 127);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(131, 25);
			this->email->TabIndex = 7;
			// 
			// cnic
			// 
			this->cnic->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(542, 205);
			this->cnic->MaxLength = 15;
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(131, 25);
			this->cnic->TabIndex = 9;
			// 
			// debitCardnum
			// 
			this->debitCardnum->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitCardnum->Location = System::Drawing::Point(418, 385);
			this->debitCardnum->Name = L"debitCardnum";
			this->debitCardnum->Size = System::Drawing::Size(100, 25);
			this->debitCardnum->TabIndex = 10;
			// 
			// debitCvv
			// 
			this->debitCvv->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitCvv->Location = System::Drawing::Point(418, 473);
			this->debitCvv->Name = L"debitCvv";
			this->debitCvv->Size = System::Drawing::Size(100, 25);
			this->debitCvv->TabIndex = 11;
			// 
			// creditCvv
			// 
			this->creditCvv->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditCvv->Location = System::Drawing::Point(418, 473);
			this->creditCvv->Name = L"creditCvv";
			this->creditCvv->Size = System::Drawing::Size(100, 25);
			this->creditCvv->TabIndex = 13;
			// 
			// creditnum
			// 
			this->creditnum->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditnum->Location = System::Drawing::Point(418, 385);
			this->creditnum->MaxLength = 100;
			this->creditnum->Name = L"creditnum";
			this->creditnum->Size = System::Drawing::Size(100, 25);
			this->creditnum->TabIndex = 14;
			this->creditnum->TextChanged += gcnew System::EventHandler(this, &Booking::creditPin_TextChanged);
			// 
			// netPassword
			// 
			this->netPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netPassword->Location = System::Drawing::Point(418, 473);
			this->netPassword->Name = L"netPassword";
			this->netPassword->Size = System::Drawing::Size(100, 25);
			this->netPassword->TabIndex = 15;
			// 
			// netUsername
			// 
			this->netUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netUsername->Location = System::Drawing::Point(418, 385);
			this->netUsername->MaxLength = 6969;
			this->netUsername->Name = L"netUsername";
			this->netUsername->Size = System::Drawing::Size(100, 25);
			this->netUsername->TabIndex = 16;
			this->netUsername->TextChanged += gcnew System::EventHandler(this, &Booking::netUsername_TextChanged);
			// 
			// gender
			// 
			this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gender->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->FormattingEnabled = true;
			this->gender->Location = System::Drawing::Point(77, 202);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(100, 25);
			this->gender->TabIndex = 17;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->Location = System::Drawing::Point(74, 25);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(30, 15);
			this->usernameLabel->TabIndex = 18;
			this->usernameLabel->Text = L"PNR";
			this->usernameLabel->Click += gcnew System::EventHandler(this, &Booking::usernameLabel_Click);
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->BackColor = System::Drawing::Color::Transparent;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(538, 100);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(36, 15);
			this->emailLabel->TabIndex = 19;
			this->emailLabel->Text = L"Email";
			// 
			// contactLabel
			// 
			this->contactLabel->AutoSize = true;
			this->contactLabel->BackColor = System::Drawing::Color::Transparent;
			this->contactLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactLabel->Location = System::Drawing::Point(317, 100);
			this->contactLabel->Name = L"contactLabel";
			this->contactLabel->Size = System::Drawing::Size(96, 15);
			this->contactLabel->TabIndex = 20;
			this->contactLabel->Text = L"Contact Number";
			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->BackColor = System::Drawing::Color::Transparent;
			this->ageLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageLabel->Location = System::Drawing::Point(74, 100);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(28, 15);
			this->ageLabel->TabIndex = 21;
			this->ageLabel->Text = L"Age";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::Color::Transparent;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(539, 25);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(39, 15);
			this->nameLabel->TabIndex = 22;
			this->nameLabel->Text = L"Name";
			this->nameLabel->Click += gcnew System::EventHandler(this, &Booking::nameLabel_Click);
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(317, 25);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(57, 15);
			this->passwordLabel->TabIndex = 23;
			this->passwordLabel->Text = L"Password";
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->BackColor = System::Drawing::Color::Transparent;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderLabel->Location = System::Drawing::Point(74, 175);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(45, 15);
			this->genderLabel->TabIndex = 24;
			this->genderLabel->Text = L"Gender";
			// 
			// cnicLabel
			// 
			this->cnicLabel->AutoSize = true;
			this->cnicLabel->BackColor = System::Drawing::Color::Transparent;
			this->cnicLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnicLabel->Location = System::Drawing::Point(538, 175);
			this->cnicLabel->Name = L"cnicLabel";
			this->cnicLabel->Size = System::Drawing::Size(35, 15);
			this->cnicLabel->TabIndex = 25;
			this->cnicLabel->Text = L"CNIC";
			// 
			// debitcvvLabel
			// 
			this->debitcvvLabel->AutoSize = true;
			this->debitcvvLabel->BackColor = System::Drawing::Color::Transparent;
			this->debitcvvLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitcvvLabel->Location = System::Drawing::Point(415, 450);
			this->debitcvvLabel->Name = L"debitcvvLabel";
			this->debitcvvLabel->Size = System::Drawing::Size(76, 15);
			this->debitcvvLabel->TabIndex = 26;
			this->debitcvvLabel->Text = L"CVV Number";
			// 
			// debitexpLabel
			// 
			this->debitexpLabel->AutoSize = true;
			this->debitexpLabel->BackColor = System::Drawing::Color::Transparent;
			this->debitexpLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitexpLabel->Location = System::Drawing::Point(570, 364);
			this->debitexpLabel->Name = L"debitexpLabel";
			this->debitexpLabel->Size = System::Drawing::Size(65, 15);
			this->debitexpLabel->TabIndex = 27;
			this->debitexpLabel->Text = L"Expiry Date";
			// 
			// debitcardnumLabel
			// 
			this->debitcardnumLabel->AutoSize = true;
			this->debitcardnumLabel->BackColor = System::Drawing::Color::Transparent;
			this->debitcardnumLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitcardnumLabel->Location = System::Drawing::Point(415, 364);
			this->debitcardnumLabel->Name = L"debitcardnumLabel";
			this->debitcardnumLabel->Size = System::Drawing::Size(79, 15);
			this->debitcardnumLabel->TabIndex = 28;
			this->debitcardnumLabel->Text = L"Card Number";
			// 
			// debitExp
			// 
			this->debitExp->CustomFormat = L"dd/MM/yyyy";
			this->debitExp->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debitExp->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->debitExp->Location = System::Drawing::Point(573, 385);
			this->debitExp->MinDate = System::DateTime(2020, 4, 26, 0, 0, 0, 0);
			this->debitExp->Name = L"debitExp";
			this->debitExp->Size = System::Drawing::Size(100, 25);
			this->debitExp->TabIndex = 29;
			// 
			// netpasswordLabel
			// 
			this->netpasswordLabel->AutoSize = true;
			this->netpasswordLabel->BackColor = System::Drawing::Color::Transparent;
			this->netpasswordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netpasswordLabel->Location = System::Drawing::Point(415, 450);
			this->netpasswordLabel->Name = L"netpasswordLabel";
			this->netpasswordLabel->Size = System::Drawing::Size(86, 15);
			this->netpasswordLabel->TabIndex = 30;
			this->netpasswordLabel->Text = L"Bank Password";
			// 
			// netusernameLabel
			// 
			this->netusernameLabel->AutoSize = true;
			this->netusernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->netusernameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netusernameLabel->Location = System::Drawing::Point(415, 364);
			this->netusernameLabel->Name = L"netusernameLabel";
			this->netusernameLabel->Size = System::Drawing::Size(89, 15);
			this->netusernameLabel->TabIndex = 31;
			this->netusernameLabel->Text = L"Bank Username";
			// 
			// creditnumLabel
			// 
			this->creditnumLabel->AutoSize = true;
			this->creditnumLabel->BackColor = System::Drawing::Color::Transparent;
			this->creditnumLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditnumLabel->Location = System::Drawing::Point(415, 364);
			this->creditnumLabel->Name = L"creditnumLabel";
			this->creditnumLabel->Size = System::Drawing::Size(79, 15);
			this->creditnumLabel->TabIndex = 32;
			this->creditnumLabel->Text = L"Card Number";
			// 
			// creditcvvLabel
			// 
			this->creditcvvLabel->AutoSize = true;
			this->creditcvvLabel->BackColor = System::Drawing::Color::Transparent;
			this->creditcvvLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditcvvLabel->Location = System::Drawing::Point(415, 450);
			this->creditcvvLabel->Name = L"creditcvvLabel";
			this->creditcvvLabel->Size = System::Drawing::Size(76, 15);
			this->creditcvvLabel->TabIndex = 33;
			this->creditcvvLabel->Text = L"CVV Number";
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->submitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(573, 463);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(100, 35);
			this->submitButton->TabIndex = 34;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &Booking::submitButton_Click);
			this->submitButton->MouseEnter += gcnew System::EventHandler(this, &Booking::submitButton_MouseEnter);
			// 
			// pnrLabel
			// 
			this->pnrLabel->AutoSize = true;
			this->pnrLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnrLabel->Location = System::Drawing::Point(77, 52);
			this->pnrLabel->Name = L"pnrLabel";
			this->pnrLabel->Size = System::Drawing::Size(49, 17);
			this->pnrLabel->TabIndex = 35;
			this->pnrLabel->Text = L"label1";
			// 
			// Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(766, 577);
			this->Controls->Add(this->pnrLabel);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->creditcvvLabel);
			this->Controls->Add(this->creditnumLabel);
			this->Controls->Add(this->netusernameLabel);
			this->Controls->Add(this->netpasswordLabel);
			this->Controls->Add(this->debitExp);
			this->Controls->Add(this->debitcardnumLabel);
			this->Controls->Add(this->debitexpLabel);
			this->Controls->Add(this->debitcvvLabel);
			this->Controls->Add(this->cnicLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->contactLabel);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->netUsername);
			this->Controls->Add(this->netPassword);
			this->Controls->Add(this->creditnum);
			this->Controls->Add(this->creditCvv);
			this->Controls->Add(this->debitCvv);
			this->Controls->Add(this->debitCardnum);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->email);
			this->Controls->Add(this->contactNum);
			this->Controls->Add(this->fullName);
			this->Controls->Add(this->age);
			this->Controls->Add(this->password);
			this->Controls->Add(this->paymentMethod);
			this->Name = L"Booking";
			this->Text = L"Air Ticket Reservation System";
			this->Load += gcnew System::EventHandler(this, &Booking::Booking_Load);
			this->paymentMethod->ResumeLayout(false);
			this->paymentMethod->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Booking_Load(System::Object^ sender, System::EventArgs^ e) {
		gender->Items->Add("Male");
		gender->Items->Add("Female");
		ifstream pnr_read("pnr.txt", ios::in);
		pnr_read >> pnr_display;
		pnr_read.close();
		fObject->set_pnr(pnr_display);
		pnrLabel->Text = pnr_display.ToString();
	}

private: System::Void creditButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (creditButton->Checked)
	{
		creditCvv->Visible = true;
		creditcvvLabel->Visible = true;
		creditnum->Visible = true;
		creditnumLabel->Visible = true;
		debitCardnum->Visible = false;
		debitcardnumLabel->Visible = false;
		debitCvv->Visible = false;
		debitcvvLabel->Visible = false;
		debitexpLabel->Visible = false;
		debitExp->Visible = false;
		netUsername->Visible = false;
		netusernameLabel->Visible = false;
		netPassword->Visible = false;
		netpasswordLabel->Visible = false;
	}
}
private: System::Void debitButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (debitButton->Checked)
	{
		debitCardnum->Visible = true;
		debitcardnumLabel->Visible = true;
		debitCvv->Visible = true;
		debitcvvLabel->Visible = true;
		debitexpLabel->Visible = true;
		debitExp->Visible = true;
		creditCvv->Visible = false;
		creditcvvLabel->Visible = false;
		creditnum->Visible = false;
		creditnumLabel->Visible = false;
		netUsername->Visible = false;
		netusernameLabel->Visible = false;
		netPassword->Visible = false;
		netpasswordLabel->Visible = false;
	}
}
private: System::Void netButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (netButton->Checked)
	{
		netUsername->Visible = true;
		netusernameLabel->Visible = true;
		netPassword->Visible = true;
		netpasswordLabel->Visible = true;
		debitCardnum->Visible = false;
		debitcardnumLabel->Visible = false;
		debitCvv->Visible = false;
		debitcvvLabel->Visible = false;
		debitexpLabel->Visible = false;
		debitExp->Visible = false;
		creditCvv->Visible = false;
		creditcvvLabel->Visible = false;
		creditnum->Visible = false;
		creditnumLabel->Visible = false;
	}
}
private: System::Void usernameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void creditPin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int flag1=0;
	int flag2=0;
	if (netButton->Checked)
	{
		std::string password1 = msclr::interop::marshal_as < std::string >(password->Text);
		std::string fullName1 = msclr::interop::marshal_as < std::string >(fullName->Text);
		std::string age1 = msclr::interop::marshal_as < std::string >(age->Text);
		std::string contactNum1 = msclr::interop::marshal_as < std::string >(contactNum->Text);
		int size;
		size = contactNum1.length();
		if (size == 12)
		{
			
			if (contactNum1[4] == '-')
			{
				flag1 = 1;
				
				contactNum->ForeColor = System::Drawing::Color::DimGray;
				
			}
			else
			{
				flag1 = 0;
				
			}
		}
		else
		{
			flag1 = 0;
		
		}
		std::string email1 = msclr::interop::marshal_as < std::string >(email->Text);
		std::string gender1 = msclr::interop::marshal_as < std::string >(gender->Text);
		std::string cnic1 = msclr::interop::marshal_as < std::string >(cnic->Text);
		int size2;
		size2 = cnic1.length();
		if (size2 == 15)
		{
			if (cnic1[5] == '-' && cnic1[13] == '-')
			{
				flag2 = 1;
				cnic->ForeColor = System::Drawing::Color::DimGray;
				

			}
			else
			{
				flag2 = 0;
			}

		}
		else
		{
			flag2 = 0;
		}
	
		std::string netUsername1 = msclr::interop::marshal_as < std::string >(netUsername->Text);
		std::string netPassword1 = msclr::interop::marshal_as < std::string >(netPassword->Text);
		if (flag1 == 0 && flag2==1)
		{
			MessageBox::Show("Invalid Contact Format!\nPlease try again!\nFORMAT= ####-#######", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			contactNum->Clear();
			contactNum->ForeColor = System::Drawing::Color::Black;


		}
		if (flag2 == 0 && flag1==1)
		{
			MessageBox::Show("Invalid CNIC Format!\nPlease try again!\nFORMAT= #####-#######-#", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			cnic->Clear();
			cnic->ForeColor = System::Drawing::Color::Black;
			
		}
		if (flag1 == 0 && flag2 == 0)
		{
			MessageBox::Show("CNIC and Contact Format invalid", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			cnic->Clear();
			contactNum->Clear();
			contactNum->ForeColor = System::Drawing::Color::Black;
			cnic->ForeColor = System::Drawing::Color::Black;
		}
		 if (flag1==1 && flag2==1)
		{
			mainObject = new user(pnr_display, password1, fullName1, contactNum1, email1, age1, gender1, cnic1);
			nObject = netBanking(netUsername1, netPassword1);
			nObject.set_pnr(pnr_display);
			ofstream netBanking_store("netBanking.dat", ios::app);
			netBanking_store.write((char*)&nObject, sizeof(nObject));
			netBanking_store.close();
			this->Hide();
			bill^ obj2 = gcnew bill();
			obj2->ShowDialog();
			ofstream os("Booking123.dat", ios::app | ios::binary);
			os.write((char*)mainObject, sizeof(*mainObject));
			os.close();
			pnr_display++;
			ofstream pnr_update("pnr.txt", ios::out);
			pnr_update << pnr_display;
			pnr_update.close();
			ofstream flight_write("flight.dat", ios::app | ios::binary);
			flight_write.write((char*)fObject, sizeof(*fObject));
			flight_write.close();
		}
		
	}
	else if (creditButton->Checked)
	{
		/*std::string password1 = msclr::interop::marshal_as < std::string >(password->Text);
		std::string fullName1 = msclr::interop::marshal_as < std::string >(fullName->Text);
		std::string age1 = msclr::interop::marshal_as < std::string >(age->Text);
		std::string contactNum1 = msclr::interop::marshal_as < std::string >(contactNum->Text);
		std::string email1 = msclr::interop::marshal_as < std::string >(email->Text);
		std::string gender1 = msclr::interop::marshal_as < std::string >(gender->Text);
		std::string cnic1 = msclr::interop::marshal_as < std::string >(cnic->Text);
		std::string creditCvv1 = msclr::interop::marshal_as < std::string >(creditCvv->Text);
		std::string creditPin1 = msclr::interop::marshal_as < std::string >(creditnum->Text);
		mainObject = new user(pnr_display, password1, fullName1, contactNum1, email1, age1, gender1, cnic1);
		cObject = credit(creditPin1, creditCvv1);
		cObject.set_pnr(pnr_display);
		ofstream credit_store("credit.dat", ios::app);
		credit_store.write((char*)&cObject, sizeof(cObject));
		credit_store.close();
		this->Hide();
		bill^ obj2 = gcnew bill();
		obj2->ShowDialog();
		*/
		std::string password1 = msclr::interop::marshal_as < std::string >(password->Text);
		std::string fullName1 = msclr::interop::marshal_as < std::string >(fullName->Text);
		std::string age1 = msclr::interop::marshal_as < std::string >(age->Text);
		std::string contactNum1 = msclr::interop::marshal_as < std::string >(contactNum->Text);
		int size;
		size = contactNum1.length();
		if (size == 12)
		{

			if (contactNum1[4] == '-')
			{
				flag1 = 1;

				contactNum->ForeColor = System::Drawing::Color::DimGray;

			}
			else
			{
				flag1 = 0;

			}
		}
		else
		{
			flag1 = 0;

		}
		std::string email1 = msclr::interop::marshal_as < std::string >(email->Text);
		std::string gender1 = msclr::interop::marshal_as < std::string >(gender->Text);
		std::string cnic1 = msclr::interop::marshal_as < std::string >(cnic->Text);
		int size2;
		size2 = cnic1.length();
		if (size2 == 15)
		{
			if (cnic1[5] == 45 && cnic1[13] == 45)
			{
				flag2 = 1;
				cnic->ForeColor = System::Drawing::Color::DimGray;


			}
			else
			{
				flag2 = 0;
			}

		}
		else
		{
			flag2 = 0;
		}

		std::string creditCvv1 = msclr::interop::marshal_as < std::string >(creditCvv->Text);
		std::string creditPin1 = msclr::interop::marshal_as < std::string >(creditnum->Text);
		if (flag1 == 0 && flag2 == 1)
		{
			MessageBox::Show("Invalid Contact Format!\nPlease try again!\nFORMAT= ####-#######", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			contactNum->Clear();
			contactNum->ForeColor = System::Drawing::Color::Black;


		}
		if (flag2 == 0 && flag1 == 1)
		{
			MessageBox::Show("Invalid CNIC Format!\nPlease try again!\nFORMAT= #####-#######-#", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			cnic->Clear();
			cnic->ForeColor = System::Drawing::Color::Black;

		}
		if (flag1 == 0 && flag2 == 0)
		{
			MessageBox::Show("CNIC and Contact Format invalid", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			cnic->Clear();
			contactNum->Clear();
			contactNum->ForeColor = System::Drawing::Color::Black;
			cnic->ForeColor = System::Drawing::Color::Black;

		}
		if (flag1 == 1 && flag2 == 1)
		{
			mainObject = new user(pnr_display, password1, fullName1, contactNum1, email1, age1, gender1, cnic1);
			cObject = credit(creditPin1, creditCvv1);
			cObject.set_pnr(pnr_display);
			ofstream credit_store("credit.dat", ios::app);
			credit_store.write((char*)&cObject, sizeof(cObject));
			credit_store.close();
			this->Hide();
			bill^ obj2 = gcnew bill();
			obj2->ShowDialog();
			ofstream os("Booking123.dat", ios::app | ios::binary);
			os.write((char*)mainObject, sizeof(*mainObject));
			os.close();
			pnr_display++;
			ofstream pnr_update("pnr.txt", ios::out);
			pnr_update << pnr_display;
			pnr_update.close();
			ofstream flight_write("flight.dat", ios::app | ios::binary);
			flight_write.write((char*)fObject, sizeof(*fObject));
			flight_write.close();
		}
	}
	else if (debitButton->Checked)
	{
		
	/*std::string password1 = msclr::interop::marshal_as < std::string >(password->Text);
		std::string fullName1 = msclr::interop::marshal_as < std::string >(fullName->Text);
		std::string age1 = msclr::interop::marshal_as < std::string >(age->Text);
		std::string contactNum1 = msclr::interop::marshal_as < std::string >(contactNum->Text);
		std::string email1 = msclr::interop::marshal_as < std::string >(email->Text);
		std::string gender1 = msclr::interop::marshal_as < std::string >(gender->Text);
		std::string cnic1 = msclr::interop::marshal_as < std::string >(cnic->Text);
		std::string debitCardnum1 = msclr::interop::marshal_as < std::string >(debitCardnum->Text);
		std::string debitCvv1 = msclr::interop::marshal_as < std::string >(debitCvv->Text);
		std::string debitExp1 = msclr::interop::marshal_as < std::string >(debitExp->Text);
		mainObject = new user(pnr_display, password1, fullName1, contactNum1, email1, age1, gender1, cnic1);
		dObject= debit(debitCardnum1, debitExp1, debitCvv1);
		dObject.set_pnr(pnr_display);
		ofstream debit_store("debit.dat", ios::app);
		debit_store.write((char*)&dObject, sizeof(dObject));
		debit_store.close();
		this->Hide();
		bill^ obj2 = gcnew bill();
		obj2->ShowDialog();
		*/
		std::string password1 = msclr::interop::marshal_as < std::string >(password->Text);
		std::string fullName1 = msclr::interop::marshal_as < std::string >(fullName->Text);
		std::string age1 = msclr::interop::marshal_as < std::string >(age->Text);
		std::string contactNum1 = msclr::interop::marshal_as < std::string >(contactNum->Text);
		int size;
		size = contactNum1.length();
		if (size == 12)
		{

			if (contactNum1[4] == '-')
			{
				flag1 = 1;

				contactNum->ForeColor = System::Drawing::Color::DimGray;

			}
			else
			{
				flag1 = 0;

			}
		}
		else
		{
			flag1 = 0;

		}
		std::string email1 = msclr::interop::marshal_as < std::string >(email->Text);
		std::string gender1 = msclr::interop::marshal_as < std::string >(gender->Text);
		std::string cnic1 = msclr::interop::marshal_as < std::string >(cnic->Text);
		int size2;
		size2 = cnic1.length();
		if (size2 == 15)
		{
			if (cnic1[5] == 45 && cnic1[13] == 45)
			{
				flag2 = 1;
				cnic->ForeColor = System::Drawing::Color::DimGray;


			}
			else
			{
				flag2 = 0;
			}

		}
		else
		{
			flag2 = 0;
		}

		std::string debitCardnum1 = msclr::interop::marshal_as < std::string >(debitCardnum->Text);
		std::string debitCvv1 = msclr::interop::marshal_as < std::string >(debitCvv->Text);
		std::string debitExp1 = msclr::interop::marshal_as < std::string >(debitExp->Text);
		if (flag1 == 0 && flag2 == 1)
		{
			MessageBox::Show("Invalid Contact Format!\nPlease try again!\nFORMAT= ####-#######", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			contactNum->Clear();
			contactNum->ForeColor = System::Drawing::Color::Black;


		}
		if (flag2 == 0 && flag1 == 1)
		{
			MessageBox::Show("Invalid CNIC Format!\nPlease try again!\nFORMAT= #####-#######-#", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			cnic->Clear();
			cnic->ForeColor = System::Drawing::Color::Black;
		}
		if (flag1 == 0 && flag2 == 0)
		{
			MessageBox::Show("CNIC and Contact Format invalid", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			cnic->Clear();
			contactNum->Clear();
			contactNum->ForeColor = System::Drawing::Color::Black;
			cnic->ForeColor = System::Drawing::Color::Black;
		}
		if (flag1 == 1 && flag2 == 1)
		{
			mainObject = new user(pnr_display, password1, fullName1, contactNum1, email1, age1, gender1, cnic1);
			dObject = debit(debitCardnum1, debitExp1, debitCvv1);
			dObject.set_pnr(pnr_display);
			ofstream debit_store("debit.dat", ios::app);
			debit_store.write((char*)&dObject, sizeof(dObject));
			debit_store.close();
			this->Hide();
			bill^ obj2 = gcnew bill();
			obj2->ShowDialog();
			ofstream os("Booking123.dat", ios::app | ios::binary);
			os.write((char*)mainObject, sizeof(*mainObject));
			os.close();
			pnr_display++;
			ofstream pnr_update("pnr.txt", ios::out);
			pnr_update << pnr_display;
			pnr_update.close();
			ofstream flight_write("flight.dat", ios::app | ios::binary);
			flight_write.write((char*)fObject, sizeof(*fObject));
			flight_write.close();
		}
	}
	/*ofstream os("Booking123.dat", ios::app | ios::binary);
	os.write((char*)mainObject, sizeof(*mainObject));
	os.close();
	pnr_display++;
	ofstream pnr_update("pnr.txt", ios::out);
	pnr_update << pnr_display;
	pnr_update.close();
	ofstream flight_write("flight.dat", ios::app | ios::binary);
	flight_write.write((char*)fObject, sizeof(*fObject));
	flight_write.close();
	*/
}
private: System::Void netUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void validation_button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*try
	{
		int size;
		size = contact.length();
		if (size == 12)
		{
			if (contact[4] == '-')
			{
				countclick++;
				fobj.set_contact(contact);
				contact_text->ForeColor = System::Drawing::Color::DimGray;
				validatecontact->Visible = false;
			}
			else
			{
				throw(contact);
			}
		}
		else
		{
			throw(contact);
		}
	}
	catch (string contact)
	{
		MessageBox::Show("Invalid Data Entry!\nPlease try again!\nFORMAT= ####-#######", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		contact_text->Clear();
	}
	*/

}
private: System::Void submitButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	int flag1 = 0;
	int flag2 = 0;
	std::string contactNum1 = msclr::interop::marshal_as < std::string >(contactNum->Text);
	int size;
	size = contactNum1.length();
	if (size == 12)
	{

		if (contactNum1[4] == '-')
		{
			flag1 = 1;

			contactNum->ForeColor = System::Drawing::Color::DimGray;

		}
		else
		{
			flag1 = 0;

		}
	}
	else
	{
		flag1 = 0;

	}
	std::string cnic1 = msclr::interop::marshal_as < std::string >(cnic->Text);
	int size2;
	size2 = cnic1.length();
	if (size2 == 15)
	{
		if (cnic1[5] == 45 && cnic1[13] == 45)
		{
			flag2 = 1;
			cnic->ForeColor = System::Drawing::Color::Green;


		}
		else
		{
			flag2 = 0;
		}

	}
	else
	{
		flag2 = 0;
	}
	if (flag1 == 0 && flag2 == 1)
	{
		contactNum->ForeColor = System::Drawing::Color::Red;
		cnic->ForeColor = System::Drawing::Color::Green;
		
		
	}
	if (flag2 == 0 && flag1 == 1)
	{
		cnic->ForeColor = System::Drawing::Color::Red;
		contactNum->ForeColor = System::Drawing::Color::Green;

	}
	if (flag1 == 0 && flag2 == 0)
	{
		contactNum->ForeColor = System::Drawing::Color::Red;
		cnic->ForeColor = System::Drawing::Color::Red;
	}
	if (flag1 == 1 && flag2 == 1)
	{
		contactNum->ForeColor = System::Drawing::Color::Green;
		cnic->ForeColor = System::Drawing::Color::Green;
		
	}
}
};
}
#endif
