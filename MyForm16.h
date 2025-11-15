#pragma once

namespace Project20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm16
	/// </summary>
	public ref class MyForm16 : public System::Windows::Forms::Form
	{
	public:
		String^ name = "";
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	public:
		int cons = 0;
		MyForm16(void)
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
		~MyForm16()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm16::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(594, 724);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 71);
			this->button4->TabIndex = 71;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm16::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(380, 630);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 71);
			this->button3->TabIndex = 70;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm16::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(249, 630);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 71);
			this->button2->TabIndex = 69;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm16::button2_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.2F));
			this->radioButton2->Location = System::Drawing::Point(369, 585);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(107, 34);
			this->radioButton2->TabIndex = 68;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Reject";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.2F));
			this->radioButton1->Location = System::Drawing::Point(249, 585);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(112, 34);
			this->radioButton1->TabIndex = 67;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Accept";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(318, 534);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 45);
			this->textBox1->TabIndex = 65;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(139, 461);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 29);
			this->label1->TabIndex = 64;
			this->label1->Text = L"Enter ID of the Request to Accept/Reject";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(437, 523);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 71);
			this->button1->TabIndex = 63;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm16::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(-1, 155);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(727, 277);
			this->dataGridView1->TabIndex = 72;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(261, 31);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 72);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Bill Correction \r\n    Requests";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(260, 514);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 38);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Correct Bill\?";
			// 
			// MyForm16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(726, 909);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm16";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"MyForm16";
			this->Load += gcnew System::EventHandler(this, &MyForm16::MyForm16_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm16_Load(System::Object^ sender, System::EventArgs^ e) {
		label2->Hide();
		button3->Hide();
		button4->Show();
		button2->Hide();
		radioButton1->Hide();
		radioButton2->Hide();
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Correction ";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];
			SqlDataReader^ Re = cmd->ExecuteReader();
			if (!Re->Read())
			{
				MessageBox::Show("There is no Bill Correction Request", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
				Re->Close();
			}

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
			SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Username, Consumption FROM  Correction WHERE Id=@Id", conn);
			String^ ID = textBox1->Text;

			cmd1->Parameters->AddWithValue("@id", ID);
			SqlDataReader^ reader3 = cmd1->ExecuteReader();
			if (reader3->Read())
			{
				name = reader3->GetString(0);
				cons = reader3->GetInt32(1);
				label2->Show();
				button2->Show();
				radioButton1->Show();
				radioButton2->Show();
				button3->Show();
				textBox1->Hide();
				button1->Hide();
				label1->Hide();
				button4->Hide();
			}
			else { MessageBox::Show("Enter Valid ID", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
			reader3->Close();

		}
		catch (SqlException^ ex) { ex->Message; }
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			try {
				int Total = 0;
				if (cons < 1000) { Total = cons * 5; }
				else if (cons > 1000 && cons <= 2000) { int temp = cons - 1000; Total = 1000 * 5 + temp * 10; }
				else if (cons>2000&&cons<=3000){ int temp = cons - 2000; Total = 1000 * 5 + temp * 20+1000*10; }
				else if (cons>3000){ int temp = cons - 3000; Total = 1000 * 5 + 1000 * 20 + 1000 * 10+temp*50; }
				SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn->Open();
				SqlCommand^ cmd134 = gcnew SqlCommand("UPDATE UnPaid SET Total=@total, Consumption=@water WHERE Username=@name", conn);
				cmd134->Parameters->AddWithValue("@name", name);
				cmd134->Parameters->AddWithValue("@total", Total);
				cmd134->Parameters->AddWithValue("@water", cons);
				cmd134->ExecuteNonQuery();
				try {
					SqlConnection^ conn12 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
					conn12->Open();
					SqlCommand^ cmd11 = gcnew SqlCommand("DELETE FROM Correction WHERE Username=@Id", conn12);

					cmd11->Parameters->AddWithValue("@id", name);
					if (MessageBox::Show("Update Bill ?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						cmd11->ExecuteNonQuery();
					}
					
				}
				catch (SqlException^ Ex) { Ex->Message; }
				MessageBox::Show("Bill Updated", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (SqlException^ Ex) { Ex->Message; }
		}
		else if (radioButton2->Checked)
		{
			try {
				SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn->Open();
				SqlCommand^ cmd11 = gcnew SqlCommand("DELETE FROM  Correction WHERE Username=@Id", conn);
				

				cmd11->Parameters->AddWithValue("@id", name);
				cmd11->ExecuteNonQuery();
				MessageBox::Show("Request Rejected", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			}
			catch (SqlException^ Ex) { Ex->Message; }
		}
		else
		{
			MessageBox::Show("Select Yes or No", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Correction ";
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

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Hide();
		button2->Hide();
		radioButton1->Hide();
		radioButton2->Hide();
		button3->Hide();
		button4->Show();
	}
};
}
