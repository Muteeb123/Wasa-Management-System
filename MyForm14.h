#pragma once
#include "MyForm13.h"
namespace Project20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm14
	/// </summary>
	public ref class MyForm14 : public System::Windows::Forms::Form
	{
	public:
		String^ NAME = "";
		String^ ADDRESS = "";
		String^ number;
		String^ Cnic;
		String^ Reference;
		String^ Connection;
		int consumed;
		int total;
		DateTime Issued;
		DateTime Due;
		int temp;
	private: System::Windows::Forms::Button^ button4;
	public:
		int Plot;

		MyForm14(void)
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
		~MyForm14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label17;
	protected:
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm14::typeid));
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(813, 105);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(226, 58);
			this->label17->TabIndex = 56;
			this->label17->Text = L"                _________\r\nNet Total ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(813, 76);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(128, 29);
			this->label16->TabIndex = 55;
			this->label16->Text = L"Charges    ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(813, 47);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(128, 29);
			this->label15->TabIndex = 54;
			this->label15->Text = L"Total          ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(774, 9);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(267, 29);
			this->label14->TabIndex = 53;
			this->label14->Text = L"Payment After Due Date";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(552, 28);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 52;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button3->Location = System::Drawing::Point(593, 713);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 55);
			this->button3->TabIndex = 51;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm14::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->textBox1->Location = System::Drawing::Point(409, 719);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 41);
			this->textBox1->TabIndex = 50;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(406, 673);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(163, 29);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Enter Amount ";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button2->Location = System::Drawing::Point(423, 779);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 55);
			this->button2->TabIndex = 48;
			this->button2->Text = L"PAY";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm14::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button1->Location = System::Drawing::Point(138, 729);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 55);
			this->button1->TabIndex = 47;
			this->button1->Text = L"PAY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm14::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(123, 657);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(174, 29);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Status   Unpaid";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(123, 278);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 29);
			this->label11->TabIndex = 45;
			this->label11->Text = L"Plot-Size";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(123, 557);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 29);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Due Date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(22, 28);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(122, 29);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Issued On";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(123, 605);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 29);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Net Total ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(123, 513);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 29);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Consumption";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(123, 469);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 29);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Connection";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(123, 400);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 29);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Mobile No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(123, 224);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 29);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(123, 165);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 29);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(123, 115);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 29);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Reference No";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(123, 336);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 29);
			this->label5->TabIndex = 35;
			this->label5->Text = L"CNIC";
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button4->Location = System::Drawing::Point(275, 729);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 55);
			this->button4->TabIndex = 57;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm14::button4_Click);
			// 
			// MyForm14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1360, 846);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm14";
			this->Text = L"MyForm14";
			this->Load += gcnew System::EventHandler(this, &MyForm14::MyForm14_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm14_Load(System::Object^ sender, System::EventArgs^ e) {
		label14->Hide();
		label15->Hide();
		label16->Hide();
		label17->Hide();
		label13->Hide();
		textBox1->Hide();
		button2->Hide();
		button3->Hide();
		dateTimePicker1->Hide();
		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ SqlQuery = "SELECT Number, CNIC, Reference, Metered_UnMetered, Consumption, Total, Issued, DueDate, PlotSize FROM [UnPaid] WHERE Username=@Username ";
		SqlCommand command(SqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@Username", NAME);
		SqlDataReader^ Reader = command.ExecuteReader();
		if (Reader->Read())
		{
			number = Reader->GetString(0);
			Cnic = Reader->GetString(1);
			Reference = Reader->GetString(2);
			Connection = Reader->GetString(3);
			consumed = Reader->GetInt32(4);
			temp = total = Reader->GetInt32(5);
			Issued = Reader->GetDateTime(6);
			Due = Reader->GetDateTime(7);
			if (dateTimePicker1->Value > Due)
			{
				int temp1 = total;
				int temp2 = 5 * (total / 100);
				total = temp1 + temp2;
				label14->Show();
				label15->Show();
				label16->Show();
				label17->Show();
				label15->Text = label15->Text + temp1.ToString();
				label16->Text = label16->Text + temp2.ToString();
				label17->Text = label17->Text + " " + total;
			}

			Plot = Reader->GetInt32(8);
			label1->Text = label1->Text + ": " + Reference;
			label2->Text = label2->Text + ": " + NAME;
			label3->Text = label3->Text + ": " + ADDRESS;
			label11->Text = label11->Text + ": " + Plot.ToString();
			label5->Text = label5->Text + ": " + Cnic;
			if (Connection == "YES")
				label6->Text = label6->Text + ": Metered";
			else
				label6->Text = label6->Text + ": UnMetered";
			label7->Text = label7->Text + ": " + consumed.ToString();
			label8->Text = label8->Text + ": " + total.ToString();
			label9->Text = label9->Text + ": " + Issued.ToLongDateString();
			label10->Text = label10->Text + ": " + Due.ToShortDateString();
			label4->Text = label4->Text + ": " + number;
		}
		else
		{
			label1->Hide();
			label2->Hide();
			label3->Hide();
			label4->Hide();
			label5->Hide();
			label6->Hide();
			label7->Hide();
			label8->Hide();
			label9->Hide();
			label10->Hide();
			label11->Hide();
			label12->Hide();
			button1->Hide();
			button3->Hide();
			this->Close();
			MessageBox::Show("No Pending Bill", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label13->Show();
		button2->Show();
		textBox1->Show();
		button3->Show();
		button1->Hide();
		button4->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label13->Hide();
		button2->Hide();
		textBox1->Hide();
		button3->Hide();
		button1->Show();
		button4->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (MessageBox::Show("Pay Bill?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			int amount = Convert::ToInt32(textBox1->Text);

			if (amount == total) {

				try {

					String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
					SqlConnection^ sqlconn = gcnew SqlConnection(sqlconnection);
					sqlconn->Open();

					String^ SqlQuery = "INSERT INTO [Paid] (Username, Address, Number, CNIC, Reference, Metered_UnMetered, Consumption, Total, Issued, Payment, PlotSize) VALUES (@Namee, @Addd, @NUMB, @CNN, @Ref, @meter, @consumed, @tot, @Iss, @Pay, @plo)";
					SqlCommand^ command = gcnew SqlCommand(SqlQuery, sqlconn);

					command->Parameters->AddWithValue("@Namee", NAME);
					command->Parameters->AddWithValue("@Addd", ADDRESS);
					command->Parameters->AddWithValue("@NUMB", number);
					command->Parameters->AddWithValue("@CNN", Cnic);
					command->Parameters->AddWithValue("@Ref", Reference);
					if (Connection == "Metered")
						command->Parameters->AddWithValue("@meter", "Metered");
					else
						command->Parameters->AddWithValue("@meter", "UnMetered");
					command->Parameters->AddWithValue("@consumed", consumed);
					command->Parameters->AddWithValue("@tot", total);
					command->Parameters->AddWithValue("@Iss", Issued);
					command->Parameters->AddWithValue("@Pay", dateTimePicker1->Value);
					command->Parameters->AddWithValue("@plo", Plot);

					command->ExecuteNonQuery();
					if (Connection == "Metered")
					{
						String^ select1 = "SELECT Meter_Reading,Due_Payment From Meters WHERE CurrentReferenceID=@ref";
						SqlCommand^ sel = gcnew SqlCommand(select1, sqlconn);
						sel->Parameters->AddWithValue("ref", Reference);
						SqlDataReader^ rd = sel->ExecuteReader();
						if (rd->Read())
						{
							int Due = rd->GetInt32(1);
							rd->Close();
							String^ upd = "UPDATE Meters SET Due_Payment=@due  WHERE CurrentReferenceID=@re";
							SqlCommand^ sel1 = gcnew SqlCommand(upd, sqlconn);
							sel1->Parameters->AddWithValue("re", Reference);
							sel1->Parameters->AddWithValue("due", Due-temp);
							if (sel1->ExecuteNonQuery())
							{
								
							}
						}
						this->Close();
					}
					String^ deleteQuery = "DELETE FROM UnPaid WHERE Username=@Namee";
					SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, sqlconn);
					deleteCommand->Parameters->AddWithValue("@Namee", NAME);
					deleteCommand->ExecuteNonQuery();

					MessageBox::Show("Payment Successful", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
					MyForm13^ F13 = gcnew MyForm13();
					F13->NAM = NAME;
					F13->ADDR = ADDRESS;
					F13->numb = number;
					F13->Cni = Cnic;
					F13->Issue = Issued;
					F13->Pay = dateTimePicker1->Value;
					F13->Sie = Plot;
					if (Connection == "YES")
						F13->Connect = "Metered";
					else
						F13->Connect = "UnMetered";
					F13->cons = consumed;
					F13->tot = total;
					F13->Ref = Reference;
					F13->Show();
					this->Close();
				}
				catch (Exception^ ex) {
					
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally {
					
				}

			}
			else {
				MessageBox::Show("Invalid Entered Amount  " , "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	
		

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
