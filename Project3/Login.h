//#pragma once
#ifndef LOGIN_H
#define LOGIN_H
#include <string>
#include<fstream>
#include<iostream>
#include"Booking.h"
#include"userform.h"
using namespace std;
#include <msclr\marshal_cppstd.h>
extern user* mainObject;
extern flight* fObject;
extern long int pnr_check;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Button^ button1;
	


	protected:

	protected:

	protected:

	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(284, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AIR TICKET";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(186, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(415, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"RESERVATION SYSTEM";
			// 
			// password
			// 
			this->password->AccessibleDescription = L"";
			this->password->AccessibleName = L"";
			this->password->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->password->Location = System::Drawing::Point(320, 438);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(152, 29);
			this->password->TabIndex = 3;
			this->password->Text = L"Password";
			this->password->Click += gcnew System::EventHandler(this, &Login::password_Click);
			// 
			// username
			// 
			this->username->AccessibleName = L"username";
			this->username->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->username->Location = System::Drawing::Point(320, 392);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(152, 29);
			this->username->TabIndex = 2;
			this->username->Text = L"PNR";
			this->username->Click += gcnew System::EventHandler(this, &Login::username_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(343, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(781, 577);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Login";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Air Ticket Reservation";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void username_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username->Text == "PNR")
	{
		username->Text = "";
		username->ForeColor = System::Drawing::Color::Black;
	}
	if (password->Text == "" || password->Text == "Password")
	{
		password->ForeColor = System::Drawing::Color::DimGray;
		password->Text = "Password";
	}
}
private: System::Void password_Click(System::Object^ sender, System::EventArgs^ e) {
	if (password->Text == "Password")
	{
		password->ForeColor = System::Drawing::Color::Black;
		password->Text = "";
	}
	if (username->Text == "" || username->Text=="PNR")
	{
		username->ForeColor = System::Drawing::Color::DimGray;
		username->Text = "PNR";
	}
}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mainObject = new user;
	fObject = new flight;
	std::string pnr1 = msclr::interop::marshal_as < std::string >(username->Text);
	std::string password1 = msclr::interop::marshal_as < std::string >(password->Text);
	 pnr_check = std::stol(pnr1, nullptr, 10);
	ifstream is("Booking123.dat", ios::in);
	ifstream flight_read("flight.dat", ios::in);
	int flag=0;
	
		while (1)
		{
			if (is.eof())
				break;
			if (flight_read.eof())
				break;
			is.read((char*)mainObject, sizeof(*mainObject));
			flight_read.read((char*)fObject, sizeof(*fObject));
			if (pnr_check == mainObject->getpnr() && password1 == mainObject->getpassword() && pnr_check==fObject->get_pnr())
			{
				is.close();
				flight_read.close();
				flag = 1; 
				this->Hide();
				userform^ obj = gcnew userform();
				obj->ShowDialog();
				
			}
			
		}
		if (flag == 0)
		{
			MessageBox::Show("PNR or Password Incorrect","Error",MessageBoxButtons::OK);
			username->Clear();
			password->Clear();

		}
		is.close();
		flight_read.close();
		
	
}
private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#endif