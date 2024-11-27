#pragma once
#include "HomePage.h"
#include "BooksPage.h"

namespace LibraryDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ backPanel;
	protected:
	private: System::Windows::Forms::Panel^ switchPanel;
	private: System::Windows::Forms::Panel^ controlPanel;
	private: System::Windows::Forms::Label^ dashboardLbl;
	private: System::Windows::Forms::Button^ ExitBtn;

	private: System::Windows::Forms::Button^ booksBtn;
	private: System::Windows::Forms::Button^ homeBtn;


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
			this->backPanel = (gcnew System::Windows::Forms::Panel());
			this->switchPanel = (gcnew System::Windows::Forms::Panel());
			this->controlPanel = (gcnew System::Windows::Forms::Panel());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->booksBtn = (gcnew System::Windows::Forms::Button());
			this->homeBtn = (gcnew System::Windows::Forms::Button());
			this->dashboardLbl = (gcnew System::Windows::Forms::Label());
			this->backPanel->SuspendLayout();
			this->controlPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// backPanel
			// 
			this->backPanel->Controls->Add(this->switchPanel);
			this->backPanel->Controls->Add(this->controlPanel);
			this->backPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->backPanel->Location = System::Drawing::Point(0, 0);
			this->backPanel->Name = L"backPanel";
			this->backPanel->Size = System::Drawing::Size(1280, 800);
			this->backPanel->TabIndex = 0;
			// 
			// switchPanel
			// 
			this->switchPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->switchPanel->Location = System::Drawing::Point(250, 0);
			this->switchPanel->Name = L"switchPanel";
			this->switchPanel->Size = System::Drawing::Size(1030, 800);
			this->switchPanel->TabIndex = 1;
			// 
			// controlPanel
			// 
			this->controlPanel->Controls->Add(this->ExitBtn);
			this->controlPanel->Controls->Add(this->booksBtn);
			this->controlPanel->Controls->Add(this->homeBtn);
			this->controlPanel->Controls->Add(this->dashboardLbl);
			this->controlPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->controlPanel->Location = System::Drawing::Point(0, 0);
			this->controlPanel->Name = L"controlPanel";
			this->controlPanel->Size = System::Drawing::Size(250, 800);
			this->controlPanel->TabIndex = 0;
			// 
			// ExitBtn
			// 
			this->ExitBtn->FlatAppearance->BorderSize = 0;
			this->ExitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ExitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitBtn->Location = System::Drawing::Point(5, 738);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(240, 50);
			this->ExitBtn->TabIndex = 3;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExitBtn->UseVisualStyleBackColor = true;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MainWindow::ExitBtn_Click);
			// 
			// booksBtn
			// 
			this->booksBtn->FlatAppearance->BorderSize = 0;
			this->booksBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->booksBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->booksBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->booksBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->booksBtn->Location = System::Drawing::Point(5, 147);
			this->booksBtn->Name = L"booksBtn";
			this->booksBtn->Size = System::Drawing::Size(240, 50);
			this->booksBtn->TabIndex = 2;
			this->booksBtn->Text = L"Books";
			this->booksBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->booksBtn->UseVisualStyleBackColor = true;
			this->booksBtn->Click += gcnew System::EventHandler(this, &MainWindow::booksBtn_Click);
			// 
			// homeBtn
			// 
			this->homeBtn->FlatAppearance->BorderSize = 0;
			this->homeBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->homeBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->homeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homeBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans JP SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->homeBtn->Location = System::Drawing::Point(5, 89);
			this->homeBtn->Name = L"homeBtn";
			this->homeBtn->Size = System::Drawing::Size(240, 50);
			this->homeBtn->TabIndex = 1;
			this->homeBtn->Text = L"Home";
			this->homeBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->homeBtn->UseVisualStyleBackColor = true;
			this->homeBtn->Click += gcnew System::EventHandler(this, &MainWindow::homeBtn_Click);
			// 
			// dashboardLbl
			// 
			this->dashboardLbl->AutoSize = true;
			this->dashboardLbl->Font = (gcnew System::Drawing::Font(L"Noto Sans JP Black", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dashboardLbl->Location = System::Drawing::Point(37, 20);
			this->dashboardLbl->Name = L"dashboardLbl";
			this->dashboardLbl->Size = System::Drawing::Size(176, 42);
			this->dashboardLbl->TabIndex = 0;
			this->dashboardLbl->Text = L"Dashboard";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->ClientSize = System::Drawing::Size(1280, 800);
			this->Controls->Add(this->backPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainWindow";
			this->backPanel->ResumeLayout(false);
			this->controlPanel->ResumeLayout(false);
			this->controlPanel->PerformLayout();
			this->ResumeLayout(false);

		}
	#pragma endregion
		private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		private: System::Void homeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			HomePage^ page = gcnew HomePage();
			switchPanel->Controls->Clear();
			switchPanel->Controls->Add(page);
		}

		private: System::Void booksBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			BooksPage^ page = gcnew BooksPage();
			switchPanel->Controls->Clear();
			switchPanel->Controls->Add(page);
		}
};
}
