//Jordano Baer USF ID: U83262692
#pragma once
#include "secondForm.h"
#include <iostream>
#include <vector>

namespace MagicSquare {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::NumericUpDown^  btn9;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::NumericUpDown^  btn6;

	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::NumericUpDown^  btn8;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::NumericUpDown^  btn3;

	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::NumericUpDown^  btn7;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::NumericUpDown^  btn5;

	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::NumericUpDown^  btn4;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::NumericUpDown^  btn2;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::NumericUpDown^  btn1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  sol_btn;
	private: System::Windows::Forms::Button^  quit_btn;
	private: System::Windows::Forms::Button^  clear_btn;

	private: System::Windows::Forms::NumericUpDown^  sum_box;
	private: System::Windows::Forms::Label^  sum_label;
	private: System::Windows::Forms::Label^  win_label;
	private: System::Windows::Forms::Label^  clock_label;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  sum_box2;
	private: System::Windows::Forms::NumericUpDown^  sum_box3;
	private: System::Windows::Forms::NumericUpDown^  sum_box4;
	private: System::Windows::Forms::NumericUpDown^  sum_box5;
	private: System::Windows::Forms::NumericUpDown^  sum_box6;
	private: System::Windows::Forms::NumericUpDown^  sum_box7;
	private: System::Windows::Forms::NumericUpDown^  sum_box8;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->btn9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btn6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->btn8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btn3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->btn7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btn5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btn4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->sol_btn = (gcnew System::Windows::Forms::Button());
			this->quit_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->sum_box = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_label = (gcnew System::Windows::Forms::Label());
			this->win_label = (gcnew System::Windows::Forms::Label());
			this->clock_label = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sum_box2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_box3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_box4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_box5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_box6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_box7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->sum_box8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel1->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn9))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn6))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn8))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn3))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn7))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn5))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box8))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(55, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(587, 456);
			this->panel1->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LawnGreen;
			this->panel8->Controls->Add(this->btn9);
			this->panel8->Location = System::Drawing::Point(402, 306);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(162, 109);
			this->panel8->TabIndex = 5;
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(20, 40);
			this->btn9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(120, 20);
			this->btn9->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LawnGreen;
			this->panel5->Controls->Add(this->btn6);
			this->panel5->Location = System::Drawing::Point(402, 159);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(162, 109);
			this->panel5->TabIndex = 5;
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(20, 40);
			this->btn6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(120, 20);
			this->btn6->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::LawnGreen;
			this->panel9->Controls->Add(this->btn8);
			this->panel9->Location = System::Drawing::Point(218, 306);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(162, 109);
			this->panel9->TabIndex = 4;
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(20, 40);
			this->btn8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(120, 20);
			this->btn8->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LawnGreen;
			this->panel4->Controls->Add(this->btn3);
			this->panel4->Location = System::Drawing::Point(402, 13);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(162, 109);
			this->panel4->TabIndex = 2;
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(20, 40);
			this->btn3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(120, 20);
			this->btn3->TabIndex = 1;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::LawnGreen;
			this->panel10->Controls->Add(this->btn7);
			this->panel10->Location = System::Drawing::Point(18, 306);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(162, 109);
			this->panel10->TabIndex = 3;
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(20, 40);
			this->btn7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(120, 20);
			this->btn7->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LawnGreen;
			this->panel6->Controls->Add(this->btn5);
			this->panel6->Location = System::Drawing::Point(218, 159);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(162, 109);
			this->panel6->TabIndex = 4;
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(20, 40);
			this->btn5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(120, 20);
			this->btn5->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::LawnGreen;
			this->panel7->Controls->Add(this->btn4);
			this->panel7->Location = System::Drawing::Point(18, 159);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(162, 109);
			this->panel7->TabIndex = 3;
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(20, 40);
			this->btn4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(120, 20);
			this->btn4->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LawnGreen;
			this->panel3->Controls->Add(this->btn2);
			this->panel3->Location = System::Drawing::Point(218, 13);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(162, 109);
			this->panel3->TabIndex = 1;
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(20, 40);
			this->btn2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(120, 20);
			this->btn2->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LawnGreen;
			this->panel2->Controls->Add(this->btn1);
			this->panel2->Location = System::Drawing::Point(18, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(162, 109);
			this->panel2->TabIndex = 0;
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(20, 40);
			this->btn1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(120, 20);
			this->btn1->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// sol_btn
			// 
			this->sol_btn->Location = System::Drawing::Point(771, 249);
			this->sol_btn->Name = L"sol_btn";
			this->sol_btn->Size = System::Drawing::Size(75, 23);
			this->sol_btn->TabIndex = 1;
			this->sol_btn->Text = L"Solution";
			this->sol_btn->UseVisualStyleBackColor = true;
			this->sol_btn->Click += gcnew System::EventHandler(this, &MyForm::sol_btn_Click);
			// 
			// quit_btn
			// 
			this->quit_btn->Location = System::Drawing::Point(771, 347);
			this->quit_btn->Name = L"quit_btn";
			this->quit_btn->Size = System::Drawing::Size(75, 23);
			this->quit_btn->TabIndex = 2;
			this->quit_btn->Text = L"Quit";
			this->quit_btn->UseVisualStyleBackColor = true;
			this->quit_btn->Click += gcnew System::EventHandler(this, &MyForm::quit_btn_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->Location = System::Drawing::Point(771, 296);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(75, 23);
			this->clear_btn->TabIndex = 3;
			this->clear_btn->Text = L"Clear";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Click += gcnew System::EventHandler(this, &MyForm::clear_btn_Click);
			// 
			// sum_box
			// 
			this->sum_box->Location = System::Drawing::Point(672, 57);
			this->sum_box->Name = L"sum_box";
			this->sum_box->Size = System::Drawing::Size(42, 20);
			this->sum_box->TabIndex = 5;
			this->sum_box->Visible = false;
			// 
			// sum_label
			// 
			this->sum_label->AutoSize = true;
			this->sum_label->Location = System::Drawing::Point(683, 32);
			this->sum_label->Name = L"sum_label";
			this->sum_label->Size = System::Drawing::Size(31, 13);
			this->sum_label->TabIndex = 6;
			this->sum_label->Text = L"Sum:";
			// 
			// win_label
			// 
			this->win_label->AutoSize = true;
			this->win_label->ForeColor = System::Drawing::Color::Red;
			this->win_label->Location = System::Drawing::Point(755, 514);
			this->win_label->Name = L"win_label";
			this->win_label->Size = System::Drawing::Size(48, 13);
			this->win_label->TabIndex = 7;
			this->win_label->Text = L"You win!";
			this->win_label->Visible = false;
			// 
			// clock_label
			// 
			this->clock_label->AutoSize = true;
			this->clock_label->Location = System::Drawing::Point(793, 203);
			this->clock_label->Name = L"clock_label";
			this->clock_label->Size = System::Drawing::Size(22, 13);
			this->clock_label->TabIndex = 8;
			this->clock_label->Text = L"0:0";
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 514);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(465, 52);
			this->label1->TabIndex = 9;
			this->label1->Text = L"*To win the game, the sum of every row, every column, and the two diagonals shoud"
				L" be identical.\r\n*Fill the squares with numbers from 1 to 9.\r\n*Don\'t use duplicat"
				L"e numbers.\r\n\r\n";
			// 
			// sum_box2
			// 
			this->sum_box2->Location = System::Drawing::Point(672, 203);
			this->sum_box2->Name = L"sum_box2";
			this->sum_box2->Size = System::Drawing::Size(42, 20);
			this->sum_box2->TabIndex = 10;
			this->sum_box2->Visible = false;
			// 
			// sum_box3
			// 
			this->sum_box3->Location = System::Drawing::Point(672, 350);
			this->sum_box3->Name = L"sum_box3";
			this->sum_box3->Size = System::Drawing::Size(42, 20);
			this->sum_box3->TabIndex = 11;
			this->sum_box3->Visible = false;
			// 
			// sum_box4
			// 
			this->sum_box4->Location = System::Drawing::Point(672, 466);
			this->sum_box4->Name = L"sum_box4";
			this->sum_box4->Size = System::Drawing::Size(42, 20);
			this->sum_box4->TabIndex = 12;
			this->sum_box4->Visible = false;
			// 
			// sum_box5
			// 
			this->sum_box5->Location = System::Drawing::Point(524, 474);
			this->sum_box5->Name = L"sum_box5";
			this->sum_box5->Size = System::Drawing::Size(42, 20);
			this->sum_box5->TabIndex = 13;
			this->sum_box5->Visible = false;
			// 
			// sum_box6
			// 
			this->sum_box6->Location = System::Drawing::Point(334, 474);
			this->sum_box6->Name = L"sum_box6";
			this->sum_box6->Size = System::Drawing::Size(42, 20);
			this->sum_box6->TabIndex = 14;
			this->sum_box6->Visible = false;
			// 
			// sum_box7
			// 
			this->sum_box7->Location = System::Drawing::Point(131, 474);
			this->sum_box7->Name = L"sum_box7";
			this->sum_box7->Size = System::Drawing::Size(42, 20);
			this->sum_box7->TabIndex = 15;
			this->sum_box7->Visible = false;
			// 
			// sum_box8
			// 
			this->sum_box8->Location = System::Drawing::Point(12, 474);
			this->sum_box8->Name = L"sum_box8";
			this->sum_box8->Size = System::Drawing::Size(42, 20);
			this->sum_box8->TabIndex = 16;
			this->sum_box8->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 618);
			this->Controls->Add(this->sum_box8);
			this->Controls->Add(this->sum_box7);
			this->Controls->Add(this->sum_box6);
			this->Controls->Add(this->sum_box5);
			this->Controls->Add(this->sum_box4);
			this->Controls->Add(this->sum_box3);
			this->Controls->Add(this->sum_box2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->clock_label);
			this->Controls->Add(this->win_label);
			this->Controls->Add(this->sum_label);
			this->Controls->Add(this->sum_box);
			this->Controls->Add(this->clear_btn);
			this->Controls->Add(this->quit_btn);
			this->Controls->Add(this->sol_btn);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Magic Cube by Jordano Baer";
			this->panel1->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn9))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn6))->EndInit();
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn8))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn3))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn7))->EndInit();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn5))->EndInit();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn4))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn2))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum_box8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

System::Boolean solution = false;
System::Boolean win = false;
System::Boolean showWin = false;
int min = 0;
int sec = 0;
int total_sec = 0;

//solution button
private: System::Void sol_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	solution = true;
	timer2->Start();
}

 
//quit button
private: System::Void quit_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

//clear button
private: System::Void clear_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	timer2->Stop();
	//Change the buttons
	btn1->Value = 0;
	btn2->Value = 0;
	btn3->Value = 0;
	btn4->Value = 0;
	btn5->Value = 0;
	btn6->Value = 0;
	btn7->Value = 0;
	btn8->Value = 0;
	btn9->Value = 0;
	
	//Change the sum boxes
	sum_box->Value = 0;
	sum_box2->Value = 0;
	sum_box3->Value = 0;
	sum_box4->Value = 0;
	sum_box5->Value = 0;
	sum_box6->Value = 0;
	sum_box7->Value = 0;
	sum_box8->Value = 0;

	sum_box->Visible = false;
	sum_box2->Visible = false;
	sum_box3->Visible = false;
	sum_box4->Visible = false;
	sum_box5->Visible = false;
	sum_box6->Visible = false;
	sum_box7->Visible = false;
	sum_box8->Visible = false;


	solution = false;
	win = false;
	total_sec = 0;
	showWin = false;
}

private: System::Void play_Sound() {
	System::Media::SystemSounds::Beep->Play();
}

private: System::Void show_Dialog() {
	win = false;
	showWin = true;
	secondForm ^ form = gcnew secondForm;
	form->ShowDialog();

}

//Check for a number that is already in the square
private: System::Void check_Duplicate() {
	int i;
	int j;
	int buttons[9] = {int(btn1->Value), int(btn2->Value), int(btn3->Value), int(btn4->Value), int(btn5->Value), int(btn6->Value), int(btn7->Value), int(btn8->Value), int(btn9->Value) };
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (buttons[i] == buttons[j] && (buttons[i] != 0) && (i != j)) {
				play_Sound();
			}
		}
	}

}

//Main timer
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	check_Duplicate();

	//Check if the player won
	if (win && !showWin) {
		show_Dialog();
	}

	//display the minutes and seconds
	if (!win && !solution) {

		sec = total_sec % 60;
		min = total_sec / 60;

		clock_label->Text = Convert::ToString(min) + ":" + Convert::ToString(sec);
		total_sec++;
	}
	
	System::Decimal row1 = btn1->Value + btn2->Value + btn3->Value;
	System::Decimal row2 = btn4->Value + btn5->Value + btn6->Value;
	System::Decimal row3 = btn7->Value + btn8->Value + btn9->Value;
	System::Decimal col1 = btn1->Value + btn4->Value + btn7->Value;
	System::Decimal col2 = btn2->Value + btn5->Value + btn8->Value;
	System::Decimal col3 = btn3->Value + btn6->Value + btn9->Value;
	System::Decimal diagonal1 = btn1->Value + btn5->Value + btn9->Value;
	System::Decimal diagonal2 = btn3->Value + btn5->Value + btn7->Value;

	//Calculate Sum
	//first row
	if (btn1->Value > 0 && btn2->Value > 0 && btn3->Value > 0) {
		sum_box->Value = btn1->Value + btn2->Value + btn3->Value;
		row1 = sum_box->Value;
		sum_box->Visible = true;
	}
	//second row
	if (btn4->Value > 0 && btn5->Value > 0 && btn6->Value > 0) {
		sum_box2->Value = btn4->Value + btn5->Value + btn6->Value;
		row2 = sum_box2->Value;
		sum_box2->Visible = true;
	}
	//third row
	 if (btn7->Value > 0 && btn8->Value > 0 && btn9->Value > 0) {
		sum_box3->Value = btn7->Value + btn8->Value + btn9->Value;
		row3 = sum_box3->Value;
		sum_box3->Visible = true;
	}
	//first column
	if (btn1->Value > 0 && btn4->Value > 0 && btn7->Value > 0) {
		sum_box7->Value = btn1->Value + btn4->Value + btn7->Value;
		col1 = sum_box7->Value;
		sum_box7->Visible = true;
	}
	//second column
	if (btn2->Value > 0 && btn5->Value > 0 && btn8->Value > 0) {
		sum_box6->Value = btn2->Value + btn5->Value + btn8->Value;
		col2 = sum_box6->Value;
		sum_box6->Visible = true;
	}
	//third column
	if (btn3->Value > 0 && btn6->Value > 0 && btn9->Value > 0) {
		sum_box5->Value = btn3->Value + btn6->Value + btn9->Value;
		col3 = sum_box5->Value;
		sum_box5->Visible = true;
	}
	//diagonal1
	if (btn1->Value > 0 && btn5->Value > 0 && btn9->Value > 0) {
		sum_box4->Value = btn1->Value + btn5->Value + btn9->Value;
		diagonal1 = sum_box4->Value;
		sum_box4->Visible = true;
	}
	//diagonal2
	if (btn3->Value > 0 && btn5->Value > 0 && btn7->Value > 0) {
		sum_box8->Value = btn3->Value + btn5->Value + btn7->Value;
		diagonal2 = sum_box8->Value;
		sum_box8->Visible = true;
	}

	//Check if the player won without  pressing the solution button
	if ((col1 == col2) && (col1 == col3) && (col1 == row1) && (col1 == row2) && (col1 == row3) && (col1 == diagonal1) && (col1 == diagonal2) && (col1 > 0) && (!solution)) {
		win = true;
		win_label->Visible = true;
	}
	else {
		win_label->Visible = false;
	}
	

}

//timer to show the solution step by step
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (btn1->Value != 6) {
		btn1->Value = 6;
	}
	else if (btn2->Value != 1) {
		btn2->Value = 1;
	}
	else if (btn3->Value != 8) {
		btn3->Value = 8;
	}
	else if (btn4->Value != 7) {
		btn4->Value = 7;
	}
	else if (btn5->Value != 5) {
		btn5->Value = 5;
	}
	else if (btn6->Value != 3) {
		btn6->Value = 3;
	}
	else if (btn7->Value != 2) {
		btn7->Value = 2;
	}
	else if (btn8->Value != 9) {
		btn8->Value = 9;
	}
	else if (btn9->Value != 4) {
		btn9->Value = 4;
		
	}

}
};
}
