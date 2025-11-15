#pragma once
#include "MyForm11.h"
namespace Project20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dateTimePicker1->MinDate = DateTime::Now;

			// Set the maximum date to 15 days in the future
			dateTimePicker1->MaxDate = DateTime::Now.AddDays(15);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

	private: System::Windows::Forms::Button^ button5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm12::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(-6, 178);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1358, 357);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(372, 598);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Select DueDate";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::SystemColors::Control;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::ActiveCaptionText;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->dateTimePicker1->Location = System::Drawing::Point(592, 598);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(261, 32);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(465, 648);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 75);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Generate Bills";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm12::button3_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Enabled = false;
			this->dateTimePicker2->Location = System::Drawing::Point(73, 44);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(925, 726);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(151, 71);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm12::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(400, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(231, 39);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Generate Bills";
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1123, 936);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm12";
			this->Text = L"MyForm12";
			this->Load += gcnew System::EventHandler(this, &MyForm12::MyForm12_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm12_Load(System::Object^ sender, System::EventArgs^ e) {
		dateTimePicker1->Hide();
	
		
		
		
		label1->Show();
		dateTimePicker1->Show();
		button3->Show();
		
		dateTimePicker2->Hide();
		DateTime minDate = DateTime::Now.AddDays(1);
		DateTime maxDate = DateTime::Now.AddDays(15);
		dateTimePicker1->MinDate = minDate;
		dateTimePicker1->MaxDate = maxDate;
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT * FROM Generate";
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
		MyForm11^ F11 = gcnew MyForm11();
		F11->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		bool generate = false;
		if (MessageBox::Show("Generate Bills?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ name;
			String^ Add;
			String^ Numb;
			String^ CNNN;
			String^ Meter;
			String^ Ref;
			int Plot;
			int wat;
			int total;
			int temp234;
			int t = 0;
			
			try {
				SqlConnection^ conn = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn->Open();
				SqlCommand^ cmd1 = gcnew SqlCommand("SELECT Username,Address, Number, CNIC, Metered_UnMetered, Reference, Consumption, PlotSize FROM Generate ", conn);
				SqlDataReader^ reader3 = cmd1->ExecuteReader();

				SqlConnection^ conn1 = gcnew SqlConnection("Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True");
				conn1->Open();
				String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
				SqlConnection  sqlconn(sqlconnection);
				sqlconn.Open();
				String^ SqlQuery = "SELECT * FROM [Generate] WHERE Consumption=@Username ";
				SqlCommand command(SqlQuery, % sqlconn);
				command.Parameters->AddWithValue("@Username", 0);
				SqlDataReader^ Reader = command.ExecuteReader();
				if (!Reader->Read()) {
					while (reader3->Read())
					{

						name = reader3->GetString(0);
						Add = reader3->GetString(1);
						Numb = reader3->GetString(2);
						CNNN = reader3->GetString(3);
						Meter = reader3->GetString(4);
						Ref = reader3->GetString(5);
						wat = reader3->GetInt32(6);
						Plot = reader3->GetInt32(7);

						if (wat <= 1000)
						{
							total = wat * 5;
						}
						else if (wat > 1000 && wat <= 2000) {
							int temp = wat - 1000;
							total = 1000 * 5 + temp * 10;
						}
						else if (wat > 2000 && wat <= 3000)
						{
							int temp = wat - 2000;
							total = 1000 * 5 + 1000 * 10 + temp * 20;
						}
						else if (wat > 3000)
						{
							int temp = wat - 3000;
							total = 1000 * 5 + 1000 * 10 + 1000 * 20 + temp * 50;
						}


						String^ sqlon = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
						SqlConnection  sqlconn43(sqlon);
						sqlconn43.Open();
						String^ SqlQuery123 = "SELECT Total, DueDate, Consumption, NumberOfBills FROM [Unpaid] WHERE Username=@Username ";
						SqlCommand command56(SqlQuery123, % sqlconn43);
						command56.Parameters->AddWithValue("@Username", name);
						SqlDataReader^ Reader56 = command56.ExecuteReader();
						if (Reader56->Read())
						{
							int wa = Reader56->GetInt32(2);
							int temp = Reader56->GetInt32(0);
							DateTime Dt = Reader56->GetDateTime(1);
							int NO = Reader56->GetInt32(3);
							NO++;
							temp = temp + (5 * (temp / 100));
							total = temp + total;
							wat = wa + wat;
							TimeSpan difference = dateTimePicker2->Value - Dt;
							if (difference.Days >= 15) {
								String^ sql679 = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
								SqlConnection sqlconn4357(sql679);
								sqlconn4357.Open();
								String^ SqlQuery123568 = "UPDATE UnPaid SET Total = @TL, Issued=@ISS, DueDate=@DD, NumberOfBills = @NNO, Consumption=@Wa WHERE Username=@Username";
								SqlCommand command5684(SqlQuery123568, % sqlconn4357);
								command5684.Parameters->AddWithValue("@Username", name);
								command5684.Parameters->AddWithValue("@Address", Add);
								command5684.Parameters->AddWithValue("@TL", total);
								command5684.Parameters->AddWithValue("@ISS", dateTimePicker2->Value);
								command5684.Parameters->AddWithValue("@DD", dateTimePicker1->Value);
								command5684.Parameters->AddWithValue("@NNO", NO);
								command5684.Parameters->AddWithValue("@Wa", wat);
								command5684.ExecuteNonQuery();
								t++;

							}
							continue;
						}


						String^ insertQuery = "INSERT INTO UnPaid (Username, Address, Number, CNIC, Reference, Metered_UnMetered, Total, DueDate, Consumption, Issued, PlotSize) VALUES (@N, @A, @NM, @C, @R, @CN, @T,@D ,@W, @I, @P)";
						SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, conn1);
						insertCmd->Parameters->AddWithValue("@N", name);
						insertCmd->Parameters->AddWithValue("@A", Add);
						insertCmd->Parameters->AddWithValue("@NM", Numb);
						insertCmd->Parameters->AddWithValue("@C", CNNN);
						insertCmd->Parameters->AddWithValue("@R", Ref);
						insertCmd->Parameters->AddWithValue("@CN", Meter);
						insertCmd->Parameters->AddWithValue("@T", total);
						insertCmd->Parameters->AddWithValue("@W", wat);
						insertCmd->Parameters->AddWithValue("@D", dateTimePicker1->Value);
						insertCmd->Parameters->AddWithValue("@I", dateTimePicker2->Value);
						insertCmd->Parameters->AddWithValue("@P", Plot);
						insertCmd->ExecuteNonQuery();
						t++;
						generate = true;
					}
					if (t != 0)
						MessageBox::Show("Bills Generated Successfully", "Info", MessageBoxButtons::OK, MessageBoxIcon::None);
					else
						MessageBox::Show("Bills have been Generated Already", "Info", MessageBoxButtons::OK, MessageBoxIcon::None);
				}
				else {
					
					MessageBox::Show("Water Consumptions are not properly edited", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					
						
				}

			}
			catch (SqlException^ Ex) {
				MessageBox::Show(Ex->Message, " ", MessageBoxButtons::OK, MessageBoxIcon::None);
			}
			if (generate == false)
			{
				try {
					String^ sqlconnection1 = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
					SqlConnection  sqlconn24(sqlconnection1);
					sqlconn24.Open();
					String^ SqlQuery1234 = "UPDATE Generate SET Consumption = @ne ";
					SqlCommand command12345(SqlQuery1234, % sqlconn24);
					
					command12345.Parameters->AddWithValue("@ne", 0);
					command12345.ExecuteNonQuery();
					String^ SqlQuery12345 = "UPDATE Areas SET TotalConsumption = @ne ";
					SqlCommand command123456(SqlQuery12345, % sqlconn24);

					command123456.Parameters->AddWithValue("@ne", 0);
					command123456.ExecuteNonQuery();
					
				}
				catch (SqlException^ Ex) {
					MessageBox::Show(Ex->Message, " ", MessageBoxButtons::OK, MessageBoxIcon::None);
				}
			}

		}
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Hide();
		dateTimePicker1->Hide();
		button3->Hide();
		
		dateTimePicker2->Hide();
		button5->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
