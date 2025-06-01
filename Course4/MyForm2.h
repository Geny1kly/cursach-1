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
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->SuspendLayout();
            // 
            // MyForm2
            // 
            this->ClientSize = System::Drawing::Size(1033, 481);
            this->Name = L"MyForm2";
            this->ResumeLayout(false);

        }
    };
}