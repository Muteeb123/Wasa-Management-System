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
	/// Summary for MyForm19
	/// </summary>
	
	public ref class MyForm19 : public System::Windows::Forms::Form
	{
	public:
		MyForm19(void)
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
		~MyForm19()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm19::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(-2, 124);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1002, 306);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm19::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(453, 635);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 71);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm19::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(43, 684);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 74;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(320, 27);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(314, 33);
			this->label5->TabIndex = 75;
			this->label5->Text = L"Edit Area Consumption";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(164, 482);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(644, 78);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Edit  Consumption by  Clicking  the value \r\n         in TotalConsumption Column";
			// 
			// MyForm19
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(998, 917);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm19";
			this->Text = L"MyForm19";
			this->Load += gcnew System::EventHandler(this, &MyForm19::MyForm19_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm19_Load(System::Object^ sender, System::EventArgs^ e) {
		dateTimePicker1->Hide();
		
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Areas WHERE Customers <> 0";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];
			SqlDataReader^ Re = cmd->ExecuteReader();
			if (!Re->Read())
			{
				MessageBox::Show("No Customer to Edit Area Consumption", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
				Re->Close();
			}


		}
		catch (SqlException^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		this->Hide();
	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sqlconnection1431 = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
	SqlConnection  sqlconn1431(sqlconnection1431);
	sqlconn1431.Open();
	String^ SqlQuery1431 = "SELECT * FROM Areas WHERE Customers <> 0";
	SqlCommand^ cmd1431 = gcnew SqlCommand(SqlQuery1431, % sqlconn1431);


	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd1431);
	DataSet^ dataset = gcnew DataSet();
	adapter->Fill(dataset, SqlQuery1431);

	dataGridView1->DataSource = dataset->Tables[SqlQuery1431];
	if (MessageBox::Show("You Cannot Edit Area Comsumption of this Month After Bill Generation.\nAre You Sure?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Close();
	}

}
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, DataGridViewCellEventArgs^ e) {
		// This event is triggered when the user finishes editing a cell
		// You can access the edited value using the following:
		Object^ editedValue = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ columnName = (dataGridView1->Columns[e->ColumnIndex]->DataPropertyName);
		int primaryKey = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value);
		if (columnName == "TotalConsumption")
		{
			
			String^ updateQuery = "UPDATE Areas SET " + columnName + " = @value WHERE ID = @primaryKey";
			SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, % sqlconn);
			updateCommand->Parameters->AddWithValue("@value", editedValue);
			updateCommand->Parameters->AddWithValue("@primaryKey", primaryKey);
			if (MessageBox::Show("Edit Value: "+ editedValue, "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				updateCommand->ExecuteNonQuery();
				dataGridView1->Refresh();
				MessageBox::Show("Value Updated ", "Confirm", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			
		}
		else if (columnName=="Id"){}
		else
		{
			MessageBox::Show("Cannot Change  " + columnName, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			dataGridView1->Refresh();
		}
	}

};
}
