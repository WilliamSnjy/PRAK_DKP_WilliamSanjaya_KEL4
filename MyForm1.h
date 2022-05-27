#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include "MyForm10.h"
#include "MyForm11.h"
#include "MyForm12.h"
namespace TugasAkhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Control;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Kipas", L"Mesin Cuci", L"Dispenser", L"TV", L"AC" });
			this->comboBox1->Location = System::Drawing::Point(161, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(321, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 24);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cari";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"STHupo", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(177, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 34);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Kategori";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poor Richard", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(10, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Electronic Friends";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"STHupo", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(12, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Beranda";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1024, 106);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(17, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 190);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Kipas";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(217, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 190);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Mesin Cuci";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(417, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 190);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Dispenser";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(617, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 190);
			this->button5->TabIndex = 15;
			this->button5->Text = L"TV";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(817, 141);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(194, 190);
			this->button6->TabIndex = 16;
			this->button6->Text = L"AC";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(46, 337);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 26);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Beli";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(244, 337);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 26);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Beli";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(445, 337);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 26);
			this->button9->TabIndex = 19;
			this->button9->Text = L"Beli";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(646, 337);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 26);
			this->button10->TabIndex = 20;
			this->button10->Text = L"Beli";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(848, 337);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(138, 26);
			this->button11->TabIndex = 21;
			this->button11->Text = L"Beli";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1024, 500);
			this->ControlBox = false;
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kategori";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ pencari;
		pencari = comboBox1->Text;
		if (pencari == "Kipas") {
			this->Hide();
			MyForm2 ^obj1 = gcnew MyForm2(this);
			obj1->ShowDialog();
		}
		else if (pencari == "Mesin Cuci") {
			this->Hide();
			MyForm3^ obj1 = gcnew MyForm3(this);
			obj1->ShowDialog();
		}
		else if (pencari == "Dispenser") {
			this->Hide();
			MyForm4^ obj1 = gcnew MyForm4(this);
			obj1->ShowDialog();
		}
		else if (pencari == "TV") {
			this->Hide();
			MyForm5^ obj1 = gcnew MyForm5(this);
			obj1->ShowDialog();
		}
		else if (pencari == "AC") {
			this->Hide();
			MyForm6^ obj1 = gcnew MyForm6(this);
			obj1->ShowDialog();
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm7^ obj1 = gcnew MyForm7(this);
	obj1->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm8^ obj1 = gcnew MyForm8(this);
	obj1->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm9^ obj1 = gcnew MyForm9(this);
	obj1->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm10^ obj1 = gcnew MyForm10(this);
	obj1->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm11^ obj1 = gcnew MyForm11(this);
	obj1->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ obj1 = gcnew MyForm12(this);
	obj1->ShowDialog();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ obj1 = gcnew MyForm12(this);
	obj1->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ obj1 = gcnew MyForm12(this);
	obj1->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ obj1 = gcnew MyForm12(this);
	obj1->ShowDialog();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ obj1 = gcnew MyForm12(this);
	obj1->ShowDialog();
}
};
}
