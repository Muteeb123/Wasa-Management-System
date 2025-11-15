#pragma once
#include "MyForm6.h"
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
namespace Project20 {
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(386, 205);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(313, 45);
			this->textBox1->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(385, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 29);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Area";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(386, 105);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(313, 45);
			this->textBox2->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(378, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 29);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Name";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(381, 391);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(313, 45);
			this->textBox3->TabIndex = 37;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(374, 344);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 29);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Mobile No.";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(381, 484);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(313, 45);
			this->textBox4->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(378, 438);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 29);
			this->label4->TabIndex = 38;
			this->label4->Text = L"CNIC";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(381, 577);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(313, 45);
			this->textBox5->TabIndex = 41;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(378, 531);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 29);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Password";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(381, 665);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(313, 45);
			this->textBox6->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(380, 624);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(220, 29);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Confirm Password";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm2::label6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(427, 757);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 54);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->Location = System::Drawing::Point(562, 757);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 54);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(378, 252);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 29);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Plot Size";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(381, 300);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(313, 45);
			this->textBox7->TabIndex = 47;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(12, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(349, 39);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Register As Customer";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(803, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 174);
			this->label9->TabIndex = 49;
			this->label9->Text = L"Available Areas are\r\n1. Model-Town\r\n2. Johar-Town\r\n3. Faisal-Town\r\n4. Bahria-Town"
				L"\r\n5. DHA";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(542, 261);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 20);
			this->label10->TabIndex = 50;
			this->label10->Text = L"( In Marlas)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(558, 356);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(177, 20);
			this->label11->TabIndex = 52;
			this->label11->Text = L"Format: 0312-3456789";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(507, 447);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(201, 20);
			this->label12->TabIndex = 53;
			this->label12->Text = L"Format: 33123-4567890-1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(488, 48);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 39);
			this->label13->TabIndex = 54;
			this->label13->Text = L"*";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(517, 531);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 39);
			this->label14->TabIndex = 55;
			this->label14->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(628, 625);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 39);
			this->label15->TabIndex = 56;
			this->label15->Text = L"*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(471, 438);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 39);
			this->label17->TabIndex = 58;
			this->label17->Text = L"*";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(529, 346);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(30, 39);
			this->label18->TabIndex = 59;
			this->label18->Text = L"*";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(513, 252);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(30, 39);
			this->label19->TabIndex = 60;
			this->label19->Text = L"*";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(473, 155);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(30, 39);
			this->label20->TabIndex = 61;
			this->label20->Text = L"*";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Black;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(524, 724);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(175, 29);
			this->checkBox2->TabIndex = 62;
			this->checkBox2->Text = L"Show Password";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox2_CheckedChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1077, 1051);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool allow = false;
		bool alpha = false;
		std::string stdString = marshal_as<std::string>(textBox2->Text);
		for (char c : stdString)
		{
			if (!isalpha(c) && c!=' ')
			{
				alpha = false;
				break;

			}
			alpha = true;
		}
		bool num=false;
		int digit_count = 0;
		int minus_count = 0;
		std::string stdString1 = marshal_as<std::string>(textBox3->Text);
		for (char c : stdString1)
		{
			if (isalpha(c) && c == ' ')
			{
				num = false;
				break;

			}
			if (isdigit(c) )
			{
				digit_count++;
			}
			if (c=='-') {
				minus_count++;
			}
		}
		if (minus_count == 1 && digit_count == 11)
		{
			num = true;
		}
		bool cnic=false;
		 digit_count = 0;
		 minus_count = 0;
		std::string stdString2 = marshal_as<std::string>(textBox4->Text);
		for (char c : stdString2)
		{
			if (isalpha(c) && c == ' ')
			{
				cnic = false;
				break;

			}
			if (isdigit(c))
			{
				digit_count++;
			}
			if (c == '-') {
				minus_count++;
			}
		}
		if (minus_count == 2 && digit_count == 13)
		{
			cnic = true;
		}
		bool alpha1 = false;
		std::string stdString3 = marshal_as<std::string>(textBox7->Text);
		for (char c : stdString3)
		{
			if (!isdigit(c))
			{
				alpha1 = false;
				break;

			}
			alpha1 = true;
		}
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "") {
		try {
			String^ address = textBox1->Text;
			String^ name = textBox2->Text;
			String^ number = textBox3->Text;
			String^ CNICC = textBox4->Text;
			String^ pass1 = textBox5->Text;
			String^ pass2 = textBox6->Text;
			String^ P = textBox7->Text;
			int Plot;
			if (alpha1)
			Plot = Convert::ToInt32(P);


			
				if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "")
				{
					try
					{

						String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
						SqlConnection^ sqlconn = gcnew SqlConnection(sqlconnection);
						sqlconn->Open();
						if (alpha==true)
						{
							label13->Hide();
							if (textBox1->Text == "Model-Town" || textBox1->Text == "Johar-Town" || textBox1->Text == "Faisal-Town" || textBox1->Text == "Bahria-Town" || textBox1->Text == "DHA")
							{
								label20->Hide();
								
									
										
											if (alpha1==true && Plot >0)
											{
												label19->Hide();
												if (num == true)
												{
													label18->Hide();
													if (cnic == true)
													{
														label17->Hide();
														if (textBox5->Text->Length >= 4 )
														{
															label14->Hide();
															if (pass1 == pass2)
															{
																label14->Hide();
																label15->Hide();
																String^ SqlQuery = "INSERT INTO [Customer] (Username, Password, Address, Number, CNIC, Connection, NOOC, Metered_UnMetered,Reference,PlotSize) VALUES (@Namee, @Passx, @Addd, @NUMB, @CNN,@Conn,@NN,@MM,@Ref,@P)";
																SqlCommand^ command = gcnew SqlCommand(SqlQuery, sqlconn);
																command->Parameters->AddWithValue("@Namee", name);
																command->Parameters->AddWithValue("@Passx", pass1);
																command->Parameters->AddWithValue("@Addd", address);
																command->Parameters->AddWithValue("@NUMB", number);
																command->Parameters->AddWithValue("@CNN", CNICC);
																command->Parameters->AddWithValue("@Conn", "NO");
																command->Parameters->AddWithValue("@NN", "0");
																command->Parameters->AddWithValue("@MM", "NO");
																command->Parameters->AddWithValue("@Ref", "0");
																command->Parameters->AddWithValue("@P", Plot);
																command->ExecuteNonQuery();
																allow = true;
																MessageBox::Show("Regsitered Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
															}
															else { MessageBox::Show("Passwords Should be same", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); label14->Show(); label15->Show(); }
														
														}
														else { MessageBox::Show("Password is too Short", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); label14->Show(); }
													}
													else { MessageBox::Show("Enter CNIC in Format:\n33123-4567890-1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); label17->Show(); }
												}
												else { MessageBox::Show("Enter Number in Format:\n0312-3456789", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); label18->Show(); }
												
											}
											else { MessageBox::Show("Enter Valid Plot-Size", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); label19->Show(); }
										
										
									
									
								
								
							}
							else { MessageBox::Show("Available Areas are\n\t1.Johar-Town\n\tModel-Town\n\tBahria-Town\n\t4.Faisal-Town\n\t5.DHA", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information); label20->Show(); }
						}
						else { MessageBox::Show("Name Must Only  Contain Alphabets", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); label13->Show(); }
					}
					catch (SqlException^ E)
					{
						MessageBox::Show("Name is Already Taken", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						label13->Show();
					}
				}
				else { MessageBox::Show("Fill All the boxes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
		
		}
		catch (SqlException^ Ex) { MessageBox::Show("Enter Valid Size", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
	}
		else
			MessageBox::Show("Fill the Required Boxes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (allow) {
			try {
				
				String^ sqlconnection2 = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
				SqlConnection^ sqlconn2 = gcnew SqlConnection(sqlconnection2);
				sqlconn2->Open();

				String^ SqlQuery2 = "SELECT Customers FROM Areas WHERE Name=@add";
				SqlCommand^ command2 = gcnew SqlCommand(SqlQuery2, sqlconn2);
				command2->Parameters->AddWithValue("@add", textBox1->Text);
				SqlDataReader^ reader2 = command2->ExecuteReader();

				if (reader2->Read())
				{
					
					String^ sqlconnection3 = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
					SqlConnection^ sqlconn3 = gcnew SqlConnection(sqlconnection3);
					sqlconn3->Open();
					int total = reader2->GetInt32(0);
					total++;
					reader2->Close();
					String^ SqlQuery3 = "UPDATE Areas SET Customers = @new WHERE Name=@add";
					SqlCommand^ command3 = gcnew SqlCommand(SqlQuery3, sqlconn2);
					command3->Parameters->AddWithValue("@add", textBox1->Text);
					command3->Parameters->AddWithValue("@new", total);
					command3->ExecuteNonQuery();
					this->Close();
				}
			}
			catch (SqlException^ ex) {
				ex->Message;
			}
		}
		
	}

	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		checkBox2->Checked = false;
		textBox6->UseSystemPasswordChar = true;
		textBox5->UseSystemPasswordChar = true;
	}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked)
	{
		textBox6->UseSystemPasswordChar = false;
		textBox5->UseSystemPasswordChar = false;
	}
	else
	{
		textBox6->UseSystemPasswordChar = true;
		textBox5->UseSystemPasswordChar = true;
	}
}
};
}
