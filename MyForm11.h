#pragma once

namespace TugasAkhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm11(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm11(Form ^obj1)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(241, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Kembali";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(12, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"AC Samsung Rp 2.500.000";
			// 
			// MyForm11
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(350, 300);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm11";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm11";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm11::Hide();
		obj->Show();
	}
	};
}
