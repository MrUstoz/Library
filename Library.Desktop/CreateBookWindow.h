#pragma once
#include <string>
#include <string>

namespace LibraryDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateBookWindow
	/// </summary>
	public ref class CreateBookWindow : public System::Windows::Forms::Form
	{
	public:
		CreateBookWindow(void)
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
		~CreateBookWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nameLbl;
	private: System::Windows::Forms::TextBox^ nameTxt;
	private: System::Windows::Forms::TextBox^ priceTxt;
	private: System::Windows::Forms::Label^ priceLbl;
	private: System::Windows::Forms::TextBox^ authorTxt;
	private: System::Windows::Forms::Label^ authorLbl;
	private: System::Windows::Forms::Button^ submitBtn;
	protected:

	protected:


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
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->nameTxt = (gcnew System::Windows::Forms::TextBox());
			this->priceTxt = (gcnew System::Windows::Forms::TextBox());
			this->priceLbl = (gcnew System::Windows::Forms::Label());
			this->authorTxt = (gcnew System::Windows::Forms::TextBox());
			this->authorLbl = (gcnew System::Windows::Forms::Label());
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nameLbl
			// 
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLbl->Location = System::Drawing::Point(52, 36);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(53, 21);
			this->nameLbl->TabIndex = 0;
			this->nameLbl->Text = L"Name";
			// 
			// nameTxt
			// 
			this->nameTxt->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameTxt->Location = System::Drawing::Point(42, 62);
			this->nameTxt->Multiline = true;
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(300, 40);
			this->nameTxt->TabIndex = 1;
			// 
			// priceTxt
			// 
			this->priceTxt->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->priceTxt->Location = System::Drawing::Point(42, 141);
			this->priceTxt->Multiline = true;
			this->priceTxt->Name = L"priceTxt";
			this->priceTxt->Size = System::Drawing::Size(300, 40);
			this->priceTxt->TabIndex = 3;
			// 
			// priceLbl
			// 
			this->priceLbl->AutoSize = true;
			this->priceLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->priceLbl->Location = System::Drawing::Point(52, 115);
			this->priceLbl->Name = L"priceLbl";
			this->priceLbl->Size = System::Drawing::Size(47, 21);
			this->priceLbl->TabIndex = 2;
			this->priceLbl->Text = L"Price";
			// 
			// authorTxt
			// 
			this->authorTxt->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->authorTxt->Location = System::Drawing::Point(42, 219);
			this->authorTxt->Multiline = true;
			this->authorTxt->Name = L"authorTxt";
			this->authorTxt->Size = System::Drawing::Size(300, 40);
			this->authorTxt->TabIndex = 5;
			// 
			// authorLbl
			// 
			this->authorLbl->AutoSize = true;
			this->authorLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->authorLbl->Location = System::Drawing::Point(52, 193);
			this->authorLbl->Name = L"authorLbl";
			this->authorLbl->Size = System::Drawing::Size(58, 21);
			this->authorLbl->TabIndex = 4;
			this->authorLbl->Text = L"Author";
			// 
			// submitBtn
			// 
			this->submitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->submitBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->submitBtn->FlatAppearance->BorderSize = 0;
			this->submitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->submitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->submitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->submitBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->submitBtn->Location = System::Drawing::Point(121, 284);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(150, 40);
			this->submitBtn->TabIndex = 6;
			this->submitBtn->Text = L"Submit";
			this->submitBtn->UseVisualStyleBackColor = false;
			this->submitBtn->Click += gcnew System::EventHandler(this, &CreateBookWindow::submitBtn_Click);
			// 
			// CreateBookWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->submitBtn);
			this->Controls->Add(this->authorTxt);
			this->Controls->Add(this->authorLbl);
			this->Controls->Add(this->priceTxt);
			this->Controls->Add(this->priceLbl);
			this->Controls->Add(this->nameTxt);
			this->Controls->Add(this->nameLbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"CreateBookWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Create book";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void submitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (nameTxt->Text != "" &&
				priceTxt->Text != "" &&
				authorTxt->Text != "")
			{
				this->Close();
			}
			else
			{
				MessageBox::Show("Kitob malumotlari to'liq emas!", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				this->Hide();
			}
		}
};
}
