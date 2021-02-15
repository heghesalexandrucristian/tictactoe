#pragma once

namespace tictactoe {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ b1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(56, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(795, 90);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Silver;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(277, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(287, 55);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Tic Tac Toe";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 119);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(881, 517);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(483, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(391, 507);
			this->panel4->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->button11);
			this->panel6->Controls->Add(this->button10);
			this->panel6->Location = System::Drawing::Point(23, 295);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(351, 200);
			this->panel6->TabIndex = 2;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(3, 108);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(341, 71);
			this->button11->TabIndex = 4;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(3, 16);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(341, 71);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(23, 14);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(351, 200);
			this->panel5->TabIndex = 1;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(202, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 45);
			this->label4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(202, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 45);
			this->label3->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"\"AI\"";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->b1);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(474, 507);
			this->panel3->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(315, 326);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 150);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(159, 326);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 150);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(3, 326);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 150);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(315, 170);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 150);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(159, 170);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 150);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(3, 170);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 150);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(315, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 150);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(159, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 150);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::White;
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(3, 14);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(150, 150);
			this->b1->TabIndex = 0;
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::b1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(905, 648);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Boolean checker;  //TO CHECK IF IS THE TURN OF PLAYER OR "AI"

		
#pragma endregion
		int fill_matrix(int matrix[3][3]) {          // need to make it global and just add values to it
			if (b1->Text == "X") matrix[0][0] = 1;
			if (b1->Text == "0") matrix[0][0] = 10;
			if (button2->Text == "X") matrix[0][1] = 1;
			if (button2->Text == "O") matrix[0][1] = 10;
			if (button3->Text == "X") matrix[0][2] = 1;
			if (button3->Text == "O") matrix[0][2] = 10;
			if (button4->Text == "X") matrix[1][0] = 1;
			if (button4->Text == "O") matrix[1][0] = 10;
			if (button5->Text == "X") matrix[1][1] = 1;
			if (button5->Text == "O") matrix[1][1] = 10;
			if (button6->Text == "X") matrix[1][2] = 1;
			if (button6->Text == "O") matrix[1][2] = 10;
			if (button7->Text == "X") matrix[2][0] = 1;
			if (button7->Text == "O") matrix[2][0] = 10;
			if (button8->Text == "X") matrix[2][1] = 1;
			if (button8->Text == "O") matrix[2][1] = 10;
			if (button9->Text == "X") matrix[2][2] = 1;
			if (button9->Text == "O") matrix[2][2] = 10;
			return matrix[3][3];

		}

		void Enable_False()
		{
			b1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;

		}
		void AI() {        // this is A JOKE I HATE MYSELF
			int matrix[3][3] = { {0,0,0},
							     {0,0,0},
							     {0,0,0}
			};

			fill_matrix(matrix);
			
			//if(checker= true && ())


			if (checker == true && b1->Text == "X" && button5->Enabled==true) {
	
				button5->Text = "O";
				checker = false;
				button5->Enabled = false;


			}
			if (checker == true && button3->Text == "X" && button5->Enabled == true) {
				button5->Text = "O";
				checker = false;
				button5->Enabled = false;


			}
			if (checker == true && button7->Text == "X" && button5->Enabled == true) {

				button5->Text = "O";
				checker = false;
				button5->Enabled = false;


			}
			if (checker == true && button9->Text == "X" && button5->Enabled == true) {
				button5->Text = "O";
				checker = false;
				button5->Enabled = false;


			}

			if (checker == true && matrix[2][0] +matrix[2][1]+matrix[2][2]==2) {
				if (matrix[2][0] == 0) {
					button7->Text = "O";
					checker = false;
					button7->Enabled = false;
				}
				if (matrix[2][1] == 0) {
					button8->Text = "O";
					checker = false;
					button8->Enabled = false;
				}
				if (matrix[2][2] == 0) {
					button9->Text = "O";
					checker = false;
					button9->Enabled = false;
				}
			}
			if (checker == true && matrix[1][0] + matrix[1][1] + matrix[1][2] == 2) {
				if (matrix[1][0] == 0) {
					button4->Text = "O";
					checker = false;
					button4->Enabled = false;
				}
				if (matrix[1][1] == 0) {
					button5->Text = "O";
					checker = false;
					button5->Enabled = false;
				}
				if (matrix[1][2] == 0) {
					button6->Text = "O";
					checker = false;
					button6->Enabled = false;
				}
			}
			if (checker == true && matrix[0][0] + matrix[0][1] + matrix[0][2] == 2) {
				if (matrix[0][0] == 0 ) {
					b1->Text = "O";
					checker = false;
					b1->Enabled = false;
				}
				if (matrix[0][1] == 0 ) {
					button2->Text = "O";
					checker = false;
					button2->Enabled = false;
				}
				if (matrix[0][2] == 0) {
					button2->Text = "O";
					checker = false;
					button2->Enabled = false;
				}
			}
			if (checker == true && matrix[0][0] + matrix[1][0] + matrix[2][0] == 2) {
				if (matrix[0][0] == 0) {
					b1->Text = "O";
					checker = false;
					b1->Enabled = false;
				}
				if (matrix[1][0] == 0) {
					button3->Text = "O";
					checker = false;
					button3->Enabled = false;
				}
				if (matrix[2][0] == 0) {
					button7->Text = "O";
					checker = false;
					button7->Enabled = false;
				}
			}
			if (checker == true && matrix[0][1] + matrix[1][1] + matrix[2][1] == 2) {
				if (matrix[0][1] == 0) {
					button2->Text = "O";
					checker = false;
					button2->Enabled = false;
				}
				if (matrix[1][1] == 0) {
					button4->Text = "O";
					checker = false;
					button4->Enabled = false;
				}
				if (matrix[2][1] == 0) {
					button8->Text = "O";
					checker = false;
					button8->Enabled = false;
				}
			}
			if (checker == true && matrix[0][2] + matrix[1][2] + matrix[2][2] == 2) {
				if (matrix[0][2] == 0) {
					button3->Text = "O";
					checker = false;
					button3->Enabled = false;
				}
				if (matrix[1][2] == 0) {
					button6->Text = "O";
					checker = false;
					button6->Enabled = false;
				}
				if (matrix[2][2] == 0) {
					button9->Text = "O";
					checker = false;
					button9->Enabled = false;
				}
			}
			if (checker == true && matrix[0][0] + matrix[1][1] + matrix[2][2] == 2) {
				if (matrix[0][0] == 0) {
					b1->Text = "O";
					checker = false;
					b1->Enabled = false;
				}
				if (matrix[1][1] == 0) {
					button5->Text = "O";
					checker = false;
					button5->Enabled = false;
				}
				if (matrix[2][2] == 0) {
					button9->Text = "O";
					checker = false;
					button9->Enabled = false;
				}
			}
			if (checker == true && matrix[0][1] == 1 || matrix[1][0] == 1 || matrix[2][1] == 1 || matrix[1][2] == 1 || matrix[1][1] == 1) {

				if (b1->Enabled == true && checker == true && b1->Enabled == true) {
					b1->Text = "O";
					checker = false;
					b1->Enabled = false;
				}
				if (button3->Enabled == true && checker == true && button3->Enabled == true) {
					button3->Text = "O";
					checker = false;
					button3->Enabled = false;
				}
				if (button7->Enabled == true && checker == true && button7->Enabled == true) {
					button7->Text = "O";
					checker = false;
					button7->Enabled = false;
				}

				if (button9->Enabled == true && checker == true && button9->Enabled == true) {
					button9->Text = "O";
					checker = false;
					button9->Enabled = false;
				}


			}


			//if (checker == true && button7->Text == "X" && button9->Text =="X") {

					//button8->Text = "O";
					//checker = false;
				//	button8->Enabled = false;
			
			//}
		}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
		
private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b1->Text = "X";
		checker = true;
		b1->Enabled = false;
		AI();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button2->Text = "X";
		checker = true;
		button2->Enabled = false;
		AI();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button3->Text = "X";
		checker = true;
		button3->Enabled = false;
		AI();
	}	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button4->Text = "X";
		checker = true;
		button4->Enabled = false;
		AI();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button5->Text = "X";
		checker = true;
		button5->Enabled = false;
		AI();
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button6->Text = "X";
		checker = true;
		button6->Enabled = false;
		AI();
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button7->Text = "X";
		checker = true;
		button7->Enabled = false;
		AI();
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button8->Text = "X";
		checker = true;
		button8->Enabled = false;
		AI();
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button9->Text = "X";
		checker = true;
		button9->Enabled = false;
		AI();
	}
}

};
}
