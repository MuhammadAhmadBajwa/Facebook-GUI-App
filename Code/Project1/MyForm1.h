#pragma once
//#include"Header.h"
#include"MyForm2.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		
	public:
		app* AppObj;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:
		user* CurrentUser;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AppObj = new app;
			AppObj->LoadAllData();
		}
		
		 user* getCurrentUser()
		 {
			 return CurrentUser;
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



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ UserIDInput;

	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Label^ WrongIDError;
	private: System::Windows::Forms::Label^ label2;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->WrongIDError = (gcnew System::Windows::Forms::Label());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->UserIDInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(285, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 160);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->WrongIDError);
			this->panel1->Controls->Add(this->LoginButton);
			this->panel1->Controls->Add(this->UserIDInput);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(192, 166);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(712, 396);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19));
			this->label2->Location = System::Drawing::Point(136, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(480, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Log in to Facebook";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// WrongIDError
			// 
			this->WrongIDError->CausesValidation = false;
			this->WrongIDError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->WrongIDError->ForeColor = System::Drawing::Color::Red;
			this->WrongIDError->Location = System::Drawing::Point(136, 174);
			this->WrongIDError->Name = L"WrongIDError";
			this->WrongIDError->Size = System::Drawing::Size(480, 23);
			this->WrongIDError->TabIndex = 4;
			this->WrongIDError->Click += gcnew System::EventHandler(this, &MyForm1::WrongIDError_Click);
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold));
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->Location = System::Drawing::Point(136, 218);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(480, 58);
			this->LoginButton->TabIndex = 3;
			this->LoginButton->Text = L"Log in";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// UserIDInput
			// 
			this->UserIDInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UserIDInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserIDInput->ForeColor = System::Drawing::Color::Gray;
			this->UserIDInput->Location = System::Drawing::Point(136, 128);
			this->UserIDInput->Name = L"UserIDInput";
			this->UserIDInput->Size = System::Drawing::Size(480, 34);
			this->UserIDInput->TabIndex = 1;
			this->UserIDInput->Text = L"User ID";
			this->UserIDInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UserIDInput->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1041, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 33);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1087, 604);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
		char* SystemStringToChar(String^ str)
		{
			int size = str->Length;
			char* CharArr = new char[size + 1];
			for (int i = 0; i < size; i++)
				CharArr[i] = str[i];
			CharArr[size] = '\0';
			return CharArr;
		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		char* UserID = SystemStringToChar(this->UserIDInput->Text);
		CurrentUser = AppObj->SetUser(UserID);
		if (CurrentUser)
		{
			this->WrongIDError->Text = " ";
			this->Hide();
			MyForm2^ Form2 = gcnew MyForm2 (AppObj,CurrentUser);
			
			Form2->ShowDialog();
			this->Show();
			delete[] Form2;
		}
		else
			this->WrongIDError->Text = "The user ID you've entered is incorrect.";
		helper::DeleteCharArray(UserID);
	}
	private: System::Void WrongIDError_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
    private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
