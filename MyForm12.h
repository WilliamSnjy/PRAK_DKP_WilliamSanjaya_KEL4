#pragma once
#include "Header.h"
namespace TugasAkhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm12(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm12(Form ^obj1)
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
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: harga lihatharga;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"           ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(263, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Kembali";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(172, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"           ";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(186, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Cari";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm12::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(172, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"           ";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(9, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Nama Barang";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(9, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Harga Barang";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(125, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(125, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"=";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(12, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Total";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(125, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"=";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(1, 11);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 30);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Kode Barang";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(263, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Beli";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm12::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(99, 166);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(1, 162);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 30);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Alamat";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(99, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 22);
			this->textBox3->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(1, 194);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 54);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Nomor yang dapat dihubungi";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 300);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm12";
			this->Load += gcnew System::EventHandler(this, &MyForm12::MyForm12_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		lihatharga.sHarga(
			200000, 200000, 13000000, 2350000, 1300000, 
			2350000, 4250000, 2600000, 6900000, 2500000, 
			150000, 3430000, 3400000, 3000000, 2700000, 
			3000000, 2200000, 8200000, 3900000, 4300000, 
			2500000, 3500000, 7200000, 2600000, 6000000
		);
		int K001 = lihatharga.getHarga();
		int K002 = lihatharga.getHarga();
		int K003 = lihatharga.getHarga();
		int K004 = lihatharga.getHarga();
		int K005 = lihatharga.getHarga();
		int MC001 = lihatharga.getHarga();
		int MC002 = lihatharga.getHarga();
		int MC003 = lihatharga.getHarga();
		int MC004 = lihatharga.getHarga();
		int MC005 = lihatharga.getHarga();
		int D001 = lihatharga.getHarga();
		int D002 = lihatharga.getHarga();
		int D003 = lihatharga.getHarga();
		int D004 = lihatharga.getHarga();
		int D005 = lihatharga.getHarga();
		int T001 = lihatharga.getHarga();
		int T002 = lihatharga.getHarga();
		int T003 = lihatharga.getHarga();
		int T004 = lihatharga.getHarga();
		int T005 = lihatharga.getHarga();
		int A001 = lihatharga.getHarga();
		int A002 = lihatharga.getHarga();
		int A003 = lihatharga.getHarga();
		int A004 = lihatharga.getHarga();
		int A005 = lihatharga.getHarga();
		lihatharga.reset();
		String^ cari;
		cari = textBox1->Text;
		if (cari == "K001") {
			label1->Text = "Kipas Maspion";
			label2->Text = "Rp 200.000";
			label3->Text = "Rp " + K001;
		}
		else if (cari == "K002") {
			label1->Text = "Sekai HFN 10 inch";
			label2->Text = "Rp 200.000";
			label3->Text = "Rp " + K002;
		}
		else if (cari == "K003") {
			label1->Text = "Kipas Dyson";
			label2->Text = "Rp 13.000.000";
			label3->Text = "Rp " + K003;
		}
		else if (cari == "K004") {
			label1->Text = "Kipas Angin Air";
			label2->Text = "Rp 2.350.000";
			label3->Text = "Rp " + K004;
		}
		else if (cari == "K005") {
			label1->Text = "Air Cooler Midea";
			label2->Text = "Rp 1.300.000";
			label3->Text = "Rp " + K005;
		}
		else if (cari == "MC001") {
			label1->Text = "Mesin Cuci";
			label2->Text = "Rp 2.350.000";
			label3->Text = "Rp " + MC001;
		}
		else if (cari == "MC002") {
			label1->Text = "Sharp Mesin Cuci";
			label2->Text = "Rp 4.250.000";
			label3->Text = "Rp " + MC002;
		}
		else if (cari == "MC003") {
			label1->Text = "Mesin Cuci Bestlife 3 Tabung";
			label2->Text = "Rp 2.600.000";
			label3->Text = "Rp " + MC003;
		}
		else if (cari == "MC004") {
			label1->Text = "Mesin Cuci Samsung";
			label2->Text = "Rp 6.900.000";
			label3->Text = "Rp " + MC004;
		}
		else if (cari == "MC005") {
			label1->Text = "Mesin Cuci Polytron";
			label2->Text = "Rp 2.500.000";
			label3->Text = "Rp " + MC005;
		}
		else if (cari == "D001") {
			label1->Text = "Dispenser";
			label2->Text = "Rp 150.000";
			label3->Text = "Rp " + D001;
		}
		else if (cari == "D002") {
			label1->Text = "Dispenser Philips";
			label2->Text = "Rp 3.430.000";
			label3->Text = "Rp " + D002;
		}
		else if (cari == "D003") {
			label1->Text = "Dispenser Polytron";
			label2->Text = "Rp 3.400.000";
			label3->Text = "Rp " + D003;
		}
		else if (cari == "D004") {
			label1->Text = "Dispenser Sharp";
			label2->Text = "Rp 3.000.000";
			label3->Text = "Rp " + D004;
		}
		else if (cari == "D005") {
			label1->Text = "Dispenser Sanken";
			label2->Text = "Rp 2.700.000";
			label3->Text = "Rp " + D005;
		}
		else if (cari == "T001") {
			label1->Text = "TV";
			label2->Text = "Rp 3.000.000";
			label3->Text = "Rp " + T001;
		}
		else if (cari == "T002") {
			label1->Text = "LED AQUOS";
			label2->Text = "Rp 2.200.000";
			label3->Text = "Rp " + T002;
		}
		else if (cari == "T003") {
			label1->Text = "LED SAMSUNG";
			label2->Text = "Rp 8.200.000";
			label3->Text = "Rp " + T003;
		}
		else if (cari == "T004") {
			label1->Text = "LED CooCaa";
			label2->Text = "Rp 3.900.000";
			label3->Text = "Rp " + T004;
		}
		else if (cari == "T005") {
			label1->Text = "LED Polytron";
			label2->Text = "Rp 4.300.000";
			label3->Text = "Rp " + T005;
		}
		else if (cari == "A001") {
			label1->Text = "AC Samsung";
			label2->Text = "Rp 2.500.000";
			label3->Text = "Rp " + A001;
		}
		else if (cari == "A002") {
			label1->Text = "AC Sharp";
			label2->Text = "Rp 3.500.000";
			label3->Text = "Rp " + A002;
		}
		else if (cari == "A003") {
			label1->Text = "AC Daikin";
			label2->Text = "Rp 7.200.000";
			label3->Text = "Rp " + A003;
		}
		else if (cari == "A004") {
			label1->Text = "AC Gree";
			label2->Text = "Rp 2.600.000";
			label3->Text = "Rp " + A004;
		}
		else if (cari == "A005") {
			label1->Text = "AC Panasonic";
			label2->Text = "Rp 6.000.000";
			label3->Text = "Rp " + A005;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12::Hide();
	obj->Show();
}
private: System::Void MyForm12_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ look;
	String^ look1;
	look = textBox2->Text;
	look1 = textBox3->Text;
	if (look1 == "" || look == "") {
		MessageBox::Show("Tolong Isi nomor yang dapat dihubungi\n     Tolong isi alamat", " ", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	else {
		MessageBox::Show("Permintaan Anda akan kami proses\n     Terima kasih telah berbelanja", " ", MessageBoxButtons::OK, MessageBoxIcon::None);
		Application::Exit();
	}
}
};
}
