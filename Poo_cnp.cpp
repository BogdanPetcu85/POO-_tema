#pragma once
#include "pch.cpp"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System:: ComponentModel;
    using namespace System:: Collections;
    using namespace System:: Windows::Forms;
    using namespace System:: Data;
    using namespace System:: Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
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
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ unu;
    protected:
    private: System::Windows::Forms::Button^ patru;
    private: System::Windows::Forms::Button^ sapte;
    private: System::Windows::Forms::Button^ doi;
    private: System::Windows::Forms::Button^ cinci;
    private: System::Windows::Forms::Button^ opt;
    private: System::Windows::Forms::Button^ trei;
    private: System::Windows::Forms::Button^ sase;
    private: System::Windows::Forms::Button^ noua;
    private: System::Windows::Forms::Button^ zero;
    private: System::Windows::Forms::Button^ virgula;
    private: System::Windows::Forms::Button^ egal;
    private: System::Windows::Forms::Button^ adunare;
    private: System::Windows::Forms::Button^ impartire;
    private: System::Windows::Forms::Button^ scadere;
    private: System::Windows::Forms::Button^ inmultire;
    private: System::Windows::Forms::Button^ clear;
    private: System::Windows::Forms::TextBox^ textBox1;

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
            this->unu = (gcnew System::Windows::Forms::Button());
            this->patru = (gcnew System::Windows::Forms::Button());
            this->sapte = (gcnew System::Windows::Forms::Button());
            this->doi = (gcnew System::Windows::Forms::Button());
            this->cinci = (gcnew System::Windows::Forms::Button());
            this->opt = (gcnew System::Windows::Forms::Button());
            this->trei = (gcnew System::Windows::Forms::Button());
            this->sase = (gcnew System::Windows::Forms::Button());
            this->noua = (gcnew System::Windows::Forms::Button());
            this->zero = (gcnew System::Windows::Forms::Button());
            this->virgula = (gcnew System::Windows::Forms::Button());
            this->egal = (gcnew System::Windows::Forms::Button());
            this->adunare = (gcnew System::Windows::Forms::Button());
            this->impartire = (gcnew System::Windows::Forms::Button());
            this->scadere = (gcnew System::Windows::Forms::Button());
            this->inmultire = (gcnew System::Windows::Forms::Button());
            this->clear = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // unu
            // 
            this->unu->Location = System::Drawing::Point(25, 156);
            this->unu->Name = L"unu";
            this->unu->Size = System::Drawing::Size(75, 23);
            this->unu->TabIndex = 0;
            this->unu->Text = L"1";
            this->unu->UseVisualStyleBackColor = true;
            this->unu->Click += gcnew System::EventHandler(this, &Form1::unu_Click);
            // 
            // patru
            // 
            this->patru->Location = System::Drawing::Point(25, 200);
            this->patru->Name = L"patru";
            this->patru->Size = System::Drawing::Size(75, 23);
            this->patru->TabIndex = 1;
            this->patru->Text = L"4";
            this->patru->UseVisualStyleBackColor = true;
            this->patru->Click += gcnew System::EventHandler(this, &Form1::patru_Click);
            // 
            // sapte
            // 
            this->sapte->Location = System::Drawing::Point(25, 239);
            this->sapte->Name = L"sapte";
            this->sapte->Size = System::Drawing::Size(75, 23);
            this->sapte->TabIndex = 2;
            this->sapte->Text = L"7";
            this->sapte->UseVisualStyleBackColor = true;
            this->sapte->Click += gcnew System::EventHandler(this, &Form1::sapte_Click);
            // 
            // doi
            // 
            this->doi->Location = System::Drawing::Point(121, 156);
            this->doi->Name = L"doi";
            this->doi->Size = System::Drawing::Size(75, 23);
            this->doi->TabIndex = 3;
            this->doi->Text = L"2";
            this->doi->UseVisualStyleBackColor = true;
            this->doi->Click += gcnew System::EventHandler(this, &Form1::doi_Click);
            // 
            // cinci
            // 
            this->cinci->Location = System::Drawing::Point(121, 200);
            this->cinci->Name = L"cinci";
            this->cinci->Size = System::Drawing::Size(75, 23);
            this->cinci->TabIndex = 4;
            this->cinci->Text = L"5";
            this->cinci->UseVisualStyleBackColor = true;
            this->cinci->Click += gcnew System::EventHandler(this, &Form1::cinci_Click);
            // 
            // opt
            // 
            this->opt->Location = System::Drawing::Point(121, 239);
            this->opt->Name = L"opt";
            this->opt->Size = System::Drawing::Size(75, 23);
            this->opt->TabIndex = 5;
            this->opt->Text = L"8";
            this->opt->UseVisualStyleBackColor = true;
            this->opt->Click += gcnew System::EventHandler(this, &Form1::opt_Click);
            // 
            // trei
            // 
            this->trei->Location = System::Drawing::Point(217, 155);
            this->trei->Name = L"trei";
            this->trei->Size = System::Drawing::Size(75, 23);
            this->trei->TabIndex = 6;
            this->trei->Text = L"3";
            this->trei->UseVisualStyleBackColor = true;
            this->trei->Click += gcnew System::EventHandler(this, &Form1::trei_Click);
            // 
            // sase
            // 
            this->sase->Location = System::Drawing::Point(217, 200);
            this->sase->Name = L"sase";
            this->sase->Size = System::Drawing::Size(75, 23);
            this->sase->TabIndex = 7;
            this->sase->Text = L"6";
            this->sase->UseVisualStyleBackColor = true;
            this->sase->Click += gcnew System::EventHandler(this, &Form1::sase_Click);
            // 
            // noua
            // 
            this->noua->Location = System::Drawing::Point(217, 238);
            this->noua->Name = L"noua";
            this->noua->Size = System::Drawing::Size(75, 23);
            this->noua->TabIndex = 8;
            this->noua->Text = L"9";
            this->noua->UseVisualStyleBackColor = true;
            this->noua->Click += gcnew System::EventHandler(this, &Form1::noua_Click);
            // 
            // zero
            // 
            this->zero->Location = System::Drawing::Point(25, 278);
            this->zero->Name = L"zero";
            this->zero->Size = System::Drawing::Size(75, 23);
            this->zero->TabIndex = 9;
            this->zero->Text = L"0";
            this->zero->UseVisualStyleBackColor = true;
            this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
            // 
            // virgula
            // 
            this->virgula->Location = System::Drawing::Point(121, 278);
            this->virgula->Name = L"virgula";
            this->virgula->Size = System::Drawing::Size(75, 23);
            this->virgula->TabIndex = 10;
            this->virgula->Text = L".";
            this->virgula->UseVisualStyleBackColor = true;
            this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
            // 
            // egal
            // 
            this->egal->Location = System::Drawing::Point(217, 278);
            this->egal->Name = L"egal";
            this->egal->Size = System::Drawing::Size(75, 23);
            this->egal->TabIndex = 11;
            this->egal->Text = L"=";
            this->egal->UseVisualStyleBackColor = true;
            this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
            // 
            // adunare
            // 
            this->adunare->Location = System::Drawing::Point(325, 155);
            this->adunare->Name = L"adunare";
            this->adunare->Size = System::Drawing::Size(75, 23);
            this->adunare->TabIndex = 12;
            this->adunare->Text = L"+";
            this->adunare->UseVisualStyleBackColor = true;
            this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
            // 
            // impartire
            // 
            this->impartire->Location = System::Drawing::Point(325, 199);
            this->impartire->Name = L"impartire";
            this->impartire->Size = System::Drawing::Size(75, 23);
            this->impartire->TabIndex = 13;
            this->impartire->Text = L"/";
            this->impartire->UseVisualStyleBackColor = true;
            this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
            // 
            // scadere
            // 
            this->scadere->Location = System::Drawing::Point(325, 238);
            this->scadere->Name = L"scadere";
            this->scadere->Size = System::Drawing::Size(75, 23);
            this->scadere->TabIndex = 14;
            this->scadere->Text = L"-";
            this->scadere->UseVisualStyleBackColor = true;
            this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
            // 
            // inmultire
            // 
            this->inmultire->Location = System::Drawing::Point(325, 278);
            this->inmultire->Name = L"inmultire";
            this->inmultire->Size = System::Drawing::Size(75, 23);
            this->inmultire->TabIndex = 15;
            this->inmultire->Text = L"*";
            this->inmultire->UseVisualStyleBackColor = true;
            this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
            // 
            // clear
            // 
            this->clear->Location = System::Drawing::Point(25, 308);
            this->clear->Name = L"clear";
            this->clear->Size = System::Drawing::Size(375, 23);
            this->clear->TabIndex = 16;
            this->clear->Text = L"Clear";
            this->clear->UseVisualStyleBackColor = true;
            this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(25, 71);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(375, 52);
            this->textBox1->TabIndex = 17;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(489, 341);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->clear);
            this->Controls->Add(this->inmultire);
            this->Controls->Add(this->scadere);
            this->Controls->Add(this->impartire);
            this->Controls->Add(this->adunare);
            this->Controls->Add(this->egal);
            this->Controls->Add(this->virgula);
            this->Controls->Add(this->zero);
            this->Controls->Add(this->noua);
            this->Controls->Add(this->sase);
            this->Controls->Add(this->trei);
            this->Controls->Add(this->opt);
            this->Controls->Add(this->cinci);
            this->Controls->Add(this->doi);
            this->Controls->Add(this->sapte);
            this->Controls->Add(this->patru);
            this->Controls->Add(this->unu);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void unu_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "1";
    }
    private: System::Void doi_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "2";
    }
    private: System::Void trei_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "3";
    }
    private: System::Void patru_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "4";
    }
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void cinci_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "5";
    }
    private: System::Void sase_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "6";
    }
    private: System::Void sapte_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "7";
    }
    private: System::Void opt_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "8";
    }
    private: System::Void noua_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "9";
    }
    private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += "0";
    }

    private:double primulNumar = 0;
    private:double alDoileaNumar = 0;
    private: String^ operation = "";


    private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text != "") {
            primulNumar = Double::Parse(textBox1->Text);
            textBox1->Text = "";
            operation = "+";
            textBox1->Text = "";
        }
    }
    private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text != "") {
            primulNumar = Double::Parse(textBox1->Text);
            textBox1->Text = "";
            operation = "/";
            textBox1->Text = "";
        }
    }
    private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text != "") {
            primulNumar = Double::Parse(textBox1->Text);
            textBox1->Text = "";
            operation = "-";
            textBox1->Text = "";
        }
    }
    private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text != "") {
            primulNumar = Double::Parse(textBox1->Text);
            textBox1->Text = "";
            operation = "*";
            textBox1->Text = "";
        }
    }
    private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text += ".";

    }
    private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text != "") {
            alDoileaNumar = Double::Parse(textBox1->Text);
            if (operation == "+") {
                textBox1->Text = (primulNumar + alDoileaNumar).ToString();
            }
            else if (operation == "-") {
                textBox1->Text = (primulNumar - alDoileaNumar).ToString();
            }
            else if (operation == "*") {
                textBox1->Text = (primulNumar * alDoileaNumar).ToString();
            }
            else if (operation == "/") {
                if (alDoileaNumar != 0) {
                    textBox1->Text = (primulNumar / alDoileaNumar).ToString();
                }
                else {
                    textBox1->Text = "Error: Cannot divide to zero!";
                }
            }

        }
    }
    private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Clear();
    }
    };
}