//#pragma once
#ifndef RESERVE_H
#define RESERVE_H
#include<iostream>
#include<msclr\marshal_cppstd.h>
#include"Header.h"
#include "Flights.h"

extern flight* fObject;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Reserve
	/// </summary>
	public ref class Reserve : public System::Windows::Forms::Form
	{
	public:
		Reserve(void)
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
		~Reserve()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ tripType;
	private: System::Windows::Forms::ComboBox^ travelType;
	private: System::Windows::Forms::ComboBox^ classType;

	private: System::Windows::Forms::Label^ tripTypeLabel;
	private: System::Windows::Forms::Label^ classLabel;


	private: System::Windows::Forms::Label^ travelTypeLabel;
	private: System::Windows::Forms::TextBox^ flyingFrom;
	private: System::Windows::Forms::TextBox^ flyingTo;
	private: System::Windows::Forms::DateTimePicker^ returnTime;


	private: System::Windows::Forms::DateTimePicker^ departTime;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ departLabel;
	private: System::Windows::Forms::Label^ arriveLabel;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reserve::typeid));
			this->tripType = (gcnew System::Windows::Forms::ComboBox());
			this->travelType = (gcnew System::Windows::Forms::ComboBox());
			this->classType = (gcnew System::Windows::Forms::ComboBox());
			this->tripTypeLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->travelTypeLabel = (gcnew System::Windows::Forms::Label());
			this->flyingFrom = (gcnew System::Windows::Forms::TextBox());
			this->flyingTo = (gcnew System::Windows::Forms::TextBox());
			this->returnTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->departTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->departLabel = (gcnew System::Windows::Forms::Label());
			this->arriveLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tripType
			// 
			this->tripType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->tripType->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripType->FormattingEnabled = true;
			this->tripType->Location = System::Drawing::Point(72, 64);
			this->tripType->Name = L"tripType";
			this->tripType->Size = System::Drawing::Size(174, 25);
			this->tripType->TabIndex = 0;
			this->tripType->SelectedIndexChanged += gcnew System::EventHandler(this, &Reserve::tripType_SelectedIndexChanged);
			// 
			// travelType
			// 
			this->travelType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->travelType->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->travelType->FormattingEnabled = true;
			this->travelType->Location = System::Drawing::Point(309, 64);
			this->travelType->Name = L"travelType";
			this->travelType->Size = System::Drawing::Size(174, 25);
			this->travelType->TabIndex = 1;
			// 
			// classType
			// 
			this->classType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->classType->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classType->FormattingEnabled = true;
			this->classType->Location = System::Drawing::Point(556, 64);
			this->classType->Name = L"classType";
			this->classType->Size = System::Drawing::Size(174, 25);
			this->classType->TabIndex = 2;
			// 
			// tripTypeLabel
			// 
			this->tripTypeLabel->AutoSize = true;
			this->tripTypeLabel->BackColor = System::Drawing::Color::Transparent;
			this->tripTypeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripTypeLabel->ForeColor = System::Drawing::Color::Black;
			this->tripTypeLabel->Location = System::Drawing::Point(69, 35);
			this->tripTypeLabel->Name = L"tripTypeLabel";
			this->tripTypeLabel->Size = System::Drawing::Size(72, 17);
			this->tripTypeLabel->TabIndex = 3;
			this->tripTypeLabel->Text = L"Trip Type";
			// 
			// classLabel
			// 
			this->classLabel->AutoSize = true;
			this->classLabel->BackColor = System::Drawing::Color::Transparent;
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classLabel->ForeColor = System::Drawing::Color::Black;
			this->classLabel->Location = System::Drawing::Point(553, 35);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(43, 17);
			this->classLabel->TabIndex = 4;
			this->classLabel->Text = L"Class";
			// 
			// travelTypeLabel
			// 
			this->travelTypeLabel->AutoSize = true;
			this->travelTypeLabel->BackColor = System::Drawing::Color::Transparent;
			this->travelTypeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->travelTypeLabel->ForeColor = System::Drawing::Color::Black;
			this->travelTypeLabel->Location = System::Drawing::Point(306, 35);
			this->travelTypeLabel->Name = L"travelTypeLabel";
			this->travelTypeLabel->Size = System::Drawing::Size(86, 17);
			this->travelTypeLabel->TabIndex = 5;
			this->travelTypeLabel->Text = L"Travel Type";
			// 
			// flyingFrom
			// 
			this->flyingFrom->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flyingFrom->ForeColor = System::Drawing::Color::DimGray;
			this->flyingFrom->Location = System::Drawing::Point(72, 172);
			this->flyingFrom->Name = L"flyingFrom";
			this->flyingFrom->Size = System::Drawing::Size(174, 25);
			this->flyingFrom->TabIndex = 6;
			this->flyingFrom->Text = L"Flying From";
			this->flyingFrom->Click += gcnew System::EventHandler(this, &Reserve::flyingFrom_Click);
			// 
			// flyingTo
			// 
			this->flyingTo->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flyingTo->ForeColor = System::Drawing::Color::DimGray;
			this->flyingTo->Location = System::Drawing::Point(556, 172);
			this->flyingTo->Name = L"flyingTo";
			this->flyingTo->Size = System::Drawing::Size(174, 25);
			this->flyingTo->TabIndex = 7;
			this->flyingTo->Text = L"Flying To";
			this->flyingTo->Click += gcnew System::EventHandler(this, &Reserve::flyingTo_Click);
			// 
			// returnTime
			// 
			this->returnTime->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnTime->CustomFormat = L"dd/MM/yyyy";
			this->returnTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnTime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->returnTime->Location = System::Drawing::Point(556, 398);
			this->returnTime->MinDate = System::DateTime(2020, 4, 18, 0, 0, 0, 0);
			this->returnTime->Name = L"returnTime";
			this->returnTime->Size = System::Drawing::Size(114, 22);
			this->returnTime->TabIndex = 9;
			// 
			// departTime
			// 
			this->departTime->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departTime->CustomFormat = L"dd/MM/yyyy";
			this->departTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departTime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->departTime->Location = System::Drawing::Point(72, 398);
			this->departTime->MinDate = System::DateTime(2020, 4, 18, 0, 0, 0, 0);
			this->departTime->Name = L"departTime";
			this->departTime->Size = System::Drawing::Size(120, 22);
			this->departTime->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(341, 491);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 32);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Reserve::button1_Click);
			// 
			// departLabel
			// 
			this->departLabel->AutoSize = true;
			this->departLabel->BackColor = System::Drawing::Color::Transparent;
			this->departLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departLabel->Location = System::Drawing::Point(69, 369);
			this->departLabel->Name = L"departLabel";
			this->departLabel->Size = System::Drawing::Size(91, 17);
			this->departLabel->TabIndex = 12;
			this->departLabel->Text = L"Depart Time";
			// 
			// arriveLabel
			// 
			this->arriveLabel->AutoSize = true;
			this->arriveLabel->BackColor = System::Drawing::Color::Transparent;
			this->arriveLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arriveLabel->Location = System::Drawing::Point(553, 369);
			this->arriveLabel->Name = L"arriveLabel";
			this->arriveLabel->Size = System::Drawing::Size(89, 17);
			this->arriveLabel->TabIndex = 13;
			this->arriveLabel->Text = L"Arrival Time";
			// 
			// Reserve
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(766, 577);
			this->Controls->Add(this->arriveLabel);
			this->Controls->Add(this->departLabel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->returnTime);
			this->Controls->Add(this->departTime);
			this->Controls->Add(this->flyingTo);
			this->Controls->Add(this->flyingFrom);
			this->Controls->Add(this->travelTypeLabel);
			this->Controls->Add(this->classLabel);
			this->Controls->Add(this->tripTypeLabel);
			this->Controls->Add(this->classType);
			this->Controls->Add(this->travelType);
			this->Controls->Add(this->tripType);
			this->Name = L"Reserve";
			this->Text = L"Air Ticket Reservation";
			this->Load += gcnew System::EventHandler(this, &Reserve::Reserve_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Reserve_Load(System::Object^ sender, System::EventArgs^ e) {
		tripType->Items->Add("Round Trip");
		tripType->Items->Add("One Way");
		travelType->Items->Add("International");
		travelType->Items->Add("Domestic");
		classType->Items->Add("Economy");
		classType->Items->Add("Business");
		classType->Items->Add("First");
	}
	



private: System::Void flyingFrom_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flyingFrom->Text == "Flying From")
	{
		flyingFrom->Text = "";
		flyingFrom->ForeColor = System::Drawing::Color::Black;
	}
	if (flyingTo->Text == "" || flyingTo->Text == "Flying To")
	{
		flyingTo->ForeColor = System::Drawing::Color::DimGray;
		flyingTo->Text = "Flying To";
	}
}
private: System::Void flyingTo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flyingTo->Text == "Flying To")
	{
		flyingTo->Text = "";
		flyingTo->ForeColor = System::Drawing::Color::Black;
	}
	if (flyingFrom->Text == "" || flyingFrom->Text == "Flying From")
	{
		flyingFrom->ForeColor = System::Drawing::Color::DimGray;
		flyingFrom->Text = "Flying From";
	}
}
private: System::Void tripType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (tripType->SelectedItem == "One Way")
	{
		returnTime->Visible = false;
		arriveLabel->Visible = false;
	}
	if (tripType->SelectedItem == "Round Trip")
	{
		returnTime->Visible = true;
		arriveLabel->Visible = true;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tripType1 = msclr::interop::marshal_as < std::string >(tripType->Text);
	std::string travelType1 = msclr::interop::marshal_as < std::string >(travelType->Text);
	std::string classType1 = msclr::interop::marshal_as < std::string >(classType->Text);
	std::string flyingFrom1 = msclr::interop::marshal_as < std::string >(flyingFrom->Text);
	std::string flyingTo1 = msclr::interop::marshal_as < std::string >(flyingTo->Text);
	std::string departTime1 = msclr::interop::marshal_as < std::string >(departTime->Text);
	std::string returnTime1 = msclr::interop::marshal_as < std::string >(returnTime->Text);
	fObject = new flight;
	fObject->setflight(travelType1, classType1, flyingFrom1, flyingTo1, departTime1, returnTime1, tripType1);
	this->Hide();
	Flights^ obj = gcnew Flights();
	obj->ShowDialog();
}

//private: System::Void button_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	
//}
};

}
#endif
