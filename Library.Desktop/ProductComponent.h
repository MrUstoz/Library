#pragma once
#include "UpdateBookWindow.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LibraryDesktop {

	/// <summary>
	/// Summary for ProductComponent
	/// </summary>
	public ref class ProductComponent : public System::Windows::Forms::UserControl
	{
	public:
		ProductComponent(void)
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
		~ProductComponent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ productDeleteBtn;
	protected:

	private: System::Windows::Forms::Button^ productEditBtn;
	protected:

	private: System::Windows::Forms::Label^ productNameLbl;
	private: System::Windows::Forms::Label^ productNumberLbl;
	private: System::Windows::Forms::Label^ productPriceLbl;


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
			this->productDeleteBtn = (gcnew System::Windows::Forms::Button());
			this->productEditBtn = (gcnew System::Windows::Forms::Button());
			this->productNameLbl = (gcnew System::Windows::Forms::Label());
			this->productNumberLbl = (gcnew System::Windows::Forms::Label());
			this->productPriceLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// productDeleteBtn
			// 
			this->productDeleteBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->productDeleteBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->productDeleteBtn->FlatAppearance->BorderSize = 0;
			this->productDeleteBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->productDeleteBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->productDeleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->productDeleteBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productDeleteBtn->Location = System::Drawing::Point(953, 3);
			this->productDeleteBtn->Name = L"productDeleteBtn";
			this->productDeleteBtn->Size = System::Drawing::Size(57, 43);
			this->productDeleteBtn->TabIndex = 5;
			this->productDeleteBtn->Text = L"Delete";
			this->productDeleteBtn->UseVisualStyleBackColor = false;
			// 
			// productEditBtn
			// 
			this->productEditBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->productEditBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->productEditBtn->FlatAppearance->BorderSize = 0;
			this->productEditBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->productEditBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->productEditBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->productEditBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productEditBtn->Location = System::Drawing::Point(890, 3);
			this->productEditBtn->Name = L"productEditBtn";
			this->productEditBtn->Size = System::Drawing::Size(57, 43);
			this->productEditBtn->TabIndex = 4;
			this->productEditBtn->Text = L"Edit";
			this->productEditBtn->UseVisualStyleBackColor = false;
			this->productEditBtn->Click += gcnew System::EventHandler(this, &ProductComponent::productEditBtn_Click);
			// 
			// productNameLbl
			// 
			this->productNameLbl->AutoSize = true;
			this->productNameLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productNameLbl->Location = System::Drawing::Point(65, 12);
			this->productNameLbl->Name = L"productNameLbl";
			this->productNameLbl->Size = System::Drawing::Size(175, 27);
			this->productNameLbl->TabIndex = 3;
			this->productNameLbl->Text = L"Sariq devni minib";
			// 
			// productNumberLbl
			// 
			this->productNumberLbl->AutoSize = true;
			this->productNumberLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productNumberLbl->Location = System::Drawing::Point(3, 12);
			this->productNumberLbl->Name = L"productNumberLbl";
			this->productNumberLbl->Size = System::Drawing::Size(23, 27);
			this->productNumberLbl->TabIndex = 6;
			this->productNumberLbl->Text = L"1";
			// 
			// productPriceLbl
			// 
			this->productPriceLbl->AutoSize = true;
			this->productPriceLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productPriceLbl->Location = System::Drawing::Point(394, 12);
			this->productPriceLbl->Name = L"productPriceLbl";
			this->productPriceLbl->Size = System::Drawing::Size(67, 27);
			this->productPriceLbl->TabIndex = 7;
			this->productPriceLbl->Text = L"30000";
			// 
			// ProductComponent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->productPriceLbl);
			this->Controls->Add(this->productNumberLbl);
			this->Controls->Add(this->productDeleteBtn);
			this->Controls->Add(this->productEditBtn);
			this->Controls->Add(this->productNameLbl);
			this->Name = L"ProductComponent";
			this->Size = System::Drawing::Size(1020, 48);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private: System::Void productEditBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateBookWindow^ window = gcnew UpdateBookWindow();
		window->ShowDialog();
	}
};
}
