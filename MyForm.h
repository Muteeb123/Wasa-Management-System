#pragma once
#include"MyForm1.h"
#include"MyForm3.h"
#include"MyForm4.h"
namespace Project20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Windows::Forms;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
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
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(532, 250);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Admin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(532, 530);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(285, 71);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Customer";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(532, 371);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(285, 86);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Employee";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1107, 710);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 83);
			this->button4->TabIndex = 3;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(514, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 39);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Select User-Type";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1336, 845);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ F1 = gcnew MyForm1();
		F1->Show();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ F3 = gcnew MyForm3();
		F3->Show();
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ F4 = gcnew MyForm4();
		F4->Show();
		this->Hide();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you Sure you want to Quit?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
		/*try {*/
		SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
		conn->Open();
		SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Username,Address, Number, CNIC, Metered_UnMetered , Reference, PlotSize FROM Customer WHERE Connection=@Connect", conn);
		cmd1->Parameters->AddWithValue("@Connect", "YES");
		SqlDataReader^ reader3 = cmd1->ExecuteReader();
		String^ name;
		String^ Add;
		String^ Numb;
		String^ CNNN;
		String^ Meter;
		String^ Ref;
		int Plot;
		SqlConnection^ conn1 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
		conn1->Open();

		while (reader3->Read())
		{
			name = reader3->GetString(0);
			Add = reader3->GetString(1);
			Numb = reader3->GetString(2);
			CNNN = reader3->GetString(3);
			Meter = reader3->GetString(4);
			Ref = reader3->GetString(5);
			Plot = reader3->GetInt32(6);
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM [Generate] WHERE Username=@Username ";
			SqlCommand command(SqlQuery, % sqlconn);
			command.Parameters->AddWithValue("@Username", name);
			SqlDataReader^ Reader = command.ExecuteReader();
			if (Reader->Read()) { continue; }
			String^ insertQuery = "INSERT INTO Generate (Username, Address, Number, CNIC, Reference, Metered_UnMetered, PlotSize) VALUES (@N, @A, @NM, @C, @R, @CN, @P)";
			SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, conn1);
			insertCmd->Parameters->AddWithValue("@N", name);
			insertCmd->Parameters->AddWithValue("@A", Add);
			insertCmd->Parameters->AddWithValue("@NM", Numb);
			insertCmd->Parameters->AddWithValue("@C", CNNN);
			insertCmd->Parameters->AddWithValue("@R", Ref);
			insertCmd->Parameters->AddWithValue("@CN", Meter);
			insertCmd->Parameters->AddWithValue("@P", Plot);
			insertCmd->ExecuteNonQuery();
		}
		int totalsize[5] = {0,0,0,0,0};

		try {
			SqlConnection^ conn2 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn2->Open();
			SqlCommand^ cmd2 = gcnew SqlCommand("SELECT Address, Metered_UnMetered ,  PlotSize FROM Generate ", conn2);
			SqlDataReader^ reader35 = cmd2->ExecuteReader();
			while (reader35->Read())
			{
				String^ meter = reader35->GetString(1);
				String^ Addr = reader35->GetString(0);
				int plot = reader35->GetInt32(2);
				if (meter=="UnMetered"&&Addr=="Model-Town")
				{
					totalsize[0] = totalsize[0] + plot;
				}
				else if (meter == "UnMetered" && Addr == "Johar-Town")
				{
					totalsize[1] = totalsize[1] + plot;
				}
				else if (meter == "UnMetered" && Addr == "Faisal-Town")
				{
					totalsize[2] = totalsize[2] + plot;
				}
				else if (meter == "UnMetered" && Addr == "Bahria-Town")
				{
					totalsize[3] = totalsize[3] + plot;
				}
				else if (meter == "UnMetered" && Addr == "DHA")
				{
					totalsize[4] = totalsize[4] + plot;
				}
				
			}
			
		}
		catch (SqlException^ EX)
		{
			MessageBox::Show("Added All new Customers " + EX->Message, "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		int Model, Faisal, Bahria, Johar, DH;
		try {
			SqlConnection^ conn4 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn4->Open();
			SqlCommand^ cmd4 = gcnew SqlCommand("SELECT Name ,TotalConsumption FROM Areas ", conn4);
			SqlDataReader^ REEEADER = cmd4->ExecuteReader();
			while (REEEADER->Read())
			{
				String^ Namee = REEEADER->GetString(0);
				int Total = REEEADER->GetInt32(1);
				if (Namee == "Model-Town")
					Model = Total;
				if (Namee == "Faisal-Town")
					Faisal = Total;
				if (Namee == "Bahria-Town")
					Bahria = Total;
				if (Namee == "Johar-Town")
					Johar = Total;
				if (Namee == "DHA")
					DH = Total;
				
			}





			SqlConnection^ conn3 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn3->Open();
			SqlCommand^ cmd3 = gcnew SqlCommand("SELECT Address, PlotSize, Username, Metered_UnMetered FROM Generate ", conn3);
			SqlDataReader^ reader353 = cmd3->ExecuteReader();
		
			while (reader353->Read())
			{
				
				String^ Add1 = reader353->GetString(0);
				String^ na = reader353->GetString(2);
				String^ m = reader353->GetString(3);
				int siz = reader353->GetInt32(1);
				int consume;
				if (Add1 == "Model-Town"&&m=="UnMetered")
				{
					consume = (siz / totalsize[0]) * Model;
				}
				else if (Add1 == "Johar-Town" && m == "UnMetered")
				{
					consume = (siz / totalsize[1]) * Johar;
				}
				else if (Add1 == "Faisal-Town" && m == "UnMetered")
				{	
				
					consume = (siz / totalsize[2]) * Faisal;
				}
				else if (Add1 == "Bahria-Town" && m == "UnMetered")
				{
					consume = (siz / totalsize[3]) * Bahria;
				}
				else if (Add1 == "DHA" && m == "UnMetered")
				{
					consume = (float(siz) / totalsize[4]) * DH;
					
				}
				try {
					
					SqlConnection^ conn7 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
					conn7->Open();
					SqlCommand^ cmd7 = gcnew SqlCommand("UPDATE Generate SET Consumption = @new WHERE Username=@nam AND Metered_UnMetered <>'Metered'", conn7);
					cmd7->Parameters->AddWithValue("@nam", na);
					cmd7->Parameters->AddWithValue("@new", consume);
					
					cmd7->ExecuteNonQuery();
				}
				catch (SqlException^ ex)
				{
					ex->Message;
				}
				


			}
		}
		catch (SqlException^ ex)
		{
			ex->Message;
		}
		try {
			SqlConnection^ conn20 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn20->Open();
			SqlCommand^ cmd10 = gcnew SqlCommand("INSERT INTO Defaulters SELECT * FROM UnPaid WHERE NumberOfBills > 3", conn20);
			cmd10->ExecuteNonQuery();
			
			
		}
		catch (SqlException^ ex)
		{
			ex->Message;
		}

	}
	};
}
