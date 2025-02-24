#pragma once

namespace Gato {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de gato
	/// </summary>
	public ref class gato : public System::Windows::Forms::Form
	{
	public:
		gato(void)
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
		~gato()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Bot_1_f1;
	protected:
	private: System::Windows::Forms::Button^ Bot_2_f1;
	private: System::Windows::Forms::Button^ Bot_3_f1;
	private: System::Windows::Forms::Button^ Bot_3_f2;
	private: System::Windows::Forms::Button^ Bot_2_f2;
	private: System::Windows::Forms::Button^ Bot_1_f2;
	private: System::Windows::Forms::Button^ Bot_3_f3;
	private: System::Windows::Forms::Button^ Bot_2_f3;
	private: System::Windows::Forms::Button^ Bot_1_f3;
	private: System::Windows::Forms::Label^ Tex_turno;
	private: System::Windows::Forms::Label^ Tex_Simbolo;
	private: System::Windows::Forms::Label^ lab_GanadorX;

	private: System::Windows::Forms::PictureBox^ Box_rojo;

	private: System::Windows::Forms::PictureBox^ Box_verde;
	private: System::Windows::Forms::Label^ lab_GanadorO;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gato::typeid));
			this->Bot_1_f1 = (gcnew System::Windows::Forms::Button());
			this->Bot_2_f1 = (gcnew System::Windows::Forms::Button());
			this->Bot_3_f1 = (gcnew System::Windows::Forms::Button());
			this->Bot_3_f2 = (gcnew System::Windows::Forms::Button());
			this->Bot_2_f2 = (gcnew System::Windows::Forms::Button());
			this->Bot_1_f2 = (gcnew System::Windows::Forms::Button());
			this->Bot_3_f3 = (gcnew System::Windows::Forms::Button());
			this->Bot_2_f3 = (gcnew System::Windows::Forms::Button());
			this->Bot_1_f3 = (gcnew System::Windows::Forms::Button());
			this->Tex_turno = (gcnew System::Windows::Forms::Label());
			this->Tex_Simbolo = (gcnew System::Windows::Forms::Label());
			this->lab_GanadorX = (gcnew System::Windows::Forms::Label());
			this->Box_rojo = (gcnew System::Windows::Forms::PictureBox());
			this->Box_verde = (gcnew System::Windows::Forms::PictureBox());
			this->lab_GanadorO = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box_rojo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box_verde))->BeginInit();
			this->SuspendLayout();
			// 
			// Bot_1_f1
			// 
			this->Bot_1_f1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_1_f1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_1_f1->ForeColor = System::Drawing::Color::White;
			this->Bot_1_f1->Location = System::Drawing::Point(118, 54);
			this->Bot_1_f1->Name = L"Bot_1_f1";
			this->Bot_1_f1->Size = System::Drawing::Size(76, 67);
			this->Bot_1_f1->TabIndex = 0;
			this->Bot_1_f1->UseVisualStyleBackColor = false;
			this->Bot_1_f1->Click += gcnew System::EventHandler(this, &gato::Bot_1_f1_Click);
			// 
			// Bot_2_f1
			// 
			this->Bot_2_f1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_2_f1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_2_f1->ForeColor = System::Drawing::Color::White;
			this->Bot_2_f1->Location = System::Drawing::Point(216, 54);
			this->Bot_2_f1->Name = L"Bot_2_f1";
			this->Bot_2_f1->Size = System::Drawing::Size(76, 67);
			this->Bot_2_f1->TabIndex = 1;
			this->Bot_2_f1->UseVisualStyleBackColor = false;
			this->Bot_2_f1->Click += gcnew System::EventHandler(this, &gato::Bot_2_f1_Click);
			// 
			// Bot_3_f1
			// 
			this->Bot_3_f1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_3_f1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_3_f1->ForeColor = System::Drawing::Color::White;
			this->Bot_3_f1->Location = System::Drawing::Point(318, 54);
			this->Bot_3_f1->Name = L"Bot_3_f1";
			this->Bot_3_f1->Size = System::Drawing::Size(76, 67);
			this->Bot_3_f1->TabIndex = 2;
			this->Bot_3_f1->UseVisualStyleBackColor = false;
			this->Bot_3_f1->Click += gcnew System::EventHandler(this, &gato::Bot_3_f1_Click);
			// 
			// Bot_3_f2
			// 
			this->Bot_3_f2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_3_f2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_3_f2->ForeColor = System::Drawing::Color::White;
			this->Bot_3_f2->Location = System::Drawing::Point(318, 127);
			this->Bot_3_f2->Name = L"Bot_3_f2";
			this->Bot_3_f2->Size = System::Drawing::Size(76, 67);
			this->Bot_3_f2->TabIndex = 5;
			this->Bot_3_f2->UseVisualStyleBackColor = false;
			this->Bot_3_f2->Click += gcnew System::EventHandler(this, &gato::Bot_3_f2_Click);
			// 
			// Bot_2_f2
			// 
			this->Bot_2_f2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_2_f2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_2_f2->ForeColor = System::Drawing::Color::White;
			this->Bot_2_f2->Location = System::Drawing::Point(216, 127);
			this->Bot_2_f2->Name = L"Bot_2_f2";
			this->Bot_2_f2->Size = System::Drawing::Size(76, 67);
			this->Bot_2_f2->TabIndex = 4;
			this->Bot_2_f2->UseVisualStyleBackColor = false;
			this->Bot_2_f2->Click += gcnew System::EventHandler(this, &gato::Bot_2_f2_Click);
			// 
			// Bot_1_f2
			// 
			this->Bot_1_f2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_1_f2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_1_f2->ForeColor = System::Drawing::Color::White;
			this->Bot_1_f2->Location = System::Drawing::Point(118, 127);
			this->Bot_1_f2->Name = L"Bot_1_f2";
			this->Bot_1_f2->Size = System::Drawing::Size(76, 67);
			this->Bot_1_f2->TabIndex = 3;
			this->Bot_1_f2->UseVisualStyleBackColor = false;
			this->Bot_1_f2->Click += gcnew System::EventHandler(this, &gato::Bot_1_f2_Click);
			// 
			// Bot_3_f3
			// 
			this->Bot_3_f3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_3_f3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_3_f3->ForeColor = System::Drawing::Color::White;
			this->Bot_3_f3->Location = System::Drawing::Point(318, 200);
			this->Bot_3_f3->Name = L"Bot_3_f3";
			this->Bot_3_f3->Size = System::Drawing::Size(76, 67);
			this->Bot_3_f3->TabIndex = 8;
			this->Bot_3_f3->UseVisualStyleBackColor = false;
			this->Bot_3_f3->Click += gcnew System::EventHandler(this, &gato::Bot_3_f3_Click);
			// 
			// Bot_2_f3
			// 
			this->Bot_2_f3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_2_f3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_2_f3->ForeColor = System::Drawing::Color::White;
			this->Bot_2_f3->Location = System::Drawing::Point(216, 200);
			this->Bot_2_f3->Name = L"Bot_2_f3";
			this->Bot_2_f3->Size = System::Drawing::Size(76, 67);
			this->Bot_2_f3->TabIndex = 7;
			this->Bot_2_f3->UseVisualStyleBackColor = false;
			this->Bot_2_f3->Click += gcnew System::EventHandler(this, &gato::Bot_2_f3_Click);
			// 
			// Bot_1_f3
			// 
			this->Bot_1_f3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Bot_1_f3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bot_1_f3->ForeColor = System::Drawing::Color::White;
			this->Bot_1_f3->Location = System::Drawing::Point(118, 200);
			this->Bot_1_f3->Name = L"Bot_1_f3";
			this->Bot_1_f3->Size = System::Drawing::Size(76, 67);
			this->Bot_1_f3->TabIndex = 6;
			this->Bot_1_f3->UseVisualStyleBackColor = false;
			this->Bot_1_f3->Click += gcnew System::EventHandler(this, &gato::Bot_1_f3_Click);
			// 
			// Tex_turno
			// 
			this->Tex_turno->AutoSize = true;
			this->Tex_turno->Font = (gcnew System::Drawing::Font(L"Gloucester MT Extra Condensed", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tex_turno->Location = System::Drawing::Point(112, 9);
			this->Tex_turno->Name = L"Tex_turno";
			this->Tex_turno->Size = System::Drawing::Size(129, 32);
			this->Tex_turno->TabIndex = 9;
			this->Tex_turno->Text = L"Es el turno de:";
			// 
			// Tex_Simbolo
			// 
			this->Tex_Simbolo->AutoSize = true;
			this->Tex_Simbolo->Font = (gcnew System::Drawing::Font(L"Magneto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tex_Simbolo->Location = System::Drawing::Point(296, 11);
			this->Tex_Simbolo->Name = L"Tex_Simbolo";
			this->Tex_Simbolo->Size = System::Drawing::Size(40, 32);
			this->Tex_Simbolo->TabIndex = 10;
			this->Tex_Simbolo->Text = L"X";
			this->Tex_Simbolo->Click += gcnew System::EventHandler(this, &gato::Tex_Simbolo_Click);
			// 
			// lab_GanadorX
			// 
			this->lab_GanadorX->AutoSize = true;
			this->lab_GanadorX->BackColor = System::Drawing::Color::Red;
			this->lab_GanadorX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_GanadorX->Location = System::Drawing::Point(52, 104);
			this->lab_GanadorX->Name = L"lab_GanadorX";
			this->lab_GanadorX->Size = System::Drawing::Size(414, 64);
			this->lab_GanadorX->TabIndex = 11;
			this->lab_GanadorX->Text = L"HA GANADO X";
			this->lab_GanadorX->Visible = false;
			// 
			// Box_rojo
			// 
			this->Box_rojo->BackColor = System::Drawing::Color::Red;
			this->Box_rojo->Location = System::Drawing::Point(83, 46);
			this->Box_rojo->Name = L"Box_rojo";
			this->Box_rojo->Size = System::Drawing::Size(344, 226);
			this->Box_rojo->TabIndex = 12;
			this->Box_rojo->TabStop = false;
			this->Box_rojo->Visible = false;
			// 
			// Box_verde
			// 
			this->Box_verde->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Box_verde->Location = System::Drawing::Point(83, 46);
			this->Box_verde->Name = L"Box_verde";
			this->Box_verde->Size = System::Drawing::Size(344, 226);
			this->Box_verde->TabIndex = 13;
			this->Box_verde->TabStop = false;
			this->Box_verde->Visible = false;
			// 
			// lab_GanadorO
			// 
			this->lab_GanadorO->AutoSize = true;
			this->lab_GanadorO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lab_GanadorO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab_GanadorO->Location = System::Drawing::Point(45, 104);
			this->lab_GanadorO->Name = L"lab_GanadorO";
			this->lab_GanadorO->Size = System::Drawing::Size(421, 64);
			this->lab_GanadorO->TabIndex = 14;
			this->lab_GanadorO->Text = L"HA GANADO O";
			this->lab_GanadorO->Visible = false;
			this->lab_GanadorO->Click += gcnew System::EventHandler(this, &gato::label2_Click);
			// 
			// gato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(538, 314);
			this->Controls->Add(this->lab_GanadorO);
			this->Controls->Add(this->Box_verde);
			this->Controls->Add(this->Box_rojo);
			this->Controls->Add(this->lab_GanadorX);
			this->Controls->Add(this->Tex_Simbolo);
			this->Controls->Add(this->Tex_turno);
			this->Controls->Add(this->Bot_3_f3);
			this->Controls->Add(this->Bot_2_f3);
			this->Controls->Add(this->Bot_1_f3);
			this->Controls->Add(this->Bot_3_f2);
			this->Controls->Add(this->Bot_2_f2);
			this->Controls->Add(this->Bot_1_f2);
			this->Controls->Add(this->Bot_3_f1);
			this->Controls->Add(this->Bot_2_f1);
			this->Controls->Add(this->Bot_1_f1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"gato";
			this->Text = L"Gato";
			this->Load += gcnew System::EventHandler(this, &gato::gato_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box_rojo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box_verde))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool b_bandera = true; // para cambiar entre X y O
		int i_linea = 0; // esto va a aumentar en el momento en que se cumpla una linea
		char C_casilla_valor1 ='a'; //se necesita un valor para saber que tipo es y asi saber que ganador
		char C_casilla_valor2 = 'a';
		char C_casilla_valor3 = 'a';
		char C_casilla_valor4 = 'a';
		char C_casilla_valor5 = 'a';
		char C_casilla_valor6 = 'a';
		char C_casilla_valor7 = 'a';
		char C_casilla_valor8 = 'a';
		char C_casilla_valor9 = 'a';

	private: System::Void gato_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Bot_1_f1_Click(System::Object^ sender, System::EventArgs^ e) {

	//todo el rollo de las 
	if (Tex_Simbolo->Text == "O") {
			b_bandera = false;
	}
	else {
		b_bandera = true;
	}

			Bot_1_f1->Enabled = false;

	if (i_linea == 1) {
		Bot_1_f1->Enabled = true;
	}


	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_1_f1->Text = "X";
		C_casilla_valor1 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_1_f1->Text = "O";
		C_casilla_valor1 = 'O';
	}


	// para ver el ganador
	comparacion();
}
private: System::Void Bot_2_f1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_2_f1->Enabled = false;

	if (i_linea == 1) {
		Bot_2_f1->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_2_f1->Text = "X";
		C_casilla_valor2 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_2_f1->Text = "O";
		C_casilla_valor2 = 'O';
	}

	comparacion();
}
private: System::Void Bot_3_f1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_3_f1->Enabled = false;

	if (i_linea == 1) {
		Bot_3_f1->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_3_f1->Text = "X";
		C_casilla_valor3 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_3_f1->Text = "O";
		C_casilla_valor3 = 'O';
	}

	comparacion();
}
private: System::Void Bot_1_f2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_1_f2->Enabled = false;

	if (i_linea == 1) {
		Bot_1_f2->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_1_f2->Text = "X";
		C_casilla_valor4 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_1_f2->Text = "O";
		C_casilla_valor4 = 'O';
	}
	// para ver el ganador
	comparacion();
}
private: System::Void Bot_2_f2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_2_f2->Enabled = false;

	if (i_linea == 1) {
		Bot_2_f2->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_2_f2->Text = "X";
		C_casilla_valor5 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_2_f2->Text = "O";
		C_casilla_valor5 = 'O';
	}

	comparacion();
}
private: System::Void Bot_3_f2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_3_f2->Enabled = false;

	if (i_linea == 1) {
		Bot_3_f2->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_3_f2->Text = "X";
		C_casilla_valor6 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_3_f2->Text = "O";
		C_casilla_valor6 = 'O';
	}

	comparacion();
}
private: System::Void Bot_1_f3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_1_f3->Enabled = false;

	if (i_linea == 1) {
		Bot_3_f1->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_1_f3->Text = "X";
		C_casilla_valor7  = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_1_f3->Text = "O";
		C_casilla_valor7 = 'O';
	}
	// para ver el ganador
	comparacion();
}
private: System::Void Bot_2_f3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_2_f3->Enabled = false;

	if (i_linea == 1) {
		Bot_3_f2->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_2_f3->Text = "X";
		C_casilla_valor8 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_2_f3->Text = "O";
		C_casilla_valor8 = 'O';
	}

	comparacion();
}
private: System::Void Bot_3_f3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Tex_Simbolo->Text == "O") {
		b_bandera = false;
	}
	else {
		b_bandera = true;
	}

	Bot_3_f3->Enabled = false;

	if (i_linea == 1) {
		Bot_3_f3->Enabled = true;
	}
	if (b_bandera == true) {
		Tex_Simbolo->Text = "O";
		Bot_3_f3->Text = "X";
		C_casilla_valor9 = 'X';
	}
	else {
		b_bandera = false;
		Tex_Simbolo->Text = "X";
		Bot_3_f3->Text = "O";
		C_casilla_valor9 = 'O';
	}

	comparacion();
}
private: System::Void Tex_Simbolo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}


	   private: System::Void comparacion() {

		   //horizontal

		   if (Bot_1_f1->Text == Bot_2_f1->Text && Bot_2_f1->Text == Bot_3_f1->Text) {
			   if (Bot_1_f1->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_1_f1->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
			   //deberia aparecer el texto de ganaste

		   }//elseif
		   else if (Bot_1_f2->Text == Bot_2_f2->Text && Bot_2_f2->Text == Bot_3_f2->Text) { 
			   if (Bot_1_f2->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_1_f2->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   } //elseif
		   else if (Bot_1_f3->Text == Bot_2_f3->Text && Bot_2_f3->Text == Bot_3_f3->Text) { 
			   if (Bot_1_f3->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_1_f3->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   }//elseif

		   //vertical

		   else if (Bot_1_f1->Text == Bot_1_f2->Text && Bot_1_f2->Text == Bot_1_f3->Text) { 
			   if (Bot_1_f1->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_1_f1->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   }//elseif

		   else if (Bot_2_f1->Text == Bot_2_f2->Text && Bot_2_f2->Text == Bot_2_f3->Text) { 
			   if (Bot_2_f2->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_2_f2->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   }//elseif
		   else if (Bot_3_f1->Text == Bot_3_f2->Text && Bot_3_f2->Text == Bot_3_f3->Text) {
			   if (Bot_3_f2->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_3_f2->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   }//elseif

		   //diagonales

		   else if (Bot_1_f1->Text == Bot_2_f2->Text && Bot_2_f2->Text == Bot_3_f3->Text) {
			   if (Bot_1_f1->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_1_f1->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   }//elseif
		   else if (Bot_1_f3->Text == Bot_2_f2->Text && Bot_2_f2->Text == Bot_3_f1->Text) {
			   if (Bot_3_f1->Text == "O") {
				   lab_GanadorO->Visible = true;
				   Box_verde->Visible = true;
			   }
			   if (Bot_3_f1->Text == "X") {
				   lab_GanadorX->Visible = true;
				   Box_rojo->Visible = true;
			   }
		   }//elseif

		   //fin
	   }
};
}
