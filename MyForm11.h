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
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(1, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1226, 503);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm11::dataGridView1_CellEndEdit);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(521, 742);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 71);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm11::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(496, 26);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(284, 29);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Edit Water Consumptions";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(79, 33);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 51;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(272, 623);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(650, 78);
			this->label4->TabIndex = 54;
			this->label4->Text = L"   Edit Water Consumption by  Clicking      \r\n     the value in Consumption Colum"
				L"n";
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1226, 973);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
		
		
		
		
		
		
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Generate WHERE Metered_UnMetered <> 'UnMetered'";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);
			

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];
			SqlDataReader^ Re = cmd->ExecuteReader();
			if (!Re->Read())
			{
				MessageBox::Show("No Customer to Edit Water Consumption", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
				Re->Close();
			}

		}
		catch (SqlException^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	
	
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		Object^ editedValue = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
		String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
		SqlConnection  sqlconn(sqlconnection);
		sqlconn.Open();
		String^ columnName = (dataGridView1->Columns[e->ColumnIndex]->DataPropertyName);
		int primaryKey = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value);
		if (columnName == "Consumption")
		{

			String^ updateQuery = "UPDATE Generate SET " + columnName + " = @value WHERE ID = @primaryKey";
			SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, % sqlconn);
			updateCommand->Parameters->AddWithValue("@value", editedValue);
			updateCommand->Parameters->AddWithValue("@primaryKey", primaryKey);
			if (MessageBox::Show("Edit Value: " + editedValue, "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				updateCommand->ExecuteNonQuery();
				dataGridView1->Refresh();
				
				String^ Getref = "SELECT * FROM Generate WHERE Id = @ID2";
				SqlCommand^ comm = gcnew SqlCommand(Getref, % sqlconn);
				comm->Parameters->AddWithValue("@ID2", primaryKey);
				SqlDataReader^ re = comm->ExecuteReader();
				if (re->Read())
				{
					
					int id = re->GetInt32(0);
					String^ refe = re->GetString(5);
				
					re->Close();
					String^ GetR = "SELECT * FROM Meters WHERE CurrentReferenceID = @ref";
					SqlCommand^ comm1 = gcnew SqlCommand(GetR, % sqlconn);
					comm1->Parameters->AddWithValue("@ref", refe);
					SqlDataReader^ rein = comm1->ExecuteReader();
					int reading=0;
					int due=0;
					
					if (rein->Read())
					{
						
						reading = rein->GetInt32(2);
						due = rein->GetInt32(3);
						
						rein->Close();
					}
				
					String^ edited = editedValue->ToString();
					int r = Convert::ToInt32(edited);
					reading = reading + r;
					if (r <= 1000) { r = r * 5; }
					else if (r > 1000 && r <= 2000) { int temp = r - 1000; r = 1000 * 5 + temp * 10; }
					else if (r > 2000 && r <= 3000) {int temp = r - 2000; r = 1000 * 5 + 1000 * 10+temp*20;}
					else if (r > 3000) { int temp = r - 3000; r = 1000 * 5 + 1000 * 10 + 1000 * 20+temp*50; }
					due = due + r;
					String^ Update1 = "UPDATE Meters SET Meter_Reading=@new,Due_Payment=@Pay  WHERE CurrentReferenceID = @ref";
					SqlCommand^ comm2 = gcnew SqlCommand(Update1, % sqlconn);
					comm2->Parameters->AddWithValue("@new", reading);
					comm2->Parameters->AddWithValue("@ref", refe);
					comm2->Parameters->AddWithValue("@Pay", due);
					comm2->ExecuteNonQuery();
					
				}
			
			}

		}
		else if (columnName == "Id") {}
		else
		{
			MessageBox::Show("Cannot Change  " + columnName, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			dataGridView1->Refresh();
		}
		this->Refresh();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
	SqlConnection  sqlconn(sqlconnection);
	sqlconn.Open();
	String^ SqlQuery = "SELECT * FROM Generate WHERE Metered_UnMetered <> 'UnMetered'";
	SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
	DataSet^ dataset = gcnew DataSet();
	adapter->Fill(dataset, SqlQuery);

	dataGridView1->DataSource = dataset->Tables[SqlQuery];
	
	if (MessageBox::Show("You Cannot Edit Water Comsumption of this Month After Bill Generation.\nAre You Sure?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Close();
	}
}
};
}
