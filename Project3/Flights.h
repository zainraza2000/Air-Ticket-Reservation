//#pragma once
#ifndef FLIGHTS_H
#define FLIGHTS_H
#include"Header.h"
#include<msclr\marshal_cppstd.h>
#include"Booking.h"
extern string generateFlightnum(string);
extern string generatePrice(string,string,string);
extern string generateAirline(string);
extern flight* fObject;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Flights
	/// </summary>
	public ref class Flights : public System::Windows::Forms::Form
	{
	public:
		Flights(void)
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
		~Flights()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ priceHeading;
	protected:

	protected:

	private: System::Windows::Forms::Label^ flightNumberHeading;

	private: System::Windows::Forms::Label^ arriveDateHeading;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ flyingToHeading;
	private: System::Windows::Forms::Label^ departDateHeading;



	private: System::Windows::Forms::Label^ flyingFromHeading;

	private: System::Windows::Forms::Label^ classHeading;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ airlineHeading;
	private: System::Windows::Forms::Label^ airline1;
	private: System::Windows::Forms::Label^ airline2;
	private: System::Windows::Forms::Label^ airline5;



	private: System::Windows::Forms::Label^ airline4;

	private: System::Windows::Forms::Label^ airline3;
	private: System::Windows::Forms::Label^ class4;


	private: System::Windows::Forms::Label^ class3;

	private: System::Windows::Forms::Label^ class2;

	private: System::Windows::Forms::Label^ price1;

	private: System::Windows::Forms::Label^ flightnumber1;

	private: System::Windows::Forms::Label^ arrive1;

	private: System::Windows::Forms::Label^ depart1;

	private: System::Windows::Forms::Label^ to1;

	private: System::Windows::Forms::Label^ from1;

	private: System::Windows::Forms::Label^ class1;
	private: System::Windows::Forms::Label^ to3;


	private: System::Windows::Forms::Label^ price2;

	private: System::Windows::Forms::Label^ flightnumber2;

	private: System::Windows::Forms::Label^ arrive2;


	private: System::Windows::Forms::Label^ depart2;
	private: System::Windows::Forms::Label^ to2;



	private: System::Windows::Forms::Label^ from2;
	private: System::Windows::Forms::Label^ class5;
	private: System::Windows::Forms::Label^ to5;



	private: System::Windows::Forms::Label^ to4;

	private: System::Windows::Forms::Label^ from5;

	private: System::Windows::Forms::Label^ from4;

	private: System::Windows::Forms::Label^ from3;
private: System::Windows::Forms::Label^ depart4;


private: System::Windows::Forms::Label^ depart3;
private: System::Windows::Forms::Label^ depart5;
private: System::Windows::Forms::Label^ arrive3;
private: System::Windows::Forms::Label^ arrive4;
private: System::Windows::Forms::Label^ arrive5;

private: System::Windows::Forms::Label^ flightnumber3;
private: System::Windows::Forms::Label^ price3;








private: System::Windows::Forms::Label^ flightnumber4;
private: System::Windows::Forms::Label^ flightnumber5;
private: System::Windows::Forms::Label^ price4;
private: System::Windows::Forms::Label^ price5;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Flights::typeid));
			this->priceHeading = (gcnew System::Windows::Forms::Label());
			this->flightNumberHeading = (gcnew System::Windows::Forms::Label());
			this->arriveDateHeading = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->flyingToHeading = (gcnew System::Windows::Forms::Label());
			this->departDateHeading = (gcnew System::Windows::Forms::Label());
			this->flyingFromHeading = (gcnew System::Windows::Forms::Label());
			this->classHeading = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->airlineHeading = (gcnew System::Windows::Forms::Label());
			this->airline1 = (gcnew System::Windows::Forms::Label());
			this->airline2 = (gcnew System::Windows::Forms::Label());
			this->airline5 = (gcnew System::Windows::Forms::Label());
			this->airline4 = (gcnew System::Windows::Forms::Label());
			this->airline3 = (gcnew System::Windows::Forms::Label());
			this->class4 = (gcnew System::Windows::Forms::Label());
			this->class3 = (gcnew System::Windows::Forms::Label());
			this->class2 = (gcnew System::Windows::Forms::Label());
			this->price1 = (gcnew System::Windows::Forms::Label());
			this->flightnumber1 = (gcnew System::Windows::Forms::Label());
			this->arrive1 = (gcnew System::Windows::Forms::Label());
			this->depart1 = (gcnew System::Windows::Forms::Label());
			this->to1 = (gcnew System::Windows::Forms::Label());
			this->from1 = (gcnew System::Windows::Forms::Label());
			this->class1 = (gcnew System::Windows::Forms::Label());
			this->to3 = (gcnew System::Windows::Forms::Label());
			this->price2 = (gcnew System::Windows::Forms::Label());
			this->flightnumber2 = (gcnew System::Windows::Forms::Label());
			this->arrive2 = (gcnew System::Windows::Forms::Label());
			this->depart2 = (gcnew System::Windows::Forms::Label());
			this->to2 = (gcnew System::Windows::Forms::Label());
			this->from2 = (gcnew System::Windows::Forms::Label());
			this->class5 = (gcnew System::Windows::Forms::Label());
			this->to5 = (gcnew System::Windows::Forms::Label());
			this->to4 = (gcnew System::Windows::Forms::Label());
			this->from5 = (gcnew System::Windows::Forms::Label());
			this->from4 = (gcnew System::Windows::Forms::Label());
			this->from3 = (gcnew System::Windows::Forms::Label());
			this->depart4 = (gcnew System::Windows::Forms::Label());
			this->depart3 = (gcnew System::Windows::Forms::Label());
			this->depart5 = (gcnew System::Windows::Forms::Label());
			this->arrive3 = (gcnew System::Windows::Forms::Label());
			this->arrive4 = (gcnew System::Windows::Forms::Label());
			this->arrive5 = (gcnew System::Windows::Forms::Label());
			this->flightnumber3 = (gcnew System::Windows::Forms::Label());
			this->price3 = (gcnew System::Windows::Forms::Label());
			this->flightnumber4 = (gcnew System::Windows::Forms::Label());
			this->flightnumber5 = (gcnew System::Windows::Forms::Label());
			this->price4 = (gcnew System::Windows::Forms::Label());
			this->price5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// priceHeading
			// 
			this->priceHeading->AutoSize = true;
			this->priceHeading->BackColor = System::Drawing::Color::Transparent;
			this->priceHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceHeading->Location = System::Drawing::Point(501, 37);
			this->priceHeading->Name = L"priceHeading";
			this->priceHeading->Size = System::Drawing::Size(49, 20);
			this->priceHeading->TabIndex = 9;
			this->priceHeading->Text = L"Price";
			// 
			// flightNumberHeading
			// 
			this->flightNumberHeading->AutoSize = true;
			this->flightNumberHeading->BackColor = System::Drawing::Color::Transparent;
			this->flightNumberHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightNumberHeading->Location = System::Drawing::Point(445, 37);
			this->flightNumberHeading->Name = L"flightNumberHeading";
			this->flightNumberHeading->Size = System::Drawing::Size(50, 20);
			this->flightNumberHeading->TabIndex = 2;
			this->flightNumberHeading->Text = L"F.NO";
			// 
			// arriveDateHeading
			// 
			this->arriveDateHeading->AutoSize = true;
			this->arriveDateHeading->BackColor = System::Drawing::Color::Transparent;
			this->arriveDateHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arriveDateHeading->Location = System::Drawing::Point(670, 37);
			this->arriveDateHeading->Name = L"arriveDateHeading";
			this->arriveDateHeading->Size = System::Drawing::Size(99, 20);
			this->arriveDateHeading->TabIndex = 3;
			this->arriveDateHeading->Text = L"Arrive Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(423, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 4;
			// 
			// flyingToHeading
			// 
			this->flyingToHeading->AutoSize = true;
			this->flyingToHeading->BackColor = System::Drawing::Color::Transparent;
			this->flyingToHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flyingToHeading->Location = System::Drawing::Point(367, 37);
			this->flyingToHeading->Name = L"flyingToHeading";
			this->flyingToHeading->Size = System::Drawing::Size(29, 20);
			this->flyingToHeading->TabIndex = 5;
			this->flyingToHeading->Text = L"To";
			// 
			// departDateHeading
			// 
			this->departDateHeading->AutoSize = true;
			this->departDateHeading->BackColor = System::Drawing::Color::Transparent;
			this->departDateHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departDateHeading->Location = System::Drawing::Point(556, 37);
			this->departDateHeading->Name = L"departDateHeading";
			this->departDateHeading->Size = System::Drawing::Size(108, 20);
			this->departDateHeading->TabIndex = 6;
			this->departDateHeading->Text = L"Depart Date";
			// 
			// flyingFromHeading
			// 
			this->flyingFromHeading->AutoSize = true;
			this->flyingFromHeading->BackColor = System::Drawing::Color::Transparent;
			this->flyingFromHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flyingFromHeading->Location = System::Drawing::Point(267, 37);
			this->flyingFromHeading->Name = L"flyingFromHeading";
			this->flyingFromHeading->Size = System::Drawing::Size(50, 20);
			this->flyingFromHeading->TabIndex = 7;
			this->flyingFromHeading->Text = L"From";
			// 
			// classHeading
			// 
			this->classHeading->AutoSize = true;
			this->classHeading->BackColor = System::Drawing::Color::Transparent;
			this->classHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classHeading->Location = System::Drawing::Point(157, 37);
			this->classHeading->Name = L"classHeading";
			this->classHeading->Size = System::Drawing::Size(53, 20);
			this->classHeading->TabIndex = 8;
			this->classHeading->Text = L"Class";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 0;
			// 
			// airlineHeading
			// 
			this->airlineHeading->AutoSize = true;
			this->airlineHeading->BackColor = System::Drawing::Color::Transparent;
			this->airlineHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airlineHeading->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->airlineHeading->Location = System::Drawing::Point(12, 37);
			this->airlineHeading->Name = L"airlineHeading";
			this->airlineHeading->Size = System::Drawing::Size(59, 20);
			this->airlineHeading->TabIndex = 1;
			this->airlineHeading->Text = L"Airline";
			// 
			// airline1
			// 
			this->airline1->AutoSize = true;
			this->airline1->BackColor = System::Drawing::Color::Transparent;
			this->airline1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->airline1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airline1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->airline1->Location = System::Drawing::Point(12, 112);
			this->airline1->Name = L"airline1";
			this->airline1->Size = System::Drawing::Size(52, 16);
			this->airline1->TabIndex = 10;
			this->airline1->Text = L"Airline";
			this->airline1->Click += gcnew System::EventHandler(this, &Flights::airline1_Click);
			this->airline1->MouseEnter += gcnew System::EventHandler(this, &Flights::airline1_MouseEnter);
			this->airline1->MouseLeave += gcnew System::EventHandler(this, &Flights::airline1_MouseLeave);
			// 
			// airline2
			// 
			this->airline2->AutoSize = true;
			this->airline2->BackColor = System::Drawing::Color::Transparent;
			this->airline2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->airline2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airline2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->airline2->Location = System::Drawing::Point(12, 199);
			this->airline2->Name = L"airline2";
			this->airline2->Size = System::Drawing::Size(52, 16);
			this->airline2->TabIndex = 11;
			this->airline2->Text = L"Airline";
			this->airline2->Click += gcnew System::EventHandler(this, &Flights::airline2_Click);
			this->airline2->MouseEnter += gcnew System::EventHandler(this, &Flights::airline2_MouseEnter);
			this->airline2->MouseLeave += gcnew System::EventHandler(this, &Flights::airline2_MouseLeave);
			// 
			// airline5
			// 
			this->airline5->AutoSize = true;
			this->airline5->BackColor = System::Drawing::Color::Transparent;
			this->airline5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->airline5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airline5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->airline5->Location = System::Drawing::Point(12, 449);
			this->airline5->Name = L"airline5";
			this->airline5->Size = System::Drawing::Size(52, 16);
			this->airline5->TabIndex = 12;
			this->airline5->Text = L"Airline";
			this->airline5->Click += gcnew System::EventHandler(this, &Flights::airline5_Click);
			this->airline5->MouseEnter += gcnew System::EventHandler(this, &Flights::airline5_MouseEnter);
			this->airline5->MouseLeave += gcnew System::EventHandler(this, &Flights::airline5_MouseLeave);
			// 
			// airline4
			// 
			this->airline4->AutoSize = true;
			this->airline4->BackColor = System::Drawing::Color::Transparent;
			this->airline4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->airline4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airline4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->airline4->Location = System::Drawing::Point(12, 364);
			this->airline4->Name = L"airline4";
			this->airline4->Size = System::Drawing::Size(52, 16);
			this->airline4->TabIndex = 13;
			this->airline4->Text = L"Airline";
			this->airline4->Click += gcnew System::EventHandler(this, &Flights::airline4_Click);
			this->airline4->MouseEnter += gcnew System::EventHandler(this, &Flights::airline4_MouseEnter);
			this->airline4->MouseLeave += gcnew System::EventHandler(this, &Flights::airline4_MouseLeave);
			// 
			// airline3
			// 
			this->airline3->AutoSize = true;
			this->airline3->BackColor = System::Drawing::Color::Transparent;
			this->airline3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->airline3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->airline3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->airline3->Location = System::Drawing::Point(12, 283);
			this->airline3->Name = L"airline3";
			this->airline3->Size = System::Drawing::Size(52, 16);
			this->airline3->TabIndex = 14;
			this->airline3->Text = L"Airline";
			this->airline3->Click += gcnew System::EventHandler(this, &Flights::airline3_Click);
			this->airline3->MouseEnter += gcnew System::EventHandler(this, &Flights::airline3_MouseEnter);
			this->airline3->MouseLeave += gcnew System::EventHandler(this, &Flights::airline3_MouseLeave);
			// 
			// class4
			// 
			this->class4->AutoSize = true;
			this->class4->BackColor = System::Drawing::Color::Transparent;
			this->class4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->class4->Location = System::Drawing::Point(158, 364);
			this->class4->Name = L"class4";
			this->class4->Size = System::Drawing::Size(52, 16);
			this->class4->TabIndex = 15;
			this->class4->Text = L"Airline";
			// 
			// class3
			// 
			this->class3->AutoSize = true;
			this->class3->BackColor = System::Drawing::Color::Transparent;
			this->class3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->class3->Location = System::Drawing::Point(158, 283);
			this->class3->Name = L"class3";
			this->class3->Size = System::Drawing::Size(52, 16);
			this->class3->TabIndex = 16;
			this->class3->Text = L"Airline";
			// 
			// class2
			// 
			this->class2->AutoSize = true;
			this->class2->BackColor = System::Drawing::Color::Transparent;
			this->class2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->class2->Location = System::Drawing::Point(158, 199);
			this->class2->Name = L"class2";
			this->class2->Size = System::Drawing::Size(52, 16);
			this->class2->TabIndex = 17;
			this->class2->Text = L"Airline";
			// 
			// price1
			// 
			this->price1->AutoSize = true;
			this->price1->BackColor = System::Drawing::Color::Transparent;
			this->price1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->price1->Location = System::Drawing::Point(511, 112);
			this->price1->Name = L"price1";
			this->price1->Size = System::Drawing::Size(25, 16);
			this->price1->TabIndex = 18;
			this->price1->Text = L"p1";
			// 
			// flightnumber1
			// 
			this->flightnumber1->AutoSize = true;
			this->flightnumber1->BackColor = System::Drawing::Color::Transparent;
			this->flightnumber1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightnumber1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->flightnumber1->Location = System::Drawing::Point(446, 112);
			this->flightnumber1->Name = L"flightnumber1";
			this->flightnumber1->Size = System::Drawing::Size(20, 16);
			this->flightnumber1->TabIndex = 19;
			this->flightnumber1->Text = L"f1";
			// 
			// arrive1
			// 
			this->arrive1->AutoSize = true;
			this->arrive1->BackColor = System::Drawing::Color::Transparent;
			this->arrive1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrive1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->arrive1->Location = System::Drawing::Point(671, 112);
			this->arrive1->Name = L"arrive1";
			this->arrive1->Size = System::Drawing::Size(25, 16);
			this->arrive1->TabIndex = 20;
			this->arrive1->Text = L"a1";
			// 
			// depart1
			// 
			this->depart1->AutoSize = true;
			this->depart1->BackColor = System::Drawing::Color::Transparent;
			this->depart1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depart1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depart1->Location = System::Drawing::Point(581, 112);
			this->depart1->Name = L"depart1";
			this->depart1->Size = System::Drawing::Size(25, 16);
			this->depart1->TabIndex = 21;
			this->depart1->Text = L"d1";
			// 
			// to1
			// 
			this->to1->AutoSize = true;
			this->to1->BackColor = System::Drawing::Color::Transparent;
			this->to1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->to1->Location = System::Drawing::Point(368, 112);
			this->to1->Name = L"to1";
			this->to1->Size = System::Drawing::Size(52, 16);
			this->to1->TabIndex = 22;
			this->to1->Text = L"Airline";
			// 
			// from1
			// 
			this->from1->AutoSize = true;
			this->from1->BackColor = System::Drawing::Color::Transparent;
			this->from1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->from1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->from1->Location = System::Drawing::Point(268, 112);
			this->from1->Name = L"from1";
			this->from1->Size = System::Drawing::Size(52, 16);
			this->from1->TabIndex = 23;
			this->from1->Text = L"Airline";
			// 
			// class1
			// 
			this->class1->AutoSize = true;
			this->class1->BackColor = System::Drawing::Color::Transparent;
			this->class1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->class1->Location = System::Drawing::Point(158, 112);
			this->class1->Name = L"class1";
			this->class1->Size = System::Drawing::Size(52, 16);
			this->class1->TabIndex = 24;
			this->class1->Text = L"Airline";
			// 
			// to3
			// 
			this->to3->AutoSize = true;
			this->to3->BackColor = System::Drawing::Color::Transparent;
			this->to3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->to3->Location = System::Drawing::Point(368, 283);
			this->to3->Name = L"to3";
			this->to3->Size = System::Drawing::Size(52, 16);
			this->to3->TabIndex = 25;
			this->to3->Text = L"Airline";
			// 
			// price2
			// 
			this->price2->AutoSize = true;
			this->price2->BackColor = System::Drawing::Color::Transparent;
			this->price2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->price2->Location = System::Drawing::Point(511, 199);
			this->price2->Name = L"price2";
			this->price2->Size = System::Drawing::Size(25, 16);
			this->price2->TabIndex = 26;
			this->price2->Text = L"p2";
			// 
			// flightnumber2
			// 
			this->flightnumber2->AutoSize = true;
			this->flightnumber2->BackColor = System::Drawing::Color::Transparent;
			this->flightnumber2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightnumber2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->flightnumber2->Location = System::Drawing::Point(446, 199);
			this->flightnumber2->Name = L"flightnumber2";
			this->flightnumber2->Size = System::Drawing::Size(20, 16);
			this->flightnumber2->TabIndex = 27;
			this->flightnumber2->Text = L"f2";
			// 
			// arrive2
			// 
			this->arrive2->AutoSize = true;
			this->arrive2->BackColor = System::Drawing::Color::Transparent;
			this->arrive2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrive2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->arrive2->Location = System::Drawing::Point(671, 199);
			this->arrive2->Name = L"arrive2";
			this->arrive2->Size = System::Drawing::Size(25, 16);
			this->arrive2->TabIndex = 28;
			this->arrive2->Text = L"a2";
			// 
			// depart2
			// 
			this->depart2->AutoSize = true;
			this->depart2->BackColor = System::Drawing::Color::Transparent;
			this->depart2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depart2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depart2->Location = System::Drawing::Point(581, 199);
			this->depart2->Name = L"depart2";
			this->depart2->Size = System::Drawing::Size(25, 16);
			this->depart2->TabIndex = 29;
			this->depart2->Text = L"d2";
			// 
			// to2
			// 
			this->to2->AutoSize = true;
			this->to2->BackColor = System::Drawing::Color::Transparent;
			this->to2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->to2->Location = System::Drawing::Point(368, 199);
			this->to2->Name = L"to2";
			this->to2->Size = System::Drawing::Size(52, 16);
			this->to2->TabIndex = 30;
			this->to2->Text = L"Airline";
			// 
			// from2
			// 
			this->from2->AutoSize = true;
			this->from2->BackColor = System::Drawing::Color::Transparent;
			this->from2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->from2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->from2->Location = System::Drawing::Point(268, 199);
			this->from2->Name = L"from2";
			this->from2->Size = System::Drawing::Size(52, 16);
			this->from2->TabIndex = 31;
			this->from2->Text = L"Airline";
			// 
			// class5
			// 
			this->class5->AutoSize = true;
			this->class5->BackColor = System::Drawing::Color::Transparent;
			this->class5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->class5->Location = System::Drawing::Point(158, 449);
			this->class5->Name = L"class5";
			this->class5->Size = System::Drawing::Size(52, 16);
			this->class5->TabIndex = 32;
			this->class5->Text = L"Airline";
			// 
			// to5
			// 
			this->to5->AutoSize = true;
			this->to5->BackColor = System::Drawing::Color::Transparent;
			this->to5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->to5->Location = System::Drawing::Point(368, 449);
			this->to5->Name = L"to5";
			this->to5->Size = System::Drawing::Size(52, 16);
			this->to5->TabIndex = 33;
			this->to5->Text = L"Airline";
			// 
			// to4
			// 
			this->to4->AutoSize = true;
			this->to4->BackColor = System::Drawing::Color::Transparent;
			this->to4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->to4->Location = System::Drawing::Point(368, 364);
			this->to4->Name = L"to4";
			this->to4->Size = System::Drawing::Size(52, 16);
			this->to4->TabIndex = 34;
			this->to4->Text = L"Airline";
			// 
			// from5
			// 
			this->from5->AutoSize = true;
			this->from5->BackColor = System::Drawing::Color::Transparent;
			this->from5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->from5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->from5->Location = System::Drawing::Point(268, 449);
			this->from5->Name = L"from5";
			this->from5->Size = System::Drawing::Size(52, 16);
			this->from5->TabIndex = 35;
			this->from5->Text = L"Airline";
			// 
			// from4
			// 
			this->from4->AutoSize = true;
			this->from4->BackColor = System::Drawing::Color::Transparent;
			this->from4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->from4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->from4->Location = System::Drawing::Point(268, 364);
			this->from4->Name = L"from4";
			this->from4->Size = System::Drawing::Size(52, 16);
			this->from4->TabIndex = 36;
			this->from4->Text = L"Airline";
			// 
			// from3
			// 
			this->from3->AutoSize = true;
			this->from3->BackColor = System::Drawing::Color::Transparent;
			this->from3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->from3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->from3->Location = System::Drawing::Point(268, 283);
			this->from3->Name = L"from3";
			this->from3->Size = System::Drawing::Size(52, 16);
			this->from3->TabIndex = 37;
			this->from3->Text = L"Airline";
			// 
			// depart4
			// 
			this->depart4->AutoSize = true;
			this->depart4->BackColor = System::Drawing::Color::Transparent;
			this->depart4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depart4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depart4->Location = System::Drawing::Point(581, 364);
			this->depart4->Name = L"depart4";
			this->depart4->Size = System::Drawing::Size(25, 16);
			this->depart4->TabIndex = 38;
			this->depart4->Text = L"d4";
			// 
			// depart3
			// 
			this->depart3->AutoSize = true;
			this->depart3->BackColor = System::Drawing::Color::Transparent;
			this->depart3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depart3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depart3->Location = System::Drawing::Point(581, 283);
			this->depart3->Name = L"depart3";
			this->depart3->Size = System::Drawing::Size(25, 16);
			this->depart3->TabIndex = 39;
			this->depart3->Text = L"d3";
			// 
			// depart5
			// 
			this->depart5->AutoSize = true;
			this->depart5->BackColor = System::Drawing::Color::Transparent;
			this->depart5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depart5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->depart5->Location = System::Drawing::Point(581, 449);
			this->depart5->Name = L"depart5";
			this->depart5->Size = System::Drawing::Size(25, 16);
			this->depart5->TabIndex = 40;
			this->depart5->Text = L"d5";
			// 
			// arrive3
			// 
			this->arrive3->AutoSize = true;
			this->arrive3->BackColor = System::Drawing::Color::Transparent;
			this->arrive3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrive3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->arrive3->Location = System::Drawing::Point(671, 283);
			this->arrive3->Name = L"arrive3";
			this->arrive3->Size = System::Drawing::Size(25, 16);
			this->arrive3->TabIndex = 41;
			this->arrive3->Text = L"a3";
			// 
			// arrive4
			// 
			this->arrive4->AutoSize = true;
			this->arrive4->BackColor = System::Drawing::Color::Transparent;
			this->arrive4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrive4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->arrive4->Location = System::Drawing::Point(671, 364);
			this->arrive4->Name = L"arrive4";
			this->arrive4->Size = System::Drawing::Size(25, 16);
			this->arrive4->TabIndex = 42;
			this->arrive4->Text = L"a4";
			// 
			// arrive5
			// 
			this->arrive5->AutoSize = true;
			this->arrive5->BackColor = System::Drawing::Color::Transparent;
			this->arrive5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrive5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->arrive5->Location = System::Drawing::Point(671, 449);
			this->arrive5->Name = L"arrive5";
			this->arrive5->Size = System::Drawing::Size(25, 16);
			this->arrive5->TabIndex = 43;
			this->arrive5->Text = L"a5";
			// 
			// flightnumber3
			// 
			this->flightnumber3->AutoSize = true;
			this->flightnumber3->BackColor = System::Drawing::Color::Transparent;
			this->flightnumber3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightnumber3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->flightnumber3->Location = System::Drawing::Point(446, 283);
			this->flightnumber3->Name = L"flightnumber3";
			this->flightnumber3->Size = System::Drawing::Size(20, 16);
			this->flightnumber3->TabIndex = 44;
			this->flightnumber3->Text = L"f3";
			// 
			// price3
			// 
			this->price3->AutoSize = true;
			this->price3->BackColor = System::Drawing::Color::Transparent;
			this->price3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->price3->Location = System::Drawing::Point(511, 283);
			this->price3->Name = L"price3";
			this->price3->Size = System::Drawing::Size(25, 16);
			this->price3->TabIndex = 45;
			this->price3->Text = L"p3";
			// 
			// flightnumber4
			// 
			this->flightnumber4->AutoSize = true;
			this->flightnumber4->BackColor = System::Drawing::Color::Transparent;
			this->flightnumber4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightnumber4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->flightnumber4->Location = System::Drawing::Point(446, 364);
			this->flightnumber4->Name = L"flightnumber4";
			this->flightnumber4->Size = System::Drawing::Size(20, 16);
			this->flightnumber4->TabIndex = 46;
			this->flightnumber4->Text = L"f4";
			// 
			// flightnumber5
			// 
			this->flightnumber5->AutoSize = true;
			this->flightnumber5->BackColor = System::Drawing::Color::Transparent;
			this->flightnumber5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flightnumber5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->flightnumber5->Location = System::Drawing::Point(446, 449);
			this->flightnumber5->Name = L"flightnumber5";
			this->flightnumber5->Size = System::Drawing::Size(20, 16);
			this->flightnumber5->TabIndex = 47;
			this->flightnumber5->Text = L"f5";
			// 
			// price4
			// 
			this->price4->AutoSize = true;
			this->price4->BackColor = System::Drawing::Color::Transparent;
			this->price4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->price4->Location = System::Drawing::Point(511, 364);
			this->price4->Name = L"price4";
			this->price4->Size = System::Drawing::Size(25, 16);
			this->price4->TabIndex = 48;
			this->price4->Text = L"p4";
			// 
			// price5
			// 
			this->price5->AutoSize = true;
			this->price5->BackColor = System::Drawing::Color::Transparent;
			this->price5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->price5->Location = System::Drawing::Point(511, 449);
			this->price5->Name = L"price5";
			this->price5->Size = System::Drawing::Size(25, 16);
			this->price5->TabIndex = 49;
			this->price5->Text = L"p5";
			// 
			// Flights
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(781, 577);
			this->Controls->Add(this->price5);
			this->Controls->Add(this->price4);
			this->Controls->Add(this->flightnumber5);
			this->Controls->Add(this->flightnumber4);
			this->Controls->Add(this->price3);
			this->Controls->Add(this->flightnumber3);
			this->Controls->Add(this->arrive5);
			this->Controls->Add(this->arrive4);
			this->Controls->Add(this->arrive3);
			this->Controls->Add(this->depart5);
			this->Controls->Add(this->depart3);
			this->Controls->Add(this->depart4);
			this->Controls->Add(this->from3);
			this->Controls->Add(this->from4);
			this->Controls->Add(this->from5);
			this->Controls->Add(this->to4);
			this->Controls->Add(this->to5);
			this->Controls->Add(this->class5);
			this->Controls->Add(this->from2);
			this->Controls->Add(this->to2);
			this->Controls->Add(this->depart2);
			this->Controls->Add(this->arrive2);
			this->Controls->Add(this->flightnumber2);
			this->Controls->Add(this->price2);
			this->Controls->Add(this->to3);
			this->Controls->Add(this->class1);
			this->Controls->Add(this->from1);
			this->Controls->Add(this->to1);
			this->Controls->Add(this->depart1);
			this->Controls->Add(this->arrive1);
			this->Controls->Add(this->flightnumber1);
			this->Controls->Add(this->price1);
			this->Controls->Add(this->class2);
			this->Controls->Add(this->class3);
			this->Controls->Add(this->class4);
			this->Controls->Add(this->airline3);
			this->Controls->Add(this->airline4);
			this->Controls->Add(this->airline5);
			this->Controls->Add(this->airline2);
			this->Controls->Add(this->airline1);
			this->Controls->Add(this->priceHeading);
			this->Controls->Add(this->classHeading);
			this->Controls->Add(this->flyingFromHeading);
			this->Controls->Add(this->departDateHeading);
			this->Controls->Add(this->flyingToHeading);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->arriveDateHeading);
			this->Controls->Add(this->flightNumberHeading);
			this->Controls->Add(this->airlineHeading);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"Flights";
			this->Text = L"Air Ticket Reservation";
			this->Load += gcnew System::EventHandler(this, &Flights::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int number = rand() % 6;
		if (number == 0)
		{
			this->airlineHeading->Location = System::Drawing::Point(300, 280);
			this->airlineHeading->Text = "No Flights Available.";
			classHeading->Visible = false;
			flyingToHeading->Visible = false;
			flyingFromHeading->Visible = false;
			priceHeading->Visible = false;
			flightNumberHeading->Visible = false;
			departDateHeading->Visible = false;
			arriveDateHeading->Visible = false;
			airline1->Visible = false;
			airline2->Visible = false;
			airline3->Visible = false;
			airline4->Visible = false;
			airline5->Visible = false;
			class1->Visible = false;
			class2->Visible = false;
			class3->Visible = false;
			class4->Visible = false;
			class5->Visible = false;
			to1->Visible = false;
			to2->Visible = false;
			to3->Visible = false;
			to4->Visible = false;
			to5->Visible = false;
			from1->Visible = false;
			from2->Visible = false;
			from3->Visible = false;
			from4->Visible = false;
			from5->Visible = false;
			flightnumber1->Visible = false;
			flightnumber2->Visible = false;
			flightnumber3->Visible = false;
			flightnumber4->Visible = false;
			flightnumber5->Visible = false;
			price1->Visible = false;
			price2->Visible = false;
			price3->Visible = false;
			price4->Visible = false;
			price5->Visible = false;
			arrive1->Visible = false;
			arrive2->Visible = false;
			arrive3->Visible = false;
			arrive4->Visible = false;
			arrive5->Visible = false;
			depart1->Visible = false;
			depart2->Visible = false;
			depart3->Visible = false;
			depart4->Visible = false;
			depart5->Visible = false;
		}
		if (number == 1)
		{
			std::string air1 = generateAirline(fObject->get_traveltype());
			airline1->Text = msclr::interop::marshal_as<String^>(air1);
			flightnumber1->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air1));
			price1->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class1->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			airline2->Visible = false;
			airline3->Visible = false;
			airline4->Visible = false;
			airline5->Visible = false;
			class2->Visible = false;
			class3->Visible = false;
			class4->Visible = false;
			class5->Visible = false;
			to2->Visible = false;
			to3->Visible = false;
			to4->Visible = false;
			to5->Visible = false;
			from2->Visible = false;
			from3->Visible = false;
			from4->Visible = false;
			from5->Visible = false;
			flightnumber2->Visible = false;
			flightnumber3->Visible = false;
			flightnumber4->Visible = false;
			flightnumber5->Visible = false;
			price2->Visible = false;
			price3->Visible = false;
			price4->Visible = false;
			price5->Visible = false;
			arrive2->Visible = false;
			arrive3->Visible = false;
			arrive4->Visible = false;
			arrive5->Visible = false;
			depart2->Visible = false;
			depart3->Visible = false;
			depart4->Visible = false;
			depart5->Visible = false;
		}
		if (number == 2)
		{
			std::string air1 = generateAirline(fObject->get_traveltype());
			airline1->Text = msclr::interop::marshal_as<String^>(air1);
			flightnumber1->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air1));
			price1->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class1->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air2 = generateAirline(fObject->get_traveltype());
			airline2->Text = msclr::interop::marshal_as<String^>(air2);
			flightnumber2->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air2));
			price2->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class2->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			airline3->Visible = false;
			airline4->Visible = false;
			airline5->Visible = false;
			class3->Visible = false;
			class4->Visible = false;
			class5->Visible = false;
			to3->Visible = false;
			to4->Visible = false;
			to5->Visible = false;
			from3->Visible = false;
			from4->Visible = false;
			from5->Visible = false;
			flightnumber3->Visible = false;
			flightnumber4->Visible = false;
			flightnumber5->Visible = false;
			price3->Visible = false;
			price4->Visible = false;
			price5->Visible = false;
			arrive3->Visible = false;
			arrive4->Visible = false;
			arrive5->Visible = false;
			depart3->Visible = false;
			depart4->Visible = false;
			depart5->Visible = false;
		}
		if (number == 3)
		{
			std::string air1 = generateAirline(fObject->get_traveltype());
			airline1->Text = msclr::interop::marshal_as<String^>(air1);
			flightnumber1->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air1));
			price1->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class1->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air2 = generateAirline(fObject->get_traveltype());
			airline2->Text = msclr::interop::marshal_as<String^>(air2);
			flightnumber2->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air2));
			price2->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class2->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air3 = generateAirline(fObject->get_traveltype());
			airline3->Text = msclr::interop::marshal_as<String^>(air3);
			flightnumber3->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air3));
			price3->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class3->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from3->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to3->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart3->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive3->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			airline4->Visible = false;
			airline5->Visible = false;
			class4->Visible = false;
			class5->Visible = false;
			to4->Visible = false;
			to5->Visible = false;
			from4->Visible = false;
			from5->Visible = false;
			flightnumber4->Visible = false;
			flightnumber5->Visible = false;
			price4->Visible = false;
			price5->Visible = false;
			arrive4->Visible = false;
			arrive5->Visible = false;
			depart4->Visible = false;
			depart5->Visible = false;
		}
		if (number == 4)
		{
			std::string air1 = generateAirline(fObject->get_traveltype());
			airline1->Text = msclr::interop::marshal_as<String^>(air1);
			flightnumber1->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air1));
			price1->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class1->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air2 = generateAirline(fObject->get_traveltype());
			airline2->Text = msclr::interop::marshal_as<String^>(air2);
			flightnumber2->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air2));
			price2->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class2->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air3 = generateAirline(fObject->get_traveltype());
			airline3->Text = msclr::interop::marshal_as<String^>(air3);
			flightnumber3->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air3));
			price3->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class3->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from3->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to3->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart3->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive3->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air4 = generateAirline(fObject->get_traveltype());
			airline4->Text = msclr::interop::marshal_as<String^>(air4);
			flightnumber4->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air4));
			price4->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class4->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from4->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to4->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart4->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive4->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			airline5->Visible = false;
			class5->Visible = false;
			to5->Visible = false;
			from5->Visible = false;
			flightnumber5->Visible = false;
			price5->Visible = false;
			arrive5->Visible = false;
			depart5->Visible = false;
		}
		if (number == 5)
		{
			std::string air1 = generateAirline(fObject->get_traveltype());
			airline1->Text = msclr::interop::marshal_as<String^>(air1);
			flightnumber1->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air1));
			price1->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class1->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart1->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive1->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air2 = generateAirline(fObject->get_traveltype());
			airline2->Text = msclr::interop::marshal_as<String^>(air2);
			flightnumber2->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air2));
			price2->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class2->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart2->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive2->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air3 = generateAirline(fObject->get_traveltype());
			airline3->Text = msclr::interop::marshal_as<String^>(air3);
			flightnumber3->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air3));
			price3->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class3->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from3->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to3->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart3->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive3->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air4 = generateAirline(fObject->get_traveltype());
			airline4->Text = msclr::interop::marshal_as<String^>(air4);
			flightnumber4->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air4));
			price4->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class4->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from4->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to4->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart4->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive4->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
			std::string air5 = generateAirline(fObject->get_traveltype());
			airline5->Text = msclr::interop::marshal_as<String^>(air5);
			flightnumber5->Text = msclr::interop::marshal_as<String^>(generateFlightnum(air5));
			price5->Text = msclr::interop::marshal_as<String^>(generatePrice(fObject->get_traveltype(), fObject->get_classtype(), fObject->get_category()));
			class5->Text = msclr::interop::marshal_as<String^>(fObject->get_classtype());
			from5->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_city());
			to5->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_city());
			depart5->Text = msclr::interop::marshal_as<String^>(fObject->get_dep_date());
			arrive5->Text = msclr::interop::marshal_as<String^>(fObject->get_arr_date());
		}
		if (fObject->get_category() == "One Way")
		{
			arriveDateHeading->Visible = false;
			arrive1->Visible = false;
			arrive2->Visible = false;
			arrive3->Visible = false;
			arrive4->Visible = false;
			arrive5->Visible = false;
		}
	}
private: System::Void airline1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	airline1->ForeColor = System::Drawing::Color::Blue;
	class1->ForeColor = System::Drawing::Color::Blue;
	from1->ForeColor = System::Drawing::Color::Blue;
	to1->ForeColor = System::Drawing::Color::Blue;
	flightnumber1->ForeColor = System::Drawing::Color::Blue;
	price1->ForeColor = System::Drawing::Color::Blue;
	depart1->ForeColor = System::Drawing::Color::Blue;
	arrive1->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void airline2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	airline2->ForeColor = System::Drawing::Color::Blue;
	class2->ForeColor = System::Drawing::Color::Blue;
	from2->ForeColor = System::Drawing::Color::Blue;
	to2->ForeColor = System::Drawing::Color::Blue;
	flightnumber2->ForeColor = System::Drawing::Color::Blue;
	price2->ForeColor = System::Drawing::Color::Blue;
	depart2->ForeColor = System::Drawing::Color::Blue;
	arrive2->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void airline3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	airline3->ForeColor = System::Drawing::Color::Blue;
	class3->ForeColor = System::Drawing::Color::Blue;
	from3->ForeColor = System::Drawing::Color::Blue;
	to3->ForeColor = System::Drawing::Color::Blue;
	flightnumber3->ForeColor = System::Drawing::Color::Blue;
	price3->ForeColor = System::Drawing::Color::Blue;
	depart3->ForeColor = System::Drawing::Color::Blue;
	arrive3->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void airline4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	airline4->ForeColor = System::Drawing::Color::Blue;
	class4->ForeColor = System::Drawing::Color::Blue;
	from4->ForeColor = System::Drawing::Color::Blue;
	to4->ForeColor = System::Drawing::Color::Blue;
	flightnumber4->ForeColor = System::Drawing::Color::Blue;
	price4->ForeColor = System::Drawing::Color::Blue;
	depart4->ForeColor = System::Drawing::Color::Blue;
	arrive4->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void airline5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	airline5->ForeColor = System::Drawing::Color::Blue;
	class5->ForeColor = System::Drawing::Color::Blue;
	from5->ForeColor = System::Drawing::Color::Blue;
	to5->ForeColor = System::Drawing::Color::Blue;
	flightnumber5->ForeColor = System::Drawing::Color::Blue;
	price5->ForeColor = System::Drawing::Color::Blue;
	depart5->ForeColor = System::Drawing::Color::Blue;
	arrive5->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void airline1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	airline1->ForeColor = System::Drawing::Color::White;
	class1->ForeColor = System::Drawing::Color::White;
	from1->ForeColor = System::Drawing::Color::White;
	to1->ForeColor = System::Drawing::Color::White;
	flightnumber1->ForeColor = System::Drawing::Color::White;
	price1->ForeColor = System::Drawing::Color::White;
	depart1->ForeColor = System::Drawing::Color::White;
	arrive1->ForeColor = System::Drawing::Color::White;
}
private: System::Void airline2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	airline2->ForeColor = System::Drawing::Color::White;
	class2->ForeColor = System::Drawing::Color::White;
	from2->ForeColor = System::Drawing::Color::White;
	to2->ForeColor = System::Drawing::Color::White;
	flightnumber2->ForeColor = System::Drawing::Color::White;
	price2->ForeColor = System::Drawing::Color::White;
	depart2->ForeColor = System::Drawing::Color::White;
	arrive2->ForeColor = System::Drawing::Color::White;
}
private: System::Void airline3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	airline3->ForeColor = System::Drawing::Color::White;
	class3->ForeColor = System::Drawing::Color::White;
	from3->ForeColor = System::Drawing::Color::White;
	to3->ForeColor = System::Drawing::Color::White;
	flightnumber3->ForeColor = System::Drawing::Color::White;
	price3->ForeColor = System::Drawing::Color::White;
	depart3->ForeColor = System::Drawing::Color::White;
	arrive3->ForeColor = System::Drawing::Color::White;
}
private: System::Void airline4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	airline4->ForeColor = System::Drawing::Color::White;
	class4->ForeColor = System::Drawing::Color::White;
	from4->ForeColor = System::Drawing::Color::White;
	to4->ForeColor = System::Drawing::Color::White;
	flightnumber4->ForeColor = System::Drawing::Color::White;
	price4->ForeColor = System::Drawing::Color::White;
	depart4->ForeColor = System::Drawing::Color::White;
	arrive4->ForeColor = System::Drawing::Color::White;
}
private: System::Void airline5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	airline5->ForeColor = System::Drawing::Color::White;
	class5->ForeColor = System::Drawing::Color::White;
	from5->ForeColor = System::Drawing::Color::White;
	to5->ForeColor = System::Drawing::Color::White;
	flightnumber5->ForeColor = System::Drawing::Color::White;
	price5->ForeColor = System::Drawing::Color::White;
	depart5->ForeColor = System::Drawing::Color::White;
	arrive5->ForeColor = System::Drawing::Color::White;
}
private: System::Void airline1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string airline = msclr::interop::marshal_as < std::string >(airline1->Text);
	std::string fno = msclr::interop::marshal_as < std::string >(flightnumber1->Text);
	std::string price = msclr::interop::marshal_as < std::string >(price1->Text);
	fObject->setflight(airline, price, fno);
	this->Hide();
	Booking^ obj = gcnew Booking();
	obj->ShowDialog();
}
private: System::Void airline2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string airline = msclr::interop::marshal_as < std::string >(airline2->Text);
	std::string fno = msclr::interop::marshal_as < std::string >(flightnumber2->Text);
	std::string price = msclr::interop::marshal_as < std::string >(price2->Text);
	fObject->setflight(airline, price, fno);
	this->Hide();
	Booking^ obj = gcnew Booking();
	obj->ShowDialog();
}
private: System::Void airline3_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string airline = msclr::interop::marshal_as < std::string >(airline3->Text);
	std::string fno = msclr::interop::marshal_as < std::string >(flightnumber3->Text);
	std::string price = msclr::interop::marshal_as < std::string >(price3->Text);
	fObject->setflight(airline, price, fno);
	this->Hide();
	Booking^ obj = gcnew Booking();
	obj->ShowDialog();
}
private: System::Void airline4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string airline = msclr::interop::marshal_as < std::string >(airline4->Text);
	std::string fno = msclr::interop::marshal_as < std::string >(flightnumber4->Text);
	std::string price = msclr::interop::marshal_as < std::string >(price4->Text);
	fObject->setflight(airline, price, fno);
	this->Hide();
	Booking^ obj = gcnew Booking();
	obj->ShowDialog();
}
private: System::Void airline5_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string airline = msclr::interop::marshal_as < std::string >(airline5->Text);
	std::string fno = msclr::interop::marshal_as < std::string >(flightnumber5->Text);
	std::string price = msclr::interop::marshal_as < std::string >(price5->Text);
	fObject->setflight(airline, price, fno);
	this->Hide();
	Booking^ obj = gcnew Booking();
	obj->ShowDialog();
}
};
}
#endif
