#pragma once

namespace Course4 {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class MyForm2 : public Form
    {
    public:
        MyForm2()
        {
            InitializeComponent();
        }

    protected:
        ~MyForm2()
        {
            if (components) delete components;
        }

	private:
		DataGridView^ dataGridView;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Panel^ panel1;
		   System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(17, 73);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(959, 364);
            this->dataGridView1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 8);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(213, 29);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Mutual settlements";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(522, 17);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(111, 36);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Choice";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
                L"All year", L"January", L"February", L"March",
                    L"April", L"May", L"June", L"July", L"August", L"September", L"October", L"November", L"December"
            });
            this->comboBox1->Location = System::Drawing::Point(664, 17);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(141, 37);
            this->comboBox1->TabIndex = 3;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"2019", L"2020", L"2021", L"2022", L"2023", L"2024",
                    L"2025"
            });
            this->comboBox2->Location = System::Drawing::Point(823, 17);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(141, 37);
            this->comboBox2->TabIndex = 4;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Control;
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(17, 11);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(959, 50);
            this->panel1->TabIndex = 5;
            // 
            // MyForm2
            // 
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(993, 454);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel1);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Name = L"MyForm2";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Columns->Clear();
		this->dataGridView1->Rows->Clear();

		this->dataGridView1->ColumnCount = 8;
		this->dataGridView1->Columns[0]->Name = "Month";
		this->dataGridView1->Columns[1]->Name = "Tariff";
		this->dataGridView1->Columns[2]->Name = "Tariff price cubic meter UAH";
		this->dataGridView1->Columns[3]->Name = "Volume for accruals by cubic meter";
		this->dataGridView1->Columns[4]->Name = "";
		this->dataGridView1->Columns[5]->Name = "";
		this->dataGridView1->Columns[6]->Name = "";
		this->dataGridView1->Columns[7]->Name = "";
	}
};
}