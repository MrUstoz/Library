#pragma once
#include "CategoryComponent.h"
#include "CreateBookWindow.h"
#include "ProductComponent.h"
#include "TopBookComponent.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LibraryDesktop {

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::UserControl
	{
	public:
		HomePage(void)
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
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ homeBackPanel;
	protected:
	private: System::Windows::Forms::Panel^ homeBottomPanel;


	private: System::Windows::Forms::Panel^ homeTopPanel;
	private: System::Windows::Forms::Button^ createBooksBtn;
	private: System::Windows::Forms::Panel^ homeRigthPanel;
	private: System::Windows::Forms::Panel^ homeLeftPanel;
	private: System::Windows::Forms::Label^ TopBooksLbl;
	private: System::Windows::Forms::Label^ CategoryLbl;


	private: System::Windows::Forms::FlowLayoutPanel^ AllCategoryGrid;






	private: System::Windows::Forms::FlowLayoutPanel^ allProductGrid;




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
			this->homeBackPanel = (gcnew System::Windows::Forms::Panel());
			this->homeBottomPanel = (gcnew System::Windows::Forms::Panel());
			this->homeRigthPanel = (gcnew System::Windows::Forms::Panel());
			this->AllCategoryGrid = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->CategoryLbl = (gcnew System::Windows::Forms::Label());
			this->homeLeftPanel = (gcnew System::Windows::Forms::Panel());
			this->allProductGrid = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->TopBooksLbl = (gcnew System::Windows::Forms::Label());
			this->homeTopPanel = (gcnew System::Windows::Forms::Panel());
			this->createBooksBtn = (gcnew System::Windows::Forms::Button());
			this->homeBackPanel->SuspendLayout();
			this->homeBottomPanel->SuspendLayout();
			this->homeRigthPanel->SuspendLayout();
			this->homeLeftPanel->SuspendLayout();
			this->homeTopPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// homeBackPanel
			// 
			this->homeBackPanel->Controls->Add(this->homeBottomPanel);
			this->homeBackPanel->Controls->Add(this->homeTopPanel);
			this->homeBackPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeBackPanel->Location = System::Drawing::Point(0, 0);
			this->homeBackPanel->Name = L"homeBackPanel";
			this->homeBackPanel->Size = System::Drawing::Size(1030, 800);
			this->homeBackPanel->TabIndex = 0;
			// 
			// homeBottomPanel
			// 
			this->homeBottomPanel->Controls->Add(this->homeRigthPanel);
			this->homeBottomPanel->Controls->Add(this->homeLeftPanel);
			this->homeBottomPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeBottomPanel->Location = System::Drawing::Point(0, 100);
			this->homeBottomPanel->Name = L"homeBottomPanel";
			this->homeBottomPanel->Size = System::Drawing::Size(1030, 700);
			this->homeBottomPanel->TabIndex = 1;
			// 
			// homeRigthPanel
			// 
			this->homeRigthPanel->Controls->Add(this->AllCategoryGrid);
			this->homeRigthPanel->Controls->Add(this->CategoryLbl);
			this->homeRigthPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeRigthPanel->Location = System::Drawing::Point(686, 0);
			this->homeRigthPanel->Name = L"homeRigthPanel";
			this->homeRigthPanel->Size = System::Drawing::Size(344, 700);
			this->homeRigthPanel->TabIndex = 1;
			// 
			// AllCategoryGrid
			// 
			this->AllCategoryGrid->BackColor = System::Drawing::SystemColors::Control;
			this->AllCategoryGrid->Location = System::Drawing::Point(9, 41);
			this->AllCategoryGrid->Name = L"AllCategoryGrid";
			this->AllCategoryGrid->Size = System::Drawing::Size(327, 643);
			this->AllCategoryGrid->TabIndex = 2;
			// 
			// CategoryLbl
			// 
			this->CategoryLbl->AutoSize = true;
			this->CategoryLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CategoryLbl->Location = System::Drawing::Point(117, 6);
			this->CategoryLbl->Name = L"CategoryLbl";
			this->CategoryLbl->Size = System::Drawing::Size(111, 27);
			this->CategoryLbl->TabIndex = 1;
			this->CategoryLbl->Text = L"Categories";
			// 
			// homeLeftPanel
			// 
			this->homeLeftPanel->Controls->Add(this->allProductGrid);
			this->homeLeftPanel->Controls->Add(this->TopBooksLbl);
			this->homeLeftPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->homeLeftPanel->Location = System::Drawing::Point(0, 0);
			this->homeLeftPanel->Name = L"homeLeftPanel";
			this->homeLeftPanel->Size = System::Drawing::Size(686, 700);
			this->homeLeftPanel->TabIndex = 0;
			// 
			// allProductGrid
			// 
			this->allProductGrid->BackColor = System::Drawing::SystemColors::Control;
			this->allProductGrid->Location = System::Drawing::Point(12, 41);
			this->allProductGrid->Name = L"allProductGrid";
			this->allProductGrid->Size = System::Drawing::Size(663, 643);
			this->allProductGrid->TabIndex = 3;
			// 
			// TopBooksLbl
			// 
			this->TopBooksLbl->AutoSize = true;
			this->TopBooksLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TopBooksLbl->Location = System::Drawing::Point(290, 6);
			this->TopBooksLbl->Name = L"TopBooksLbl";
			this->TopBooksLbl->Size = System::Drawing::Size(107, 27);
			this->TopBooksLbl->TabIndex = 0;
			this->TopBooksLbl->Text = L"Top Books";
			// 
			// homeTopPanel
			// 
			this->homeTopPanel->Controls->Add(this->createBooksBtn);
			this->homeTopPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->homeTopPanel->Location = System::Drawing::Point(0, 0);
			this->homeTopPanel->Name = L"homeTopPanel";
			this->homeTopPanel->Size = System::Drawing::Size(1030, 100);
			this->homeTopPanel->TabIndex = 0;
			// 
			// createBooksBtn
			// 
			this->createBooksBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->createBooksBtn->FlatAppearance->BorderSize = 0;
			this->createBooksBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->createBooksBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createBooksBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP Black", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->createBooksBtn->Location = System::Drawing::Point(918, 35);
			this->createBooksBtn->Name = L"createBooksBtn";
			this->createBooksBtn->Size = System::Drawing::Size(93, 31);
			this->createBooksBtn->TabIndex = 0;
			this->createBooksBtn->Text = L"create";
			this->createBooksBtn->UseVisualStyleBackColor = false;
			this->createBooksBtn->Click += gcnew System::EventHandler(this, &HomePage::createBooksBtn_Click);
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->homeBackPanel);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(1030, 800);
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			this->homeBackPanel->ResumeLayout(false);
			this->homeBottomPanel->ResumeLayout(false);
			this->homeRigthPanel->ResumeLayout(false);
			this->homeRigthPanel->PerformLayout();
			this->homeLeftPanel->ResumeLayout(false);
			this->homeLeftPanel->PerformLayout();
			this->homeTopPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e) {
		AllCategoryGrid->Controls->Clear();
		allProductGrid->Controls->Clear();

		for (int i = 0; i < 5; i++) {
			CategoryComponent^ component = gcnew CategoryComponent();
			AllCategoryGrid->Controls->Add(component);	

			TopBookComponent^ productComponent = gcnew TopBookComponent();
			allProductGrid->Controls->Add(productComponent);
		}
	}
	private: System::Void createBooksBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateBookWindow^ window = gcnew CreateBookWindow();
		window->ShowDialog();
	}
};
}
