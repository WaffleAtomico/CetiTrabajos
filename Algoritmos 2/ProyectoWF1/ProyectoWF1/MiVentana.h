#pragma once

namespace ProyectoWF1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		
	
	/// <summary>
	/// Resumen de MiVentana
	/// </summary>
	public ref class MiVentana : public System::Windows::Forms::Form
	{
	

	public:
		
		MiVentana(void)
		{
			InitializeComponent();
			
		}
	protected:
		~MiVentana()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Copiar;
	private: System::Windows::Forms::TextBox^ tb_entrada;
	private: System::Windows::Forms::Label^ lb_Entrada;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_cadena;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_caracter;
	private: System::Windows::Forms::TextBox^ tb_caracterA;














	protected:

	protected:


		  
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Copiar = (gcnew System::Windows::Forms::Button());
			this->tb_entrada = (gcnew System::Windows::Forms::TextBox());
			this->lb_Entrada = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_cadena = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_caracter = (gcnew System::Windows::Forms::TextBox());
			this->tb_caracterA = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_Copiar
			// 
			this->btn_Copiar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_Copiar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Copiar->Location = System::Drawing::Point(76, 140);
			this->btn_Copiar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_Copiar->Name = L"btn_Copiar";
			this->btn_Copiar->Size = System::Drawing::Size(135, 69);
			this->btn_Copiar->TabIndex = 0;
			this->btn_Copiar->Text = L"Copiar";
			this->btn_Copiar->UseVisualStyleBackColor = false;
			this->btn_Copiar->Click += gcnew System::EventHandler(this, &MiVentana::btn_Aceptar_Click);
			// 
			// tb_entrada
			// 
			this->tb_entrada->Location = System::Drawing::Point(62, 85);
			this->tb_entrada->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_entrada->MaxLength = 8;
			this->tb_entrada->Name = L"tb_entrada";
			this->tb_entrada->Size = System::Drawing::Size(148, 26);
			this->tb_entrada->TabIndex = 1;
			// 
			// lb_Entrada
			// 
			this->lb_Entrada->AutoSize = true;
			this->lb_Entrada->Location = System::Drawing::Point(57, 60);
			this->lb_Entrada->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_Entrada->Name = L"lb_Entrada";
			this->lb_Entrada->Size = System::Drawing::Size(129, 20);
			this->lb_Entrada->TabIndex = 2;
			this->lb_Entrada->Text = L"Texto de entrada";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(237, 131);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Copia por cadena completa";
			// 
			// tb_cadena
			// 
			this->tb_cadena->Enabled = false;
			this->tb_cadena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cadena->Location = System::Drawing::Point(242, 155);
			this->tb_cadena->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_cadena->MaxLength = 8;
			this->tb_cadena->Name = L"tb_cadena";
			this->tb_cadena->Size = System::Drawing::Size(198, 26);
			this->tb_cadena->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(237, 226);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Copia caracter por caracter";
			// 
			// tb_caracter
			// 
			this->tb_caracter->Enabled = false;
			this->tb_caracter->Location = System::Drawing::Point(242, 251);
			this->tb_caracter->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_caracter->MaxLength = 8;
			this->tb_caracter->Name = L"tb_caracter";
			this->tb_caracter->Size = System::Drawing::Size(198, 26);
			this->tb_caracter->TabIndex = 5;
			// 
			// tb_caracterA
			// 
			this->tb_caracterA->Enabled = false;
			this->tb_caracterA->Location = System::Drawing::Point(462, 254);
			this->tb_caracterA->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_caracterA->Name = L"tb_caracterA";
			this->tb_caracterA->Size = System::Drawing::Size(42, 26);
			this->tb_caracterA->TabIndex = 7;
			// 
			// MiVentana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 317);
			this->Controls->Add(this->tb_caracterA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_caracter);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_cadena);
			this->Controls->Add(this->lb_Entrada);
			this->Controls->Add(this->tb_entrada);
			this->Controls->Add(this->btn_Copiar);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MiVentana";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MiVentana";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Se generan dos variables tipo String
		//Recordar que el simbolo "^" significa que se esta declarando un puntero.
		String^ str_cadena;
		String^ str_caracter;
		
		
		//Para el ejemplo se genera una variable tipo arreglo de caracteres.
		// ************ OJO ********************
		// el tipo de dato es "Char" y no "char"
		// *************************************
		Char str[15];
		
		// Primer forma copiando la cadena completa
		str_cadena = tb_entrada->Text;
		tb_cadena->Text = str_cadena;

		//Segunda forma copiando caracter por caracter
		for (int i = 0; i < tb_entrada->Text->Length; i++)
		{
			str[i] = tb_entrada->Text[i];
			str_caracter = str_caracter + str[i];
			
			// Esto es ejemplo de que se está accesando y comparando cada caracter del arreglo
			if (str[i] == 'a' || str[i] == 'A')
			{
				tb_caracterA->Text = Convert::ToString(str[i]);
			}
		}
		tb_caracter->Text = str_caracter;
	}
};
}
