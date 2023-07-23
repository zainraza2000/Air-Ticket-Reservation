#pragma once
#include"Header.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_title;
	protected:

	private: System::Windows::Forms::RadioButton^ radio_Booking;
	private: System::Windows::Forms::RadioButton^ radio_Login;
	private: System::Windows::Forms::Button^ button_submit;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->radio_Booking = (gcnew System::Windows::Forms::RadioButton());
			this->radio_Login = (gcnew System::Windows::Forms::RadioButton());
			this->button_submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->BackColor = System::Drawing::Color::Transparent;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_title->Location = System::Drawing::Point(195, 50);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(379, 31);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Air Ticket Reservation System";
			// 
			// radio_Booking
			// 
			this->radio_Booking->AutoSize = true;
			this->radio_Booking->BackColor = System::Drawing::Color::Transparent;
			this->radio_Booking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_Booking->Location = System::Drawing::Point(317, 415);
			this->radio_Booking->Name = L"radio_Booking";
			this->radio_Booking->Size = System::Drawing::Size(85, 24);
			this->radio_Booking->TabIndex = 1;
			this->radio_Booking->TabStop = true;
			this->radio_Booking->Text = L"Booking";
			this->radio_Booking->UseVisualStyleBackColor = false;
			// 
			// radio_Login
			// 
			this->radio_Login->AutoSize = true;
			this->radio_Login->BackColor = System::Drawing::Color::Transparent;
			this->radio_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_Login->Location = System::Drawing::Point(317, 454);
			this->radio_Login->Name = L"radio_Login";
			this->radio_Login->Size = System::Drawing::Size(66, 24);
			this->radio_Login->TabIndex = 2;
			this->radio_Login->TabStop = true;
			this->radio_Login->Text = L"Login";
			this->radio_Login->UseVisualStyleBackColor = false;
			this->radio_Login->CheckedChanged += gcnew System::EventHandler(this, &login::radioButton2_CheckedChanged);
			// 
			// button_submit
			// 
			this->button_submit->BackColor = System::Drawing::Color::Transparent;
			this->button_submit->Location = System::Drawing::Point(317, 500);
			this->button_submit->Name = L"button_submit";
			this->button_submit->Size = System::Drawing::Size(75, 23);
			this->button_submit->TabIndex = 3;
			this->button_submit->Text = L"Submit";
			this->button_submit->UseVisualStyleBackColor = false;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(781, 577);
			this->Controls->Add(this->button_submit);
			this->Controls->Add(this->radio_Login);
			this->Controls->Add(this->radio_Booking);
			this->Controls->Add(this->label_title);
			this->Name = L"login";
			this->Text = L"Air Ticket Reservation";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
