#pragma once

namespace Examen3erparcial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Examen
	/// </summary>
	public ref class Examen : public System::Windows::Forms::Form
	{
	public:
		Examen(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Examen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ CB_compuertas;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ CB_A;
	private: System::Windows::Forms::ComboBox^ CB_B;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Lb_result;
	private: System::Windows::Forms::Button^ Bt_confirmar;
	private: System::Windows::Forms::PictureBox^ PB_NOT;
	private: System::Windows::Forms::PictureBox^ PB_AND;
	private: System::Windows::Forms::PictureBox^ PB_OR;
	private: System::Windows::Forms::PictureBox^ PB_XOR;
	private: System::Windows::Forms::PictureBox^ PB_NAND;
	private: System::Windows::Forms::PictureBox^ PB_NOR;
	private: System::Windows::Forms::Label^ label6;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Examen::typeid));
			this->CB_compuertas = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CB_A = (gcnew System::Windows::Forms::ComboBox());
			this->CB_B = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Lb_result = (gcnew System::Windows::Forms::Label());
			this->Bt_confirmar = (gcnew System::Windows::Forms::Button());
			this->PB_NOT = (gcnew System::Windows::Forms::PictureBox());
			this->PB_AND = (gcnew System::Windows::Forms::PictureBox());
			this->PB_OR = (gcnew System::Windows::Forms::PictureBox());
			this->PB_XOR = (gcnew System::Windows::Forms::PictureBox());
			this->PB_NAND = (gcnew System::Windows::Forms::PictureBox());
			this->PB_NOR = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_NOT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_AND))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_OR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_XOR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_NAND))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_NOR))->BeginInit();
			this->SuspendLayout();
			// 
			// CB_compuertas
			// 
			this->CB_compuertas->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CB_compuertas->FormattingEnabled = true;
			this->CB_compuertas->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"AND", L"OR", L"NAND", L"NOR", L"XOR", L"NOT" });
			this->CB_compuertas->Location = System::Drawing::Point(21, 130);
			this->CB_compuertas->Name = L"CB_compuertas";
			this->CB_compuertas->Size = System::Drawing::Size(121, 34);
			this->CB_compuertas->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Compuertas logicas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 48);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Elija la compuerta \r\nque va a usar";
			// 
			// CB_A
			// 
			this->CB_A->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline))));
			this->CB_A->FormattingEnabled = true;
			this->CB_A->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"0" });
			this->CB_A->Location = System::Drawing::Point(64, 200);
			this->CB_A->Name = L"CB_A";
			this->CB_A->Size = System::Drawing::Size(53, 47);
			this->CB_A->TabIndex = 3;
			// 
			// CB_B
			// 
			this->CB_B->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline))));
			this->CB_B->FormattingEnabled = true;
			this->CB_B->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"0" });
			this->CB_B->Location = System::Drawing::Point(63, 256);
			this->CB_B->Name = L"CB_B";
			this->CB_B->Size = System::Drawing::Size(54, 47);
			this->CB_B->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline))));
			this->label3->Location = System::Drawing::Point(12, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 39);
			this->label3->TabIndex = 5;
			this->label3->Text = L"A-";
			this->label3->Click += gcnew System::EventHandler(this, &Examen::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline))));
			this->label4->Location = System::Drawing::Point(12, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 39);
			this->label4->TabIndex = 6;
			this->label4->Text = L"B-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline))));
			this->label5->Location = System::Drawing::Point(13, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 39);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Resultado:";
			// 
			// Lb_result
			// 
			this->Lb_result->AutoSize = true;
			this->Lb_result->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lb_result->Location = System::Drawing::Point(167, 308);
			this->Lb_result->Name = L"Lb_result";
			this->Lb_result->Size = System::Drawing::Size(31, 39);
			this->Lb_result->TabIndex = 8;
			this->Lb_result->Text = L"0";
			// 
			// Bt_confirmar
			// 
			this->Bt_confirmar->BackColor = System::Drawing::Color::Yellow;
			this->Bt_confirmar->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline))));
			this->Bt_confirmar->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->Bt_confirmar->Location = System::Drawing::Point(146, 217);
			this->Bt_confirmar->Name = L"Bt_confirmar";
			this->Bt_confirmar->Size = System::Drawing::Size(149, 46);
			this->Bt_confirmar->TabIndex = 9;
			this->Bt_confirmar->Text = L"Confirmar";
			this->Bt_confirmar->UseVisualStyleBackColor = false;
			this->Bt_confirmar->Click += gcnew System::EventHandler(this, &Examen::button1_Click);
			// 
			// PB_NOT
			// 
			this->PB_NOT->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_NOT.ErrorImage")));
			this->PB_NOT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_NOT.Image")));
			this->PB_NOT->Location = System::Drawing::Point(254, 110);
			this->PB_NOT->Name = L"PB_NOT";
			this->PB_NOT->Size = System::Drawing::Size(109, 74);
			this->PB_NOT->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_NOT->TabIndex = 10;
			this->PB_NOT->TabStop = false;
			this->PB_NOT->Visible = false;
			// 
			// PB_AND
			// 
			this->PB_AND->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_AND.ErrorImage")));
			this->PB_AND->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_AND.Image")));
			this->PB_AND->Location = System::Drawing::Point(254, 110);
			this->PB_AND->Name = L"PB_AND";
			this->PB_AND->Size = System::Drawing::Size(109, 74);
			this->PB_AND->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_AND->TabIndex = 11;
			this->PB_AND->TabStop = false;
			this->PB_AND->Visible = false;
			// 
			// PB_OR
			// 
			this->PB_OR->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_OR.ErrorImage")));
			this->PB_OR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_OR.Image")));
			this->PB_OR->Location = System::Drawing::Point(254, 110);
			this->PB_OR->Name = L"PB_OR";
			this->PB_OR->Size = System::Drawing::Size(109, 74);
			this->PB_OR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_OR->TabIndex = 12;
			this->PB_OR->TabStop = false;
			this->PB_OR->Visible = false;
			// 
			// PB_XOR
			// 
			this->PB_XOR->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_XOR.ErrorImage")));
			this->PB_XOR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_XOR.Image")));
			this->PB_XOR->Location = System::Drawing::Point(254, 110);
			this->PB_XOR->Name = L"PB_XOR";
			this->PB_XOR->Size = System::Drawing::Size(109, 74);
			this->PB_XOR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_XOR->TabIndex = 13;
			this->PB_XOR->TabStop = false;
			this->PB_XOR->Visible = false;
			// 
			// PB_NAND
			// 
			this->PB_NAND->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_NAND.ErrorImage")));
			this->PB_NAND->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_NAND.Image")));
			this->PB_NAND->Location = System::Drawing::Point(254, 110);
			this->PB_NAND->Name = L"PB_NAND";
			this->PB_NAND->Size = System::Drawing::Size(109, 74);
			this->PB_NAND->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_NAND->TabIndex = 14;
			this->PB_NAND->TabStop = false;
			this->PB_NAND->Visible = false;
			// 
			// PB_NOR
			// 
			this->PB_NOR->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_NOR.ErrorImage")));
			this->PB_NOR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_NOR.Image")));
			this->PB_NOR->Location = System::Drawing::Point(254, 110);
			this->PB_NOR->Name = L"PB_NOR";
			this->PB_NOR->Size = System::Drawing::Size(109, 74);
			this->PB_NOR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_NOR->TabIndex = 15;
			this->PB_NOR->TabStop = false;
			this->PB_NOR->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(250, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 24);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Su simbolo seria:";
			// 
			// Examen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(403, 403);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->PB_NOR);
			this->Controls->Add(this->PB_NAND);
			this->Controls->Add(this->PB_XOR);
			this->Controls->Add(this->PB_OR);
			this->Controls->Add(this->PB_AND);
			this->Controls->Add(this->PB_NOT);
			this->Controls->Add(this->Bt_confirmar);
			this->Controls->Add(this->Lb_result);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->CB_B);
			this->Controls->Add(this->CB_A);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CB_compuertas);
			this->MaximizeBox = false;
			this->Name = L"Examen";
			this->Text = L"Examen";
			this->Load += gcnew System::EventHandler(this, &Examen::Examen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_NOT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_AND))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_OR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_XOR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_NAND))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_NOR))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Examen_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*  AND ---
		OR ---
		NAND 
		NOR  
		XOR ---
		NOT---
	*/
	if (CB_compuertas->SelectedItem == "NOT") {
		PB_NOT->Visible = true; // si jalaaaaaa
		PB_AND->Visible = false;
		PB_OR->Visible = false;
		PB_NOR->Visible = false;
		PB_NAND->Visible = false;
		PB_XOR->Visible = false;
		if (CB_A->SelectedItem == "0") {
			Lb_result->Text = "1";
			}
		if (CB_A->SelectedItem == "1") {
			Lb_result->Text = "0";
		}
		
	} 

	if (CB_compuertas->SelectedItem == "AND") {
		PB_AND->Visible = true;
		PB_NOT->Visible = false;
		PB_OR->Visible = false;
		PB_NOR->Visible = false;
		PB_NAND->Visible = false;
		PB_XOR->Visible = false;
		if (CB_A->SelectedItem == "1" && CB_B->SelectedItem == "1") {
			Lb_result->Text = "1";
		}
		else{
			Lb_result->Text = "0";
		}
	}
	if (CB_compuertas->SelectedItem == "OR") {
		PB_OR->Visible = true;
		PB_NOT->Visible = false;
		PB_AND->Visible = false;
		PB_NOR->Visible = false;
		PB_NAND->Visible = false;
		PB_XOR->Visible = false;
		if (CB_A->SelectedItem == "0" && CB_B->SelectedItem == "0") {
			Lb_result->Text = "0";
		}
		else {
			Lb_result->Text = "1";
		}
	}
	if (CB_compuertas->SelectedItem == "NOR") {
		PB_NOR->Visible = true;
		PB_NOT->Visible = false;
		PB_AND->Visible = false;
		PB_OR->Visible = false;
		PB_NAND->Visible = false;
		PB_XOR->Visible = false;
		if (CB_A->SelectedItem == "0" && CB_B->SelectedItem == "0") {
			Lb_result->Text = "1";
		}
		else {
			Lb_result->Text = "0";
		}
	}
	if (CB_compuertas->SelectedItem == "NAND") {
		PB_NAND->Visible = true;
		PB_NOT->Visible = false;
		PB_AND->Visible = false;
		PB_OR->Visible = false;
		PB_NOR->Visible = false;
		PB_XOR->Visible = false;
		if (CB_A->SelectedItem == "1" && CB_B->SelectedItem == "1") {
			Lb_result->Text = "0";
		}
		else {
			Lb_result->Text = "1";
		}
	}
	if (CB_compuertas->SelectedItem == "XOR") {
		PB_XOR->Visible = true;
		PB_NOT->Visible = false;
		PB_AND->Visible = false;
		PB_OR->Visible = false;
		PB_NOR->Visible = false;
		PB_NAND->Visible = false;
		if ((CB_A->SelectedItem == "0" && CB_B->SelectedItem == "0") || (CB_A->SelectedItem == "1" && CB_B->SelectedItem == "1")) {
			Lb_result->Text = "0";
		}
		else {
			Lb_result->Text = "1";
		}
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
