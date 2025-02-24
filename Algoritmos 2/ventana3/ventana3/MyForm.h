#pragma once

namespace ventana3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;






	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label_contra1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ check_A;
	private: System::Windows::Forms::CheckBox^ check_B;
	private: System::Windows::Forms::CheckBox^ check_C;
	private: System::Windows::Forms::RadioButton^ radio_A2;
	private: System::Windows::Forms::RadioButton^ radio_B2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label_contra1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->check_A = (gcnew System::Windows::Forms::CheckBox());
			this->check_B = (gcnew System::Windows::Forms::CheckBox());
			this->check_C = (gcnew System::Windows::Forms::CheckBox());
			this->radio_A2 = (gcnew System::Windows::Forms::RadioButton());
			this->radio_B2 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkCyan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(413, 73);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(132, 109);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Uy";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(365, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '#';
			this->textBox1->Size = System::Drawing::Size(198, 26);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkCyan;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 7));
			this->button2->ForeColor = System::Drawing::Color::Crimson;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(573, 32);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(58, 26);
			this->button2->TabIndex = 8;
			this->button2->Text = L"[X]";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label_contra1
			// 
			this->label_contra1->AutoSize = true;
			this->label_contra1->BackColor = System::Drawing::Color::GhostWhite;
			this->label_contra1->Location = System::Drawing::Point(267, 38);
			this->label_contra1->Name = L"label_contra1";
			this->label_contra1->Size = System::Drawing::Size(92, 20);
			this->label_contra1->TabIndex = 10;
			this->label_contra1->Text = L"Contraseña";
			this->label_contra1->Click += gcnew System::EventHandler(this, &MyForm::label_contra1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H" });
			this->comboBox1->Location = System::Drawing::Point(12, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 28);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// check_A
			// 
			this->check_A->AutoSize = true;
			this->check_A->Location = System::Drawing::Point(57, 156);
			this->check_A->Name = L"check_A";
			this->check_A->Size = System::Drawing::Size(46, 24);
			this->check_A->TabIndex = 12;
			this->check_A->Text = L"A";
			this->check_A->UseVisualStyleBackColor = true;
			this->check_A->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// check_B
			// 
			this->check_B->AutoSize = true;
			this->check_B->Location = System::Drawing::Point(57, 186);
			this->check_B->Name = L"check_B";
			this->check_B->Size = System::Drawing::Size(46, 24);
			this->check_B->TabIndex = 13;
			this->check_B->Text = L"B";
			this->check_B->UseVisualStyleBackColor = true;
			this->check_B->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_B_CheckedChanged);
			// 
			// check_C
			// 
			this->check_C->AutoSize = true;
			this->check_C->Location = System::Drawing::Point(57, 216);
			this->check_C->Name = L"check_C";
			this->check_C->Size = System::Drawing::Size(46, 24);
			this->check_C->TabIndex = 14;
			this->check_C->Text = L"C";
			this->check_C->UseVisualStyleBackColor = true;
			this->check_C->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_C_CheckedChanged);
			// 
			// radio_A2
			// 
			this->radio_A2->AutoSize = true;
			this->radio_A2->Location = System::Drawing::Point(33, 12);
			this->radio_A2->Name = L"radio_A2";
			this->radio_A2->Size = System::Drawing::Size(54, 24);
			this->radio_A2->TabIndex = 15;
			this->radio_A2->TabStop = true;
			this->radio_A2->Text = L"A2";
			this->radio_A2->UseVisualStyleBackColor = true;
			// 
			// radio_B2
			// 
			this->radio_B2->AutoSize = true;
			this->radio_B2->Location = System::Drawing::Point(33, 42);
			this->radio_B2->Name = L"radio_B2";
			this->radio_B2->Size = System::Drawing::Size(54, 24);
			this->radio_B2->TabIndex = 16;
			this->radio_B2->TabStop = true;
			this->radio_B2->Text = L"B2";
			this->radio_B2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radio_A2);
			this->panel1->Controls->Add(this->radio_B2);
			this->panel1->Location = System::Drawing::Point(125, 156);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(127, 100);
			this->panel1->TabIndex = 17;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Location = System::Drawing::Point(258, 156);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(127, 100);
			this->panel2->TabIndex = 18;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(33, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 24);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"A2";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(33, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 24);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"B2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(924, 284);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->check_C);
			this->Controls->Add(this->check_B);
			this->Controls->Add(this->check_A);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label_contra1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Objetos lokoZ";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}				//Antes se llamaba textbox, pero aqui lo que hace es que cuando el texto cambia
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		button2->Enabled = false;
		button2->Text = L"[X]";
	}//if
	else {
		button2->Enabled = true;
		button2->Text = L"[]";
	}
}						//validar click
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "ola") {
		button1->Enabled = true;
		button1->Text = L"Pikame >:D";
		label_contra1->Text = "Correcto";
	}
	else {
		button1->Enabled = false;
		button1->Text = L"Uy";
		label_contra1->Text = "Incorrecto :(";
	}
}
private: System::Void label_contra1_Click(System::Object^ sender, System::EventArgs^ e) { 
}

	   //combo box, en este hay varias opciones ya pre definidas
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}

	   //checkbox
	   //Aqui las variables son booleanas, que se usan para saber si estan check o nel
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void check_B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void check_C_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //radio button


};
}
