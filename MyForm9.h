#pragma once
#include <random>
namespace Project20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		String^ name = "";
		String^ Add = "";
		String^ number="";
		int id1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	public:
		String^ Meter = "";
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(0, 113);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(727, 277);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm9::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(235, 594);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(99, 411);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(497, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter ID of Request to Approve Connection";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm9::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(315, 494);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(82, 53);
			this->textBox1->TabIndex = 32;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm9::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(198, 468);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 38);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Approve Request\?";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->radioButton2->Location = System::Drawing::Point(348, 527);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 33);
			this->radioButton2->TabIndex = 59;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"No";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->radioButton1->Location = System::Drawing::Point(264, 527);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 33);
			this->radioButton1->TabIndex = 58;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Yes";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(236, 594);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 71);
			this->button2->TabIndex = 60;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(376, 594);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 71);
			this->button3->TabIndex = 61;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm9::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(376, 594);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 71);
			this->button4->TabIndex = 62;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm9::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(189, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(343, 39);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Connection Requests";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(167, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(365, 29);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Enter Meter_ID to Assign Meter";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.2F));
			this->button5->Location = System::Drawing::Point(236, 594);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 71);
			this->button5->TabIndex = 65;
			this->button5->Text = L"Assign";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm9::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(376, 594);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 71);
			this->button6->TabIndex = 66;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm9::button6_Click);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(726, 871);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
		label2->Hide();
		label3->Hide();
		radioButton1->Hide();
		radioButton2->Hide();
		button2->Hide();
		button3->Hide();
		button5->Hide();
		button6->Hide();
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Requests";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];

		}
		catch (SqlException^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn->Open();
			SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Name, Address, Metered_UnMetered FROM Requests  WHERE Id=@Id", conn);
			String^ ID = textBox1->Text;
			id1 = Convert::ToInt32(ID);
			cmd1->Parameters->AddWithValue("@id", ID);
			SqlDataReader^ reader3 = cmd1->ExecuteReader();
			if (reader3->Read())
			{
				name = reader3->GetString(0);
				Add = reader3->GetString(1);
				Meter = reader3->GetString(2);
				label2->Show();
				button2->Show();
				radioButton1->Show();
				radioButton2->Show();
				button3->Show();
				button4->Hide();
				textBox1->ReadOnly = true;
				button1->Hide();
				label1->Hide();
				textBox1->Hide();
			}
			else { MessageBox::Show("Enter Valid ID", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
			reader3->Close();

		}
		catch (SqlException^ ex) { ex->Message; }
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> distribution(1000000, 9999999);
		int randomNumber = distribution(gen);
		number = randomNumber.ToString();
		if (radioButton1->Checked)
		{
			if (Meter == "UnMetered")
			{
				if (MessageBox::Show("Approve Connection?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					
					SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
					conn->Open();
					SqlCommand^ cmd1 = gcnew SqlCommand("UPDATE Customer SET Connection = @NewValue1, NOOC = @NewValue2, Metered_UnMetered = @NewValue3, Address = @NewValue4,Reference = @NewValue5 WHERE Username = @NAME", conn);
					cmd1->Parameters->AddWithValue("@NAME", name);
					cmd1->Parameters->AddWithValue("@NewValue4", Add);
					cmd1->Parameters->AddWithValue("@NewValue1", "YES");
					cmd1->Parameters->AddWithValue("@NewValue2", "1");
					cmd1->Parameters->AddWithValue("@NewValue5", randomNumber);
					if (Meter == "Metered") { cmd1->Parameters->AddWithValue("@NewValue3", "Metered"); }
					else if (Meter == "UnMetered") { cmd1->Parameters->AddWithValue("@NewValue3", "UnMetered"); }
					cmd1->ExecuteNonQuery();
					MessageBox::Show("Connection Of Customer " + name + " Has been Approved", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
					String^ Query = "DELETE FROM Requests  WHERE Id=@id";
					SqlCommand^ command123 = gcnew SqlCommand(Query, conn);
					command123->Parameters->AddWithValue("@id", textBox1->Text);
					command123->ExecuteNonQuery();
				}
			}
			else
			{
				label2->Hide();
				radioButton1->Hide();
				radioButton2->Hide();
				button2->Hide();
				button3->Hide();
				textBox1->Text = "";
				textBox1->Show();
				textBox1->ReadOnly = false;
				label3->Show();
				button5->Show();
				button6->Show();
		
				try {
				
					String^ sqlconnection123 = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
					SqlConnection  sqlconn123(sqlconnection123);
					sqlconn123.Open();
				
					String^ SqlQuery123 = "SELECT * FROM Meters";
					
					SqlCommand^ cmd123 = gcnew SqlCommand(SqlQuery123, % sqlconn123);

				
					SqlDataAdapter^ adapter123 = gcnew SqlDataAdapter(cmd123);
					DataSet^ dataset123 = gcnew DataSet();
					adapter123->Fill(dataset123, SqlQuery123);

					dataGridView1->DataSource = dataset123->Tables[SqlQuery123];

				}
				catch (SqlException^ ex)
				{
					MessageBox::Show(ex->Message);
				}
			}
			
		}

		else if (radioButton2->Checked)
		{
			if (MessageBox::Show("Are you Sure you want to Reject?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn->Open();
				String^ Query = "DELETE FROM Requests  WHERE Id=@id";
				SqlCommand^ command123 = gcnew SqlCommand(Query, conn);
				command123->Parameters->AddWithValue("@id", textBox1->Text);
				command123->ExecuteNonQuery();
				MessageBox::Show("Request Rejected", "Decline", MessageBoxButtons::OK, MessageBoxIcon::None);
			}
		}
		if (Meter!="Metered") {
			try {
				String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
				SqlConnection  sqlconn(sqlconnection);
				sqlconn.Open();
				String^ SqlQuery = "SELECT * FROM Requests";
				SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
				DataSet^ dataset = gcnew DataSet();
				adapter->Fill(dataset, SqlQuery);

				dataGridView1->DataSource = dataset->Tables[SqlQuery];

			}
			catch (SqlException^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Hide();
		radioButton1->Hide();
		radioButton2->Hide();
		button2->Hide();
		button3->Hide();
		button1->Show();
		button4->Show();
		textBox1->Show();
		label1->Show();
		textBox1->ReadOnly = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int id = Convert::ToInt32(textBox1->Text);
		if (MessageBox::Show("Assign Meter: "+id +" To Customer: " + name+"?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection^ sqlconn = gcnew SqlConnection(sqlconnection);

			try {
				sqlconn->Open();

				String^ SqlQuery = "SELECT * FROM Meters WHERE Meter_ID = @ID AND CurrentReferenceID = @I";
				SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, sqlconn);

				cmd->Parameters->AddWithValue("@ID", id);
				cmd->Parameters->AddWithValue("@I", 0);

				SqlDataReader^ RD = cmd->ExecuteReader();

				if (RD->Read())
				{
					SqlConnection^ conn454 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
					conn454->Open();
					SqlCommand^ cmd154 = gcnew SqlCommand("UPDATE Customer SET Connection = @NewValue1, NOOC = @NewValue2, Metered_UnMetered = @NewValue3, Address = @NewValue4,Reference = @NewValue5 WHERE Username = @NAME", conn454);
					cmd154->Parameters->AddWithValue("@NAME", name);
					cmd154->Parameters->AddWithValue("@NewValue4", Add);
					cmd154->Parameters->AddWithValue("@NewValue1", "YES");
					cmd154->Parameters->AddWithValue("@NewValue2", "1");
					cmd154->Parameters->AddWithValue("@NewValue5", number);
					cmd154->Parameters->AddWithValue("@NewValue3", "Metered");

					cmd154->ExecuteNonQuery();
					MessageBox::Show("Connection Of Customer " + name + " Has been Approved", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
					String^ Query = "DELETE FROM Requests  WHERE Id=@id";
					SqlCommand^ command123 = gcnew SqlCommand(Query, conn454);
					command123->Parameters->AddWithValue("@id", id1);
					command123->ExecuteNonQuery();

					RD->Close();
					cmd->Parameters->Clear();
					cmd->CommandText = "UPDATE Meters SET Meter_Type=@Old, CurrentReferenceID=@R_ID WHERE Meter_ID=@IDD ";
					cmd->Parameters->AddWithValue("@IDD", id);
					cmd->Parameters->AddWithValue("@Old", "Old"); // Change "NewValue" to the actual value you want to set
					cmd->Parameters->AddWithValue("@R_ID", number);
					cmd->ExecuteNonQuery();
					MessageBox::Show("Update Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					MyForm9^ F99 = gcnew MyForm9();
					F99->Show();
					this->Close();
				}
				else
				{
					MessageBox::Show("The Entered ID is In-Valid OR Meter is Already Assigned", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				sqlconn->Close();
			}

		
		}

	

	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Show();
	radioButton1->Show();
	radioButton2->Show();
	button2->Show();
	button3->Show();
	textBox1->Text = "";
	textBox1->Hide();
	textBox1->ReadOnly = false;
	label3->Hide();
	button5->Hide();
	button6->Hide();
	String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
	SqlConnection  sqlconn(sqlconnection);
	sqlconn.Open();
	String^ SqlQuery = "SELECT * FROM Requests";
	SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
	DataSet^ dataset = gcnew DataSet();
	adapter->Fill(dataset, SqlQuery);

	dataGridView1->DataSource = dataset->Tables[SqlQuery];
}
};
}
