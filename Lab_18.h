#pragma once
#include"math.h"
namespace Lab18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button2;



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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(95, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(247, 15);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Решение с использованием Combo Box";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(98, 130);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(298, 198);
			this->textBox3->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"2x", L"x^2", L"x/3"});
			this->comboBox1->Location = System::Drawing::Point(367, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 11;
			//this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(19, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(322, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ф(x)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(19, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"x";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(177, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"b";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(203, 23);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(-4, 396);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(10, 20);
			this->textBox5->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(495, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(10, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click_1);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 413);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	 double x, a, b, sub1, sub2, sub3, sub4, sub5,sub6,sub7, sub8;
	 x = Convert::ToDouble(textBox1->Text);
	 a = Convert::ToDouble(textBox2->Text);
	 b = Convert::ToDouble(textBox4->Text);

	 switch (comboBox1->SelectedIndex)
	{
	 case 0: {sub6 = 2*x;textBox3->Text = String::Format("Ф(x) = 2x", sub6);}break;
		case 1: sub6 = pow(x,2);textBox3->Text = String::Format("Ф(x) = x^2", sub6);break;
		case 2: sub6 = x/3;textBox3->Text = String::Format("Ф(x) = x/3", sub6);break;
	}
	sub1 = x/2;
	sub2 = tan(sub1);
	sub3 = log10(fabs(sub2));
	sub4 = a*sub3;
	sub5 = cos(x);
	sub7 = b*sub6/sub5;
	sub8 = sub7 + sub4;

	textBox3-> Text += 
		"\r\nПри x = " + Convert::ToString(x) +
		"\r\nПри a = " + Convert::ToString(a) +
		"\r\nПри b = " + Convert::ToString(b) +
		"\r\nY = " + Convert::ToString(sub8) + "\r\n";

}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 comboBox1->Items->Add(textBox5->Text);
		 } 
};
}
