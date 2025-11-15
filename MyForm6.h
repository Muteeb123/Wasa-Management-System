#pragma once
#include"MyForm7.h"
#include"MyForm14.h"
#include"MyForm15.h"
#include"MyForm18.h"
#include "MyForm21.h"
namespace Project20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;                                                                         
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		String^ User = "";
		String^ R_ID = "";
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	public:
		String^ A = "";
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm6(String^ name)
		{
			User = name;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button1->Location = System::Drawing::Point(494, 162);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(397, 71);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Apply for New Connection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button2->Location = System::Drawing::Point(494, 294);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(397, 71);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Pay Bill";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button3->Location = System::Drawing::Point(494, 433);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(397, 71);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Bill Correction";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button4->Location = System::Drawing::Point(494, 674);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(397, 71);
			this->button4->TabIndex = 7;
			this->button4->Text = L"View History";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm6::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(16, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"No Connection ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(16, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(261, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Unmetered Connection";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(16, 25);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 29);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Metered Connection";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(970, 25);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(327, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Pending Connection Request";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(16, 75);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Metered Connection";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(16, 123);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 29);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Pending Bill(s):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(16, 162);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 29);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Due Date:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm6::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(14, 123);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(181, 29);
			this->label8->TabIndex = 15;
			this->label8->Text = L"No Pending Bill";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button5->Location = System::Drawing::Point(1122, 748);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 71);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Log Out";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm6::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(940, 25);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(357, 29);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Pending Bill Correction Request";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(525, 25);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(267, 29);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Customer\'s Home Page";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->button6->Location = System::Drawing::Point(494, 554);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(397, 71);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Remove Connection";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm6::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(901, 25);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(428, 29);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Pending Connection Removal Request";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1360, 846);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
		label5->Hide();
		label1->Hide();
		label2->Hide();
		label3->Hide();
		label4->Hide();
		label8->Hide();
		label7->Hide();
		label6->Hide();
		label9->Hide();
		label11->Hide();
		try {
			SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn->Open();
			SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Connection, NOOC, Metered_UnMetered, Reference FROM Customer WHERE Username=@NAME", conn);
			String^ Name = User;
			cmd1->Parameters->AddWithValue("@NAME", Name);
			SqlDataReader^ reader3 = cmd1->ExecuteReader();
			String^ Coon;
			String^ NOC;
			String^ Meter;
			String^ Ref;
			if (reader3->Read())
			{
				Coon = reader3->GetString(0);
				NOC = reader3->GetString(1);
				Meter = reader3->GetString(2);
				Ref = reader3->GetString(3);
				R_ID = Ref;
			}
			if (Coon == "NO")
			{
				label1->Show();
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button6->Enabled = false;
			}
			else
			{
				button1->Enabled = false;
				label5->Text = "Reference Number: " + Ref;
				label5->Show();
				if (Meter == "Metered")
				{
					label3->Show();
				}
				else
					label2->Show();
			}
			reader3->Close();
		}
		catch (SqlException^ ex)
		{
			ex->Message;
		}
		SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
		conn->Open();
		SqlCommand^ cmd2 = gcnew SqlCommand("SELECT * FROM Requests WHERE Name=@NAME", conn);
		String^ Name = User;
		cmd2->Parameters->AddWithValue("@NAME", Name);
		SqlDataReader^ reader = cmd2->ExecuteReader();
		if (reader->Read())
		{
			label4->Show();
			button1->Enabled = false;
		}
		reader->Close();
		SqlCommand^ cmd24 = gcnew SqlCommand("SELECT * FROM Remove WHERE Name=@NAME", conn);
		String^ Nae = User;
		cmd24->Parameters->AddWithValue("@NAME", Nae);
		SqlDataReader^ reader9 = cmd24->ExecuteReader();
		if (reader9->Read())
		{
			label11->Show();
			button3->Enabled = false;
			button6->Enabled = false;
		}
		reader9->Close();

		SqlCommand^ cmd234 = gcnew SqlCommand("SELECT DueDate, NumberOfBills FROM UnPaid WHERE Username=@NAME", conn);

		cmd234->Parameters->AddWithValue("@NAME", Name);
		SqlDataReader^ reader123 = cmd234->ExecuteReader();
		int nob;
		if (reader123->Read())
		{
			DateTime d = reader123->GetDateTime(0);
			nob = reader123->GetInt32(1);
			nob++;
			label7->Text = label7->Text + d.ToShortDateString();
			label7->Show();
			label6->Text = label6->Text + nob.ToString();
			label6->Show();
			button2->Enabled = true;
			if (R_ID == "0")
			{
				label7->Hide();
				label6->Hide();
				button2->Enabled = false;
			}
			
		}
		else
		{
			label8->Show();
			button2->Enabled = false;
			button3->Enabled = false;
		}
		if (nob > 3)
		{
			
			button2->Enabled = true;
			button1->Enabled = false;
		}
		SqlConnection^ conn1412 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
		conn1412->Open();
		SqlCommand^ cmd212 = gcnew SqlCommand("SELECT * FROM Correction WHERE Username=@NAME", conn1412);
		String^ Nqw = User;
		cmd212->Parameters->AddWithValue("@NAME", Nqw);
		SqlDataReader^ reader98 = cmd212->ExecuteReader();
		if (reader98->Read())
		{
			label9->Show();
			label8->Hide();
			label7->Hide();
			button2->Enabled = false;
			button3->Enabled = false;
		}
		reader98->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm7^ F7 = gcnew MyForm7();
		F7->NAME = User;
		F7->ADDRESS = A;

		F7->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm14^ F14 = gcnew MyForm14();
		F14->NAME = User;
		F14->ADDRESS = A;
		F14->Show();
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm15^ F15 = gcnew MyForm15();
		F15->Nam = User;
		F15->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you Sure you want to Log Out?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm18^ F18 = gcnew MyForm18();
		F18->NA = User;
		F18->Show();
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm21^ F21 = gcnew MyForm21();
	F21->name = User;
	F21->ref = R_ID;
	F21->Show();
}
};
}
