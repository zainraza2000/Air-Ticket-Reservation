//#pragma once
#ifndef FORM1_H
#define FORM1_H
#include "Login.h"
#include "Reserve.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radio_Booking;
	private: System::Windows::Forms::RadioButton^ radio_Login;
	private: System::Windows::Forms::Button^ button_Submit;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radio_Booking = (gcnew System::Windows::Forms::RadioButton());
			this->radio_Login = (gcnew System::Windows::Forms::RadioButton());
			this->button_Submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(290, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Air Ticket";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(203, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 50);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Reservation System";
			// 
			// radio_Booking
			// 
			this->radio_Booking->AutoSize = true;
			this->radio_Booking->BackColor = System::Drawing::Color::Transparent;
			this->radio_Booking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_Booking->Location = System::Drawing::Point(318, 398);
			this->radio_Booking->Name = L"radio_Booking";
			this->radio_Booking->Size = System::Drawing::Size(141, 28);
			this->radio_Booking->TabIndex = 3;
			this->radio_Booking->TabStop = true;
			this->radio_Booking->Text = L"New Booking";
			this->radio_Booking->UseVisualStyleBackColor = false;
			// 
			// radio_Login
			// 
			this->radio_Login->AutoSize = true;
			this->radio_Login->BackColor = System::Drawing::Color::Transparent;
			this->radio_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_Login->Location = System::Drawing::Point(318, 447);
			this->radio_Login->Name = L"radio_Login";
			this->radio_Login->Size = System::Drawing::Size(75, 28);
			this->radio_Login->TabIndex = 4;
			this->radio_Login->TabStop = true;
			this->radio_Login->Text = L"Login";
			this->radio_Login->UseVisualStyleBackColor = false;
			// 
			// button_Submit
			// 
			this->button_Submit->Location = System::Drawing::Point(318, 492);
			this->button_Submit->Name = L"button_Submit";
			this->button_Submit->Size = System::Drawing::Size(75, 30);
			this->button_Submit->TabIndex = 5;
			this->button_Submit->Text = L"Submit";
			this->button_Submit->UseVisualStyleBackColor = true;
			this->button_Submit->Click += gcnew System::EventHandler(this, &Form1::button_Submit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(781, 577);
			this->Controls->Add(this->button_Submit);
			this->Controls->Add(this->radio_Login);
			this->Controls->Add(this->radio_Booking);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Air Ticket Reservation System";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button_Submit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radio_Login->Checked)
	{
		this->Hide();
		Login^ obj = gcnew Login();
		obj->ShowDialog();
	}
	else if (radio_Booking->Checked)
	{
		this->Hide();
		Reserve^ obj = gcnew Reserve();
		obj->ShowDialog();
	}
	{

	}
}
};
}
#endif