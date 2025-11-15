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
	/// Summary for MyForm22
	/// </summary>
	public ref class MyForm22 : public System::Windows::Forms::Form
	{
	public:
		String^ name = "";
		String^ ref = "";
		MyForm22(void)
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
		~MyForm22()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm22::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(165, 55);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(418, 36);
			this->label5->TabIndex = 84;
			this->label5->Text = L"Remove Connection Requests";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(2, 133);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(727, 277);
			this->dataGridView1->TabIndex = 83;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(597, 702);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 71);
			this->button4->TabIndex = 82;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm22::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(383, 608);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 71);
			this->button3->TabIndex = 81;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm22::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(252, 608);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 71);
			this->button2->TabIndex = 80;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm22::button2_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.2F));
			this->radioButton2->Location = System::Drawing::Point(372, 563);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(212, 34);
			this->radioButton2->TabIndex = 79;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Do not Remove";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.2F));
			this->radioButton1->Location = System::Drawing::Point(216, 563);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(130, 34);
			this->radioButton1->TabIndex = 78;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Remove";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(228, 498);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(331, 38);
			this->label2->TabIndex = 77;
			this->label2->Text = L"Remove Connection\?";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(320, 498);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 45);
			this->textBox1->TabIndex = 76;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(87, 435);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 29);
			this->label1->TabIndex = 75;
			this->label1->Text = L"Enter ID of the Request to Remove Connection";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(308, 575);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 71);
			this->button1->TabIndex = 74;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm22::button1_Click);
			// 
			// MyForm22
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(730, 913);
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
			this->Name = L"MyForm22";
			this->Text = L"MyForm22";
			this->Load += gcnew System::EventHandler(this, &MyForm22::MyForm22_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm22_Load(System::Object^ sender, System::EventArgs^ e) {
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
			String^ SqlQuery = "SELECT * FROM Remove ";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];
			SqlDataReader^ Re = cmd->ExecuteReader();
			if (!Re->Read())
			{
				MessageBox::Show("There is no Connection Removal Request", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
		SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Name, ReferenceID FROM  Remove WHERE Id=@Id", conn);
		String^ ID = textBox1->Text;

		cmd1->Parameters->AddWithValue("@id", ID);
		SqlDataReader^ reader3 = cmd1->ExecuteReader();
		if (reader3->Read())
		{
			name = reader3->GetString(0);
			 ref = reader3->GetString(1);

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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Hide();
	button2->Hide();
	radioButton1->Hide();
	radioButton2->Hide();
	button3->Hide();
	button4->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		bool yes = false;

		if (MessageBox::Show("Remove Connection?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				
				
				try {
					SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
					conn->Open();
					SqlCommand^ cmd134 = gcnew SqlCommand("UPDATE Customer SET Connection=@C, NOOC=@N, Metered_UnMetered=@M, Reference=@R WHERE Username=@name", conn);
					bool yes = false;
					
						cmd134->Parameters->AddWithValue("@name", name);
						cmd134->Parameters->AddWithValue("@C", "NO");
						cmd134->Parameters->AddWithValue("@N", 0);
						cmd134->Parameters->AddWithValue("@M", "NO");
						cmd134->Parameters->AddWithValue("@R", "0");
						SqlCommand^ coo = gcnew SqlCommand("SELECT * FROM UnPaid WHERE Username=@name", conn);
						coo->Parameters->AddWithValue("@name", name);
						SqlDataReader^ ce = coo->ExecuteReader();
						if (ce->Read())
						{
							ce->Close();
								if (MessageBox::Show("\tCustomer has not Paid the Bill.\n\tRemove Connection Anyway?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
									cmd134->ExecuteNonQuery();
									yes = true;
									SqlConnection^ conn12 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
									conn12->Open();
									SqlCommand^ cmd11 = gcnew SqlCommand("DELETE FROM Remove WHERE Name=@Id", conn12);

									cmd11->Parameters->AddWithValue("@id", name);
									if (cmd11->ExecuteNonQuery()) { MessageBox::Show("Connection Removed", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
								}
							
						}
						else { cmd134->ExecuteNonQuery(); yes = true;
						SqlConnection^ conn12 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
						conn12->Open();
						SqlCommand^ cmd11 = gcnew SqlCommand("DELETE FROM Remove WHERE Name=@Id", conn12);

						cmd11->Parameters->AddWithValue("@id", name);
						if (cmd11->ExecuteNonQuery()) { MessageBox::Show("Connection Removed", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
						}
						
						
						if (yes==true)
						{
							SqlCommand^ cmm = gcnew SqlCommand("UPDATE Meters SET CurrentReferenceID=@RE WHERE CurrentReferenceID=@RF", conn);
							cmm->Parameters->AddWithValue("@RF", ref);
							cmm->Parameters->AddWithValue("@RE", "0");
							cmm->ExecuteNonQuery();

							

					}

					
				}
				catch (SqlException^ ex)
				{
					ex->Message;
				}
				try {
					
					if (yes==true)
					{
						
					}
					

				}
				catch (SqlException^ Ex) { Ex->Message; }
				
			}
			catch (SqlException^ Ex) { Ex->Message; }
		}
	
	}
	else if (radioButton2->Checked)
	{
		if (MessageBox::Show("Reject Request?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			try {
				SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn->Open();
				SqlCommand^ cmd11 = gcnew SqlCommand("DELETE FROM  Remove WHERE Name=@Id", conn);


				cmd11->Parameters->AddWithValue("@id", name);
				cmd11->ExecuteNonQuery();
				MessageBox::Show("Request Rejected", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			catch (SqlException^ Ex) { Ex->Message; }
		}

	}
	else
	{
		MessageBox::Show("Select Remove OR Do Not Remove", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	try {
		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ SqlQuery = "SELECT * FROM Remove ";
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
};
}
