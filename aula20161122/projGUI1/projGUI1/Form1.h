#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnGoGoGo;
	protected: 

	protected: 





	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbVerde;
	private: System::Windows::Forms::RadioButton^  rbVermelho;

	private: System::Windows::Forms::RadioButton^  rbAzul;





	private: System::Windows::Forms::CheckBox^  cbIdade;
	private: System::Windows::Forms::ComboBox^  cbComidas;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  cbName;

	private: System::Windows::Forms::TextBox^  textBox1;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnGoGoGo = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbVerde = (gcnew System::Windows::Forms::RadioButton());
			this->rbVermelho = (gcnew System::Windows::Forms::RadioButton());
			this->rbAzul = (gcnew System::Windows::Forms::RadioButton());
			this->cbIdade = (gcnew System::Windows::Forms::CheckBox());
			this->cbComidas = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbName = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGoGoGo
			// 
			this->btnGoGoGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGoGoGo->ForeColor = System::Drawing::Color::Blue;
			this->btnGoGoGo->Location = System::Drawing::Point(566, 283);
			this->btnGoGoGo->Name = L"btnGoGoGo";
			this->btnGoGoGo->Size = System::Drawing::Size(75, 23);
			this->btnGoGoGo->TabIndex = 0;
			this->btnGoGoGo->Text = L"Go Go Go";
			this->btnGoGoGo->UseVisualStyleBackColor = true;
			this->btnGoGoGo->Click += gcnew System::EventHandler(this, &Form1::btnGoGoGo_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(338, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(303, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbVerde);
			this->groupBox1->Controls->Add(this->rbVermelho);
			this->groupBox1->Controls->Add(this->rbAzul);
			this->groupBox1->Location = System::Drawing::Point(39, 145);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 132);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cores:";
			// 
			// rbVerde
			// 
			this->rbVerde->AutoSize = true;
			this->rbVerde->Location = System::Drawing::Point(6, 42);
			this->rbVerde->Name = L"rbVerde";
			this->rbVerde->Size = System::Drawing::Size(53, 17);
			this->rbVerde->TabIndex = 8;
			this->rbVerde->TabStop = true;
			this->rbVerde->Text = L"Verde";
			this->rbVerde->UseVisualStyleBackColor = true;
			// 
			// rbVermelho
			// 
			this->rbVermelho->AutoSize = true;
			this->rbVermelho->Location = System::Drawing::Point(6, 65);
			this->rbVermelho->Name = L"rbVermelho";
			this->rbVermelho->Size = System::Drawing::Size(69, 17);
			this->rbVermelho->TabIndex = 7;
			this->rbVermelho->TabStop = true;
			this->rbVermelho->Text = L"Vermelho";
			this->rbVermelho->UseVisualStyleBackColor = true;
			// 
			// rbAzul
			// 
			this->rbAzul->AutoSize = true;
			this->rbAzul->Location = System::Drawing::Point(6, 19);
			this->rbAzul->Name = L"rbAzul";
			this->rbAzul->Size = System::Drawing::Size(45, 17);
			this->rbAzul->TabIndex = 5;
			this->rbAzul->TabStop = true;
			this->rbAzul->Text = L"Azul";
			this->rbAzul->UseVisualStyleBackColor = true;
			// 
			// cbIdade
			// 
			this->cbIdade->AutoSize = true;
			this->cbIdade->Location = System::Drawing::Point(125, 112);
			this->cbIdade->Name = L"cbIdade";
			this->cbIdade->Size = System::Drawing::Size(53, 17);
			this->cbIdade->TabIndex = 13;
			this->cbIdade->Text = L"Idade";
			this->cbIdade->UseVisualStyleBackColor = true;
			// 
			// cbComidas
			// 
			this->cbComidas->DisplayMember = L"(none)";
			this->cbComidas->FormattingEnabled = true;
			this->cbComidas->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Peixe", L"Iscas", L"Pinguim", L"Foca", L"Outros"});
			this->cbComidas->Location = System::Drawing::Point(39, 283);
			this->cbComidas->Name = L"cbComidas";
			this->cbComidas->Size = System::Drawing::Size(200, 21);
			this->cbComidas->TabIndex = 12;
			this->cbComidas->Text = L"Selecione a Comida";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(33, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 32);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Aguardando...";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// cbName
			// 
			this->cbName->AutoSize = true;
			this->cbName->Location = System::Drawing::Point(39, 112);
			this->cbName->Name = L"cbName";
			this->cbName->Size = System::Drawing::Size(54, 17);
			this->cbName->TabIndex = 10;
			this->cbName->Text = L"Nome";
			this->cbName->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(602, 20);
			this->textBox1->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 337);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cbIdade);
			this->Controls->Add(this->cbComidas);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbName);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnGoGoGo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Meu Programa Loco";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cbComidas->SelectedIndex = 0;
		 }
	private: System::Void btnGoGoGo_Click(System::Object^  sender, System::EventArgs^  e) {
				 label1->Text = "Meu Tubarao: ";
				 if(cbName->Checked)
					 label1->Text = label1->Text + "Monstro, ";
				 if(cbIdade->Checked)
					 label1->Text = label1->Text + "tem 5 anos, ";
				 label1->Text = label1->Text + "gosta de comer " + cbComidas->SelectedItem->ToString() + ", ";

				 label1->Text = label1->Text + groupBox1->Text + ".";
				 if(rbVermelho->Checked)
					 label1->ForeColor = System::Drawing::Color::DarkRed;
				 if(rbVerde->Checked)
					 label1->ForeColor = System::Drawing::Color::ForestGreen;
				 if(rbAzul->Checked)
					 label1->ForeColor = System::Drawing::Color::MidnightBlue;
		 }

};
}

