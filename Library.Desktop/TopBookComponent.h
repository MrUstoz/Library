#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LibraryDesktop {

	/// <summary>
	/// Summary for TopBookComponent
	/// </summary>
	public ref class TopBookComponent : public System::Windows::Forms::UserControl
	{
	public:
		TopBookComponent(void)
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
		~TopBookComponent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ productPriceLbl;
	protected:
	private: System::Windows::Forms::Label^ productNumberLbl;
	private: System::Windows::Forms::Label^ productNameLbl;
	private: System::Windows::Forms::Label^ topSalesCount;

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
			this->productPriceLbl = (gcnew System::Windows::Forms::Label());
			this->productNumberLbl = (gcnew System::Windows::Forms::Label());
			this->productNameLbl = (gcnew System::Windows::Forms::Label());
			this->topSalesCount = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// productPriceLbl
			// 
			this->productPriceLbl->AutoSize = true;
			this->productPriceLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productPriceLbl->Location = System::Drawing::Point(403, 12);
			this->productPriceLbl->Name = L"productPriceLbl";
			this->productPriceLbl->Size = System::Drawing::Size(67, 27);
			this->productPriceLbl->TabIndex = 10;
			this->productPriceLbl->Text = L"30000";
			// 
			// productNumberLbl
			// 
			this->productNumberLbl->AutoSize = true;
			this->productNumberLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productNumberLbl->Location = System::Drawing::Point(12, 12);
			this->productNumberLbl->Name = L"productNumberLbl";
			this->productNumberLbl->Size = System::Drawing::Size(23, 27);
			this->productNumberLbl->TabIndex = 9;
			this->productNumberLbl->Text = L"1";
			// 
			// productNameLbl
			// 
			this->productNameLbl->AutoSize = true;
			this->productNameLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->productNameLbl->Location = System::Drawing::Point(74, 12);
			this->productNameLbl->Name = L"productNameLbl";
			this->productNameLbl->Size = System::Drawing::Size(175, 27);
			this->productNameLbl->TabIndex = 8;
			this->productNameLbl->Text = L"Sariq devni minib";
			// 
			// topSalesCount
			// 
			this->topSalesCount->AutoSize = true;
			this->topSalesCount->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->topSalesCount->Location = System::Drawing::Point(546, 12);
			this->topSalesCount->Name = L"topSalesCount";
			this->topSalesCount->Size = System::Drawing::Size(34, 27);
			this->topSalesCount->TabIndex = 11;
			this->topSalesCount->Text = L"17";
			// 
			// TopBookComponent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->topSalesCount);
			this->Controls->Add(this->productPriceLbl);
			this->Controls->Add(this->productNumberLbl);
			this->Controls->Add(this->productNameLbl);
			this->Name = L"TopBookComponent";
			this->Size = System::Drawing::Size(653, 48);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
