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
	/// Summary for MyForm17
	/// </summary>
	public ref class MyForm17 : public System::Windows::Forms::Form
	{
	public:
		MyForm17(void)
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
		~MyForm17()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm17::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 241);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1359, 193);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm17::dataGridView1_CellContentClick);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button3->Location = System::Drawing::Point(605, 760);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 66);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm17::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(-1, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 36);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Paid Bills";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->Location = System::Drawing::Point(-1, 454);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 36);
			this->label2->TabIndex = 54;
			this->label2->Text = L"UnPaid Bills";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView2->Location = System::Drawing::Point(3, 494);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1359, 204);
			this->dataGridView2->TabIndex = 55;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(917, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 25);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Estimated Amount:   ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(915, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 25);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Amount Collected:    ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(917, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 25);
			this->label5->TabIndex = 58;
			this->label5->Text = L"Profit:                         ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(524, 24);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 33);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Revenue Report";
			// 
			// MyForm17
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1360, 1051);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm17";
			this->Text = L"MyForm17";
			this->Load += gcnew System::EventHandler(this, &MyForm17::MyForm17_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm17_Load(System::Object^ sender, System::EventArgs^ e) {
		int total1 = 0;
		int total2 = 0;
		label4->Hide();
		label5->Hide();
		label3->Hide();
		try {
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT Username, Address, Number, CNIC,Reference, Metered_UnMetered, Consumption,Total, Issued, Payment, PlotSize FROM Paid ";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);
		

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView1->DataSource = dataset->Tables[SqlQuery];
			String^ SqlQuery12 = "SELECT Total  From Paid ";
			SqlCommand^ cmd1 = gcnew SqlCommand(SqlQuery12, % sqlconn);
			SqlDataReader^ rd = cmd1->ExecuteReader();
			while (rd->Read())
			{
				int t = rd->GetInt32(0);
				total1 = total1 + t;
			}
			label4->Text = label4->Text + total1.ToString()+" RS";
		}
		catch (SqlException^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		try 
		{
			String^ sqlconnection = "Data Source=localhost\\sqlexpress;Initial Catalog=ADMIN;Integrated Security=True";
			SqlConnection  sqlconn(sqlconnection);
			sqlconn.Open();
			String^ SqlQuery = "SELECT Username, Address, Number, CNIC,Reference, Metered_UnMetered, Consumption,Total, Issued, DueDate, PlotSize,NumberOfBills FROM UnPaid ";
			SqlCommand^ cmd = gcnew SqlCommand(SqlQuery, % sqlconn);


			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataSet^ dataset = gcnew DataSet();
			adapter->Fill(dataset, SqlQuery);

			dataGridView2->DataSource = dataset->Tables[SqlQuery];
			String^ SqlQuery12 = "SELECT Total  From UnPaid ";
			SqlCommand^ cmd1 = gcnew SqlCommand(SqlQuery12, % sqlconn);
			SqlDataReader^ rd = cmd1->ExecuteReader();
			while (rd->Read())
			{
				int t = rd->GetInt32(0);
				total2 = total2 + t;
			}
			label3->Text = label3->Text + total2.ToString() + " RS";

		}
		catch (SqlException^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		int total = total1 - total2;
		if (total > 0)
			label5->Text = label5->Text + total.ToString() + " RS";
		else
			label5->Text = "Loss:    " + total.ToString() + " RS";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
 		this->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
