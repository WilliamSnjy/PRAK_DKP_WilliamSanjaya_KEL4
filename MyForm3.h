#pragma once
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm12.h"
#include "MyForm8.h"
#include "MyForm17.h"
#include "MyForm18.h"
#include "MyForm19.h"
#include "MyForm20.h"
namespace TugasAkhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm3(Form ^obj1)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->label2->TabIndex = 10;
			this->label2->Text = L"Electronic Friends";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(913, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 24);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Keluar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"STHupo", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(12, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Mesin Cuci";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(822, 44);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 24);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Kembali";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1024, 106);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(217, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 190);
			this->button2->TabIndex = 16;
			this->button2->Text = L"MC002";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(417, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 190);
			this->button4->TabIndex = 17;
			this->button4->Text = L"MC003";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(617, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 190);
			this->button5->TabIndex = 18;
			this->button5->Text = L"MC004";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(817, 141);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(194, 190);
			this->button6->TabIndex = 19;
			this->button6->Text = L"MC005";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(17, 141);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(194, 190);
			this->button7->TabIndex = 20;
			this->button7->Text = L"MC001";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm3::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(47, 337);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 26);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Beli";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm3::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(245, 337);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 26);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Beli";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm3::button9_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(445, 337);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 26);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Beli";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm3::button10_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(647, 337);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(138, 26);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Beli";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm3::button11_Click);
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(846, 337);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(138, 26);
			this->button12->TabIndex = 25;
			this->button12->Text = L"Beli";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm3::button12_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1024, 500);
			this->ControlBox = false;
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3::Hide();
	obj->Show();
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
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ obj1 = gcnew MyForm12(this);
	obj1->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm8^ obj1 = gcnew MyForm8(this);
	obj1->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm17^ obj1 = gcnew MyForm17(this);
	obj1->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm18^ obj1 = gcnew MyForm18(this);
	obj1->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm19^ obj1 = gcnew MyForm19(this);
	obj1->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm20^ obj1 = gcnew MyForm20(this);
	obj1->ShowDialog();
}
};
}
