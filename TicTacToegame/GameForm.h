#pragma once

#include "GameMap.h"
#include "Gamer.h"

#include <Windows.h>

namespace TicTacToegame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ???????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ??????????ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?????ToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ status;
	private: System::Windows::Forms::DataGridView^ dataGridView;


	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->???????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->??????????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?????ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->????ToolStripMenuItem,
					this->??????????ToolStripMenuItem, this->?????ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(423, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ????ToolStripMenuItem
			// 
			this->????ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->?????????ToolStripMenuItem,
					this->?????????ToolStripMenuItem, this->???????????ToolStripMenuItem
			});
			this->????ToolStripMenuItem->Name = L"????ToolStripMenuItem";
			this->????ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->????ToolStripMenuItem->Text = L"????";
			// 
			// ?????????ToolStripMenuItem
			// 
			this->?????????ToolStripMenuItem->Name = L"?????????ToolStripMenuItem";
			this->?????????ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->?????????ToolStripMenuItem->Text = L"????? ????";
			this->?????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::?????????ToolStripMenuItem_Click);
			// 
			// ?????????ToolStripMenuItem
			// 
			this->?????????ToolStripMenuItem->Name = L"?????????ToolStripMenuItem";
			this->?????????ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->?????????ToolStripMenuItem->Text = L"?????????";
			this->?????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::?????????ToolStripMenuItem_Click);
			// 
			// ???????????ToolStripMenuItem
			// 
			this->???????????ToolStripMenuItem->Name = L"???????????ToolStripMenuItem";
			this->???????????ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->???????????ToolStripMenuItem->Text = L"???/???? ????";
			this->???????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::???????????ToolStripMenuItem_Click);
			// 
			// ??????????ToolStripMenuItem
			// 
			this->??????????ToolStripMenuItem->Name = L"??????????ToolStripMenuItem";
			this->??????????ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->??????????ToolStripMenuItem->Text = L"? ?????????";
			this->??????????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::??????????ToolStripMenuItem_Click);
			// 
			// ?????ToolStripMenuItem
			// 
			this->?????ToolStripMenuItem->Name = L"?????ToolStripMenuItem";
			this->?????ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->?????ToolStripMenuItem->Text = L"?????";
			this->?????ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::?????ToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->status });
			this->statusStrip1->Location = System::Drawing::Point(0, 327);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(423, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// status
			// 
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(71, 17);
			this->status->Text = L"??? ??????:";
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 24);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(423, 303);
			this->dataGridView->TabIndex = 2;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GameForm::dataGridView_CellContentClick);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 349);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"Made FirePlanetStudio";
			this->Text = L"???? ????????-??????";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//???? ????
	public: int rows;
	public: int columns;
	public: int length;
	public: int selectedGameMode;
	private: Random^ rand;
	private: System::Media::SoundPlayer^ soundClick;
	private: System::Media::SoundPlayer^ soundEndGame;

		   //?????? ????
	private: void GameLogic();
	private: void Update();
	private: void NewGame();
	private: void StepAI();
	private: void UpdateGameGrid();
	private: void CreateGameGrid(Vector2);
	private: void SetPositionPlayer(Vector2);
		   //??????? ????
	private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ?????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ?????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ???????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ??????????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ?????ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}
