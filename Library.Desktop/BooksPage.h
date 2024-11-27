#include "ProductComponent.h"

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



namespace LibraryDesktop {

	/// <summary>
	/// Summary for BooksPage
	/// </summary>
	public ref class BooksPage : public System::Windows::Forms::UserControl
	{
	public:
		BooksPage(void)
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
		~BooksPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ booksBackPanel;
	protected:
	private: System::Windows::Forms::Panel^ booksTopPanel;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ searchBooksTxt;
	private: System::Windows::Forms::FlowLayoutPanel^ allBooksGrid;




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
			this->booksBackPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->allBooksGrid = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->booksTopPanel = (gcnew System::Windows::Forms::Panel());
			this->searchBooksTxt = (gcnew System::Windows::Forms::TextBox());
			this->booksBackPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->booksTopPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// booksBackPanel
			// 
			this->booksBackPanel->Controls->Add(this->panel1);
			this->booksBackPanel->Controls->Add(this->booksTopPanel);
			this->booksBackPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->booksBackPanel->Location = System::Drawing::Point(0, 0);
			this->booksBackPanel->Name = L"booksBackPanel";
			this->booksBackPanel->Size = System::Drawing::Size(1030, 800);
			this->booksBackPanel->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->allBooksGrid);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1030, 700);
			this->panel1->TabIndex = 1;
			// 
			// allBooksGrid
			// 
			this->allBooksGrid->BackColor = System::Drawing::SystemColors::Control;
			this->allBooksGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->allBooksGrid->Location = System::Drawing::Point(0, 0);
			this->allBooksGrid->Name = L"allBooksGrid";
			this->allBooksGrid->Size = System::Drawing::Size(1030, 700);
			this->allBooksGrid->TabIndex = 0;
			// 
			// booksTopPanel
			// 
			this->booksTopPanel->Controls->Add(this->searchBooksTxt);
			this->booksTopPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->booksTopPanel->Location = System::Drawing::Point(0, 0);
			this->booksTopPanel->Name = L"booksTopPanel";
			this->booksTopPanel->Size = System::Drawing::Size(1030, 100);
			this->booksTopPanel->TabIndex = 0;
			// 
			// searchBooksTxt
			// 
			this->searchBooksTxt->Font = (gcnew System::Drawing::Font(L"Noto Sans JP", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchBooksTxt->Location = System::Drawing::Point(810, 37);
			this->searchBooksTxt->Multiline = true;
			this->searchBooksTxt->Name = L"searchBooksTxt";
			this->searchBooksTxt->Size = System::Drawing::Size(189, 30);
			this->searchBooksTxt->TabIndex = 3;
			this->searchBooksTxt->Text = L"...";
			// 
			// BooksPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->booksBackPanel);
			this->Name = L"BooksPage";
			this->Size = System::Drawing::Size(1030, 800);
			this->Load += gcnew System::EventHandler(this, &BooksPage::BooksPage_Load);
			this->booksBackPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->booksTopPanel->ResumeLayout(false);
			this->booksTopPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void BooksPage_Load(System::Object^ sender, System::EventArgs^ e) {
			allBooksGrid->Controls->Clear();

			for (int i = 0; i < 10; i++) {
				ProductComponent^ component = gcnew ProductComponent;
				allBooksGrid->Controls->Add(component);
			}
		}
};
}
