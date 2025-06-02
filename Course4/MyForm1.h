#pragma once
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <iostream>

namespace Course4 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Windows::Forms::DataVisualization::Charting;
    using namespace System::Collections::Generic;

    value struct TariffRecord {
        String^ date;
        double monthlyTariff;
        double yearlyTariff;
		TariffRecord(String^ initialDate, double initialMonthlyTariff, double initialYearlyTariff) {
			date = initialDate;
			monthlyTariff = initialMonthlyTariff;
			yearlyTariff = initialYearlyTariff;
        }
    };
    public ref class MyForm1 : public System::Windows::Forms::Form
    {
    public:
        MyForm1(void)
        {
            InitializeComponent();
            initalize_tariffs();
        }

    protected:
        ~MyForm1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1old;
    protected:

    private:

    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->chart1old = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1old))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // chart1old
            // 
            chartArea1->Name = L"ChartArea1";
            this->chart1old->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend1";
            this->chart1old->Legends->Add(legend1);
            this->chart1old->Location = System::Drawing::Point(12, 12);
            this->chart1old->Name = L"chart1old";
            series1->ChartArea = L"ChartArea1";
            series1->Legend = L"Legend1";
            series1->Name = L"Natural prices";
            this->chart1old->Series->Add(series1);
            this->chart1old->Size = System::Drawing::Size(692, 409);
            this->chart1old->TabIndex = 0;
            this->chart1old->Text = L"chart1";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(781, 12);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 40;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(368, 409);
            this->dataGridView1->TabIndex = 1;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(12, 251);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(136, 39);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Show data";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
                L"2019", L"2020", L"2021", L"2022", L"2023", L"2024",
                    L"2025", L"2026"
            });
            this->comboBox1->Location = System::Drawing::Point(140, 184);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 37);
            this->comboBox1->TabIndex = 3;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"January", L"February", L"March", L"April", L"May",
                    L"June", L"July", L"August", L"September", L"October", L"November", L"December"
            });
            this->comboBox2->Location = System::Drawing::Point(140, 124);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(121, 37);
            this->comboBox2->TabIndex = 4;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(140, 8);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(121, 38);
            this->button2->TabIndex = 5;
            this->button2->Text = L"Add";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(7, 124);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(79, 29);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Month";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(7, 187);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(64, 29);
            this->label2->TabIndex = 7;
            this->label2->Text = L"Year";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(7, 13);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(127, 29);
            this->label3->TabIndex = 8;
            this->label3->Text = L"Select and";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(7, 66);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(121, 29);
            this->label4->TabIndex = 9;
            this->label4->Text = L"Price data";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(140, 66);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(121, 34);
            this->textBox1->TabIndex = 10;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->comboBox2);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->comboBox1);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Location = System::Drawing::Point(490, 72);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(273, 303);
            this->panel1->TabIndex = 11;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->panel2->Location = System::Drawing::Point(560, 12);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(215, 409);
            this->panel2->TabIndex = 12;
            // 
            // chart1
            // 
            chartArea2->Name = L"ChartArea1";
            this->chart1->ChartAreas->Add(chartArea2);
            legend2->Name = L"Legend1";
            this->chart1->Legends->Add(legend2);
            this->chart1->Location = System::Drawing::Point(12, 12);
            this->chart1->Name = L"chart1";
            series2->ChartArea = L"ChartArea1";
            series2->Legend = L"Legend1";
            series2->Name = L"Series1";
            this->chart1->Series->Add(series2);
            this->chart1->Size = System::Drawing::Size(575, 409);
            this->chart1->TabIndex = 13;
            this->chart1->Text = L"chart1";
            // 
            // MyForm1
            // 
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(1162, 430);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->chart1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel2);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Name = L"MyForm1";
            this->Text = L"N pricecs";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1old))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            this->ResumeLayout(false);

        }

        List<TariffRecord>^ tariffs = gcnew List<TariffRecord>();

		void load_tariffs() {
			std::ofstream outFile("tarrifs");

            std::cout << "GAYYYYYYYYYYYYYYYYYYYYYYYYYYYy";

            outFile.close();
		}
        void save_tariffs() {
			std::ofstream outFile("tarrifs");

            outFile << tariffs->Count;
            return;

            TariffRecord item;
            for (int i = 0; i < tariffs->Count; i++) {
                item = tariffs[i];

                outFile << msclr::interop::marshal_as<std::string>(item.date);
                outFile << item.monthlyTariff;
                outFile << item.yearlyTariff;
            }
			outFile.close();
        }

        void initalize_tariffs() {
			tariffs->Add(TariffRecord("01.05.2019", 7556, 15199));
			tariffs->Add(TariffRecord("01.06.2019", 7020, 14855));
			tariffs->Add(TariffRecord("01.07.2019", 6222, 13499));
			tariffs->Add(TariffRecord("01.08.2019", 5912, 12432));
			tariffs->Add(TariffRecord("01.09.2019", 5714, 11834));
			tariffs->Add(TariffRecord("01.10.2019", 5455, 10892));
			tariffs->Add(TariffRecord("01.11.2019", 6214, 13982));
			tariffs->Add(TariffRecord("01.12.2019", 5449, 11024));
			tariffs->Add(TariffRecord("01.01.2020", 5868, 12418));
			tariffs->Add(TariffRecord("01.02.2020", 5005, 10043));
			tariffs->Add(TariffRecord("01.03.2020", 4326, 9212));
			tariffs->Add(TariffRecord("01.04.2020", 3712, 7832));
			tariffs->Add(TariffRecord("01.05.2020", 2948, 6286));
            save_tariffs();
            load_tariffs();
        }

#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			this->chart1->Series->Clear();
			this->chart1->ChartAreas->Clear();
			this->dataGridView1->Columns->Clear();
			this->dataGridView1->Rows->Clear();

			auto area = gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea("MainArea");
			this->chart1->ChartAreas->Add(area);

			auto seriesMonthly = gcnew System::Windows::Forms::DataVisualization::Charting::Series("Monthly");
			seriesMonthly->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			seriesMonthly->Color = System::Drawing::Color::Green;
			seriesMonthly->MarkerStyle = MarkerStyle::Diamond;
			seriesMonthly->BorderWidth = 3;

			auto seriesYearly = gcnew System::Windows::Forms::DataVisualization::Charting::Series("Yearly");
			seriesYearly->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			seriesYearly->Color = System::Drawing::Color::Blue;
			seriesYearly->MarkerStyle = MarkerStyle::Circle;
			seriesYearly->BorderWidth = 1;

			for (int i = 0; i < tariffs->Count; i++)
			{
				String^ dateStr = gcnew System::String(tariffs[i].date);
				seriesMonthly->Points->AddXY(dateStr, tariffs[i].monthlyTariff);

				if (tariffs[i].yearlyTariff > 0)
					seriesYearly->Points->AddXY(dateStr, tariffs[i].yearlyTariff);
			}

			this->chart1->Series->Add(seriesMonthly);
			this->chart1->Series->Add(seriesYearly);

			this->dataGridView1->ColumnCount = 3;
			this->dataGridView1->Columns[0]->Name = "Date";
			this->dataGridView1->Columns[1]->Name = "Monthly Tariff";
			this->dataGridView1->Columns[2]->Name = "Yearly Tariff";

			for (int i = 0; i < tariffs->Count; i++)
			{
				this->dataGridView1->Rows->Add(
					gcnew System::String(tariffs[i].date),
					tariffs[i].monthlyTariff.ToString("F0"),

					tariffs[i].yearlyTariff > 0 ? tariffs[i].yearlyTariff.ToString("F0") : "-"
				);
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			TariffRecord tariff;

            auto monthNumber = comboBox2->SelectedIndex + 1;

			tariff.monthlyTariff = Convert::ToDouble(textBox1->Text);
			tariff.date = "01.";
            if (monthNumber < 10) {
                tariff.date += "0";
            }
			tariff.date += monthNumber.ToString();
			tariff.date += "." + comboBox1->Text;

            TariffRecord item;
            for (int i = 0; i < tariffs->Count; i++) {
                item = tariffs[i];

                if (item.date == tariff.date) {
                    item.monthlyTariff = tariff.monthlyTariff;
                    item.yearlyTariff = tariff.yearlyTariff;
                    tariffs[i] = item;
                    return;
                }
            }
			tariffs->Add(tariff);
		}
};
}
