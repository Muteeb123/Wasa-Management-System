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
	/// Summary for MyForm20
	/// </summary>
	public ref class MyForm20 : public System::Windows::Forms::Form
	{
	public:
		MyForm20(void)
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
		~MyForm20()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm20::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(0, 114);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1359, 440);
			this->dataGridView1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button3->Location = System::Drawing::Point(1135, 759);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 55);
			this->button3->TabIndex = 53;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm20::button3_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(606, 611);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 86);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Remove Defaulters\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm20::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(514, 31);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 44);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Defaulters";
			// 
			// MyForm20
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1360, 948);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm20";
			this->Text = L"MyForm20";
			this->Load += gcnew System::EventHandler(this, &MyForm20::MyForm20_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyForm20_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ SqlQuery = "SELECT * FROM Defaulters ";
		SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
		DataSet^ dataset = gcnew DataSet();
		adapter->Fill(dataset, SqlQuery);

		dataGridView1->DataSource = dataset->Tables[SqlQuery];
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Remove Defaulters?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn->Open();
			SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Username,Reference FROM Defaulters WHERE NumberOfBills>2", conn);
			
			SqlDataReader^ reader = cmd1->ExecuteReader();
			int c = 0;
			while (reader->Read())
			{
				SqlConnection^ conn1 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn1->Open();
				String^ name = reader->GetString(0);
				String^ Ref1 = reader->GetString(1);
				SqlCommand^ cmd2 = gcnew SqlCommand("UPDATE Customer SET Connection = @NewValue1, NOOC = @NewValue2, Metered_UnMetered = @NewValue3,Reference = @NewValue5 WHERE Username = @NAME", conn1);
				c++;
				cmd2->Parameters->AddWithValue("@NAME", name);
				cmd2->Parameters->AddWithValue("@NewValue3", "NO");
				cmd2->Parameters->AddWithValue("@NewValue1", "NO");
				cmd2->Parameters->AddWithValue("@NewValue2", "0");
				cmd2->Parameters->AddWithValue("@NewValue5", "0");
				cmd2->ExecuteNonQuery();
				SqlCommand^ cmd25 = gcnew SqlCommand("UPDATE Meters SET CurrentReferenceID = @New WHERE CurrentReferenceID=@ID", conn1);
				cmd25->Parameters->AddWithValue("@New", 0);
				cmd25->Parameters->AddWithValue("@ID", Ref1);
				cmd25->ExecuteNonQuery();
				SqlCommand^ cmd23 = gcnew SqlCommand("DELETE FROM Generate WHERE Username = @NAME", conn1);
				cmd23->Parameters->AddWithValue("NAME", name);
				cmd23->ExecuteNonQuery();
				MessageBox::Show("Connection of User " + name + " has removed", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			SqlConnection^ conn4 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
			conn4->Open();
			SqlCommand^ cmd14 = gcnew SqlCommand("DELETE  FROM Defaulters WHERE NumberOfBills>2", conn4);
			if (cmd14->ExecuteNonQuery()) {
				MessageBox::Show("All the Defulters Has Been Removed", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (c == 0) { MessageBox::Show("No Defaulter at the Moment", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
		}
	}
};
}
