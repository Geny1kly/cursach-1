#include "MyForm1.h"
#include "MyForm2.h"
#pragma once

struct Record {

	char tariff_plan[20];
	float topic_price;
	char discount[20];
	char period_plan[50];
	char name_owner[100];
	int id_account;
	char eic_code[40];
	char adr_oblast[50];
	char adr_city[30];
	char adr_address[50];
	char adr_home[20];
	char subsides[5];
	float overpay;
	char date_overpay[20];
	char status[20];

};
	


namespace Course4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ListBox^ listBox8;
	private: System::Windows::Forms::ListBox^ listBox9;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListBox^ listBox10;
	private: System::Windows::Forms::ListBox^ listBox11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ListBox^ listBox12;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ListBox^ listBox13;
	private: System::Windows::Forms::ListBox^ listBox15;
	private: System::Windows::Forms::ListBox^ listBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		void Filing_ListBoxes_by_Data(Record data[], int h, array<ListBox^>^ listBoxes) {
		
		array<String^>^ rec_data = gcnew array<String^> {

			gcnew System::String(data[h].tariff_plan),
			data[h].topic_price.ToString("F4"),
			gcnew System::String(data[h].discount),
			gcnew System::String(data[h].period_plan),
			gcnew System::String(data[h].status),
			gcnew System::String(data[h].subsides),
			gcnew System::String(data[h].name_owner),
			data[h].id_account.ToString(),
			gcnew System::String(data[h].eic_code),
			gcnew System::String(data[h].adr_oblast),
			gcnew System::String(data[h].adr_city),
			gcnew System::String(data[h].adr_address),
			gcnew System::String(data[h].adr_home),
			data[h].overpay.ToString("F4"),
			gcnew System::String(data[h].date_overpay)
		};

		for (int i = 0; i < 15; i++) listBoxes[i]->Items->Add(rec_data[i]);
	}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->listBox13 = (gcnew System::Windows::Forms::ListBox());
			this->listBox11 = (gcnew System::Windows::Forms::ListBox());
			this->listBox12 = (gcnew System::Windows::Forms::ListBox());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->listBox10 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox15 = (gcnew System::Windows::Forms::ListBox());
			this->listBox14 = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 17);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(273, 587);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menu";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(20, 167);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(226, 44);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Enter indicators";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::RosyBrown;
			this->button6->Location = System::Drawing::Point(20, 524);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(226, 40);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Save and Exit";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(20, 381);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 40);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Natural price";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 454);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 40);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Settings";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"History of used";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Gas", L"Water", L"Energy" });
			this->comboBox1->Location = System::Drawing::Point(106, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(141, 37);
			this->comboBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(226, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"History of pay";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Location = System::Drawing::Point(20, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Deploy";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Type:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->listBox4);
			this->groupBox2->Controls->Add(this->listBox3);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->listBox6);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->listBox5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(304, 139);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(561, 465);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"My conditions";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(24, 332);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(194, 29);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Status of account";
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 29;
			this->listBox4->Location = System::Drawing::Point(247, 259);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(298, 33);
			this->listBox4->TabIndex = 7;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 29;
			this->listBox3->Location = System::Drawing::Point(247, 187);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(298, 33);
			this->listBox3->TabIndex = 6;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(247, 117);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(298, 33);
			this->listBox2->TabIndex = 5;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 29;
			this->listBox6->Location = System::Drawing::Point(247, 409);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(298, 33);
			this->listBox6->TabIndex = 6;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(247, 49);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(298, 33);
			this->listBox1->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 408);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(120, 29);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Subsidies";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 29);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Term for the paln";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Discount";
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 29;
			this->listBox5->Location = System::Drawing::Point(247, 332);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(298, 33);
			this->listBox5->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Price";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Plan of tariff";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->listBox13);
			this->groupBox3->Controls->Add(this->listBox11);
			this->groupBox3->Controls->Add(this->listBox12);
			this->groupBox3->Controls->Add(this->listBox9);
			this->groupBox3->Controls->Add(this->listBox10);
			this->groupBox3->Controls->Add(this->listBox8);
			this->groupBox3->Controls->Add(this->listBox7);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(886, 139);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(632, 465);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"My info";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(39, 409);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(78, 29);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Home";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(39, 360);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(102, 29);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Address";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(39, 311);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 29);
			this->label15->TabIndex = 11;
			this->label15->Text = L"City";
			// 
			// listBox13
			// 
			this->listBox13->FormattingEnabled = true;
			this->listBox13->ItemHeight = 29;
			this->listBox13->Location = System::Drawing::Point(263, 409);
			this->listBox13->Name = L"listBox13";
			this->listBox13->Size = System::Drawing::Size(342, 33);
			this->listBox13->TabIndex = 10;
			// 
			// listBox11
			// 
			this->listBox11->FormattingEnabled = true;
			this->listBox11->ItemHeight = 29;
			this->listBox11->Location = System::Drawing::Point(263, 311);
			this->listBox11->Name = L"listBox11";
			this->listBox11->Size = System::Drawing::Size(342, 33);
			this->listBox11->TabIndex = 7;
			// 
			// listBox12
			// 
			this->listBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox12->FormattingEnabled = true;
			this->listBox12->ItemHeight = 29;
			this->listBox12->Location = System::Drawing::Point(263, 360);
			this->listBox12->Name = L"listBox12";
			this->listBox12->Size = System::Drawing::Size(342, 33);
			this->listBox12->TabIndex = 5;
			// 
			// listBox9
			// 
			this->listBox9->FormattingEnabled = true;
			this->listBox9->ItemHeight = 29;
			this->listBox9->Location = System::Drawing::Point(263, 187);
			this->listBox9->Name = L"listBox9";
			this->listBox9->Size = System::Drawing::Size(342, 33);
			this->listBox9->TabIndex = 9;
			// 
			// listBox10
			// 
			this->listBox10->FormattingEnabled = true;
			this->listBox10->ItemHeight = 29;
			this->listBox10->Location = System::Drawing::Point(263, 259);
			this->listBox10->Name = L"listBox10";
			this->listBox10->Size = System::Drawing::Size(342, 33);
			this->listBox10->TabIndex = 5;
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 29;
			this->listBox8->Location = System::Drawing::Point(263, 117);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(342, 33);
			this->listBox8->TabIndex = 8;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 29;
			this->listBox7->Location = System::Drawing::Point(263, 49);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(342, 33);
			this->listBox7->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(35, 256);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 29);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Oblast";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(39, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 29);
			this->label8->TabIndex = 2;
			this->label8->Text = L"EIS-code";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(198, 29);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Personal account";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(200, 29);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Owner of account";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->groupBox4->Controls->Add(this->listBox15);
			this->groupBox4->Controls->Add(this->listBox14);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(304, 17);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1214, 109);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Payment";
			// 
			// listBox15
			// 
			this->listBox15->FormattingEnabled = true;
			this->listBox15->ItemHeight = 29;
			this->listBox15->Location = System::Drawing::Point(984, 42);
			this->listBox15->Name = L"listBox15";
			this->listBox15->Size = System::Drawing::Size(186, 33);
			this->listBox15->TabIndex = 12;
			// 
			// listBox14
			// 
			this->listBox14->FormattingEnabled = true;
			this->listBox14->ItemHeight = 29;
			this->listBox14->Location = System::Drawing::Point(763, 42);
			this->listBox14->Name = L"listBox14";
			this->listBox14->Size = System::Drawing::Size(169, 33);
			this->listBox14->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(592, 43);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(156, 29);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Overpayment";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(938, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 29);
			this->label12->TabIndex = 4;
			this->label12->Text = L"on";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(29, 44);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(191, 29);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Payment amount";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(234, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 34);
			this->textBox1->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(424, 36);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 42);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Pay";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 627);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1535, 26);
			this->statusStrip1->TabIndex = 7;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(117, 20);
			this->toolStripStatusLabel1->Text = L"Made in Ukraine";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1535, 653);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Communal Utilites";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		array<ListBox^>^ listBoxes = gcnew array<ListBox^> {
			this->listBox1,
			this->listBox2,
			this->listBox3,
			this->listBox4,
			this->listBox5,
			this->listBox6,
			this->listBox7,
			this->listBox8,
			this->listBox9,
			this->listBox10,
			this->listBox11,
			this->listBox12,
			this->listBox13,
			this->listBox14,
			this->listBox15
		};

		for each (ListBox^ lb in listBoxes) lb->Items->Clear();

		Record data[] = {
			{ "Fixed", 7.95689f, "Not provided", "01.05.2024 -- 30.04.2025", 
			"Fadyev Anton Pertrovich", 200049200, "144EB551656XM20B5", "Khmel'nyts'ka", 
			"Khmel'nyts'kyi", "Kam'yanets'ka 910", "Room 71", "Yes", 6.15f, "15.11.2024", "What" },

			{ "Un fixed", 4.343f, "5 percent", "02.06.2024 -- 31.05.2025", 
			"Gordon Oleksyi Andriovich", 198007821, "129ADF8343FGX20C6", "Kiyvska", 
			"Bila Cherkva", "Centralna", "House 66", "No", 312.437f, "21.09.2025", "Goes" },

			{ "Fixed", 12.54f, "20 percent", "12.03.2024 -- 09.02.2025",
			"Geyts Bill Cerg", 172374534, "114FDMG812FHX20C5", "Lvivska", "Lviv", "Mirna 29", "House 6", "Yes", 0.0f, "--.--.--", "Want" }
		};

		switch (comboBox1->SelectedIndex) {

		case 0:
			Filing_ListBoxes_by_Data(data, 0, listBoxes);
			break;

		case 1:
			Filing_ListBoxes_by_Data(data, 1, listBoxes);
			break;

		case 2:
			Filing_ListBoxes_by_Data(data, 2, listBoxes);
			break;

		default:
			break;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ form1 = gcnew MyForm2();
		form1->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ form1 = gcnew MyForm1();
		form1->Show();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
