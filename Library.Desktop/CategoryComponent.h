#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LibraryDesktop {

	/// <summary>
	/// Summary for CategoryComponent
	/// </summary>
	public ref class CategoryComponent : public System::Windows::Forms::UserControl
	{
	public:
		CategoryComponent(void)
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
		~CategoryComponent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ categoryNameLbl;
	private: System::Windows::Forms::Button^ categoryEditBtn;
	private: System::Windows::Forms::Button^ categoryDeleteBtn;
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
			this->categoryNameLbl = (gcnew System::Windows::Forms::Label());
			this->categoryEditBtn = (gcnew System::Windows::Forms::Button());
			this->categoryDeleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// categoryNameLbl
			// 
			this->categoryNameLbl->AutoSize = true;
			this->categoryNameLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->categoryNameLbl->Location = System::Drawing::Point(25, 12);
			this->categoryNameLbl->Name = L"categoryNameLbl";
			this->categoryNameLbl->Size = System::Drawing::Size(75, 27);
			this->categoryNameLbl->TabIndex = 0;
			this->categoryNameLbl->Text = L"Tarixiy";
			// 
			// categoryEditBtn
			// 
			this->categoryEditBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->categoryEditBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->categoryEditBtn->FlatAppearance->BorderSize = 0;
			this->categoryEditBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->categoryEditBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->categoryEditBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->categoryEditBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->categoryEditBtn->Location = System::Drawing::Point(182, 4);
			this->categoryEditBtn->Name = L"categoryEditBtn";
			this->categoryEditBtn->Size = System::Drawing::Size(57, 43);
			this->categoryEditBtn->TabIndex = 1;
			this->categoryEditBtn->Text = L"Edit";
			this->categoryEditBtn->UseVisualStyleBackColor = false;
			// 
			// categoryDeleteBtn
			// 
			this->categoryDeleteBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->categoryDeleteBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->categoryDeleteBtn->FlatAppearance->BorderSize = 0;
			this->categoryDeleteBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->categoryDeleteBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->categoryDeleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->categoryDeleteBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->categoryDeleteBtn->Location = System::Drawing::Point(245, 4);
			this->categoryDeleteBtn->Name = L"categoryDeleteBtn";
			this->categoryDeleteBtn->Size = System::Drawing::Size(57, 43);
			this->categoryDeleteBtn->TabIndex = 2;
			this->categoryDeleteBtn->Text = L"Delete";
			this->categoryDeleteBtn->UseVisualStyleBackColor = false;
			// 
			// CategoryComponent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->categoryDeleteBtn);
			this->Controls->Add(this->categoryEditBtn);
			this->Controls->Add(this->categoryNameLbl);
			this->Name = L"CategoryComponent";
			this->Size = System::Drawing::Size(320, 48);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
