#pragma once

namespace Conversion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Convertidor
	/// </summary>
	public ref class Convertidor : public System::Windows::Forms::Form
	{
	public:
		Convertidor(void)
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
		~Convertidor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rb_deci1;
	protected:

	private: System::Windows::Forms::RadioButton^ rb_bin1;
	private: System::Windows::Forms::RadioButton^ rb_hex1;


	private: System::Windows::Forms::Label^ lb_titulo;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rb_deci2;
	private: System::Windows::Forms::RadioButton^ rb_bin2;
	private: System::Windows::Forms::RadioButton^ rb_hex2;
	private: System::Windows::Forms::TextBox^ tex_entrada;
	private: System::Windows::Forms::Label^ lb_result;
	private: System::Windows::Forms::Label^ lb_info;

	private: System::Windows::Forms::Button^ bt_convertir;
	protected:

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
			this->rb_deci1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_bin1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_hex1 = (gcnew System::Windows::Forms::RadioButton());
			this->lb_titulo = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_deci2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_bin2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb_hex2 = (gcnew System::Windows::Forms::RadioButton());
			this->tex_entrada = (gcnew System::Windows::Forms::TextBox());
			this->lb_result = (gcnew System::Windows::Forms::Label());
			this->lb_info = (gcnew System::Windows::Forms::Label());
			this->bt_convertir = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// rb_deci1
			// 
			this->rb_deci1->AutoSize = true;
			this->rb_deci1->Location = System::Drawing::Point(24, 35);
			this->rb_deci1->Name = L"rb_deci1";
			this->rb_deci1->Size = System::Drawing::Size(150, 36);
			this->rb_deci1->TabIndex = 0;
			this->rb_deci1->Text = L"Decimal";
			this->rb_deci1->UseVisualStyleBackColor = true;
			// 
			// rb_bin1
			// 
			this->rb_bin1->AutoSize = true;
			this->rb_bin1->Location = System::Drawing::Point(326, 35);
			this->rb_bin1->Name = L"rb_bin1";
			this->rb_bin1->Size = System::Drawing::Size(137, 36);
			this->rb_bin1->TabIndex = 1;
			this->rb_bin1->TabStop = true;
			this->rb_bin1->Text = L"Binario";
			this->rb_bin1->UseVisualStyleBackColor = true;
			// 
			// rb_hex1
			// 
			this->rb_hex1->AutoSize = true;
			this->rb_hex1->Location = System::Drawing::Point(599, 35);
			this->rb_hex1->Name = L"rb_hex1";
			this->rb_hex1->Size = System::Drawing::Size(216, 36);
			this->rb_hex1->TabIndex = 2;
			this->rb_hex1->TabStop = true;
			this->rb_hex1->Text = L"Hexadecimal";
			this->rb_hex1->UseVisualStyleBackColor = true;
			// 
			// lb_titulo
			// 
			this->lb_titulo->AutoSize = true;
			this->lb_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_titulo->Location = System::Drawing::Point(237, 9);
			this->lb_titulo->Name = L"lb_titulo";
			this->lb_titulo->Size = System::Drawing::Size(331, 64);
			this->lb_titulo->TabIndex = 3;
			this->lb_titulo->Text = L"Convertidor ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rb_deci1);
			this->groupBox1->Controls->Add(this->rb_bin1);
			this->groupBox1->Controls->Add(this->rb_hex1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(815, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Valor incial";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rb_deci2);
			this->groupBox2->Controls->Add(this->rb_bin2);
			this->groupBox2->Controls->Add(this->rb_hex2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 227);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(815, 100);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Valor a convertir";
			// 
			// rb_deci2
			// 
			this->rb_deci2->AutoSize = true;
			this->rb_deci2->Location = System::Drawing::Point(24, 35);
			this->rb_deci2->Name = L"rb_deci2";
			this->rb_deci2->Size = System::Drawing::Size(150, 36);
			this->rb_deci2->TabIndex = 0;
			this->rb_deci2->TabStop = true;
			this->rb_deci2->Text = L"Decimal";
			this->rb_deci2->UseVisualStyleBackColor = true;
			// 
			// rb_bin2
			// 
			this->rb_bin2->AutoSize = true;
			this->rb_bin2->Location = System::Drawing::Point(326, 35);
			this->rb_bin2->Name = L"rb_bin2";
			this->rb_bin2->Size = System::Drawing::Size(137, 36);
			this->rb_bin2->TabIndex = 1;
			this->rb_bin2->TabStop = true;
			this->rb_bin2->Text = L"Binario";
			this->rb_bin2->UseVisualStyleBackColor = true;
			// 
			// rb_hex2
			// 
			this->rb_hex2->AutoSize = true;
			this->rb_hex2->Location = System::Drawing::Point(599, 35);
			this->rb_hex2->Name = L"rb_hex2";
			this->rb_hex2->Size = System::Drawing::Size(216, 36);
			this->rb_hex2->TabIndex = 2;
			this->rb_hex2->TabStop = true;
			this->rb_hex2->Text = L"Hexadecimal";
			this->rb_hex2->UseVisualStyleBackColor = true;
			// 
			// tex_entrada
			// 
			this->tex_entrada->Location = System::Drawing::Point(49, 382);
			this->tex_entrada->MaxLength = 5;
			this->tex_entrada->Name = L"tex_entrada";
			this->tex_entrada->Size = System::Drawing::Size(162, 26);
			this->tex_entrada->TabIndex = 6;
			// 
			// lb_result
			// 
			this->lb_result->AutoSize = true;
			this->lb_result->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lb_result->ForeColor = System::Drawing::Color::DarkGreen;
			this->lb_result->Location = System::Drawing::Point(425, 373);
			this->lb_result->Name = L"lb_result";
			this->lb_result->Size = System::Drawing::Size(402, 34);
			this->lb_result->TabIndex = 7;
			this->lb_result->Text = L"Aqui aparecera el resultado";
			// 
			// lb_info
			// 
			this->lb_info->AutoSize = true;
			this->lb_info->Location = System::Drawing::Point(12, 330);
			this->lb_info->Name = L"lb_info";
			this->lb_info->Size = System::Drawing::Size(300, 40);
			this->lb_info->TabIndex = 8;
			this->lb_info->Text = L"Escribe tu valor a convertir (max 5 digitos)\r\nSi este no concuerda, no va a funci"
				L"onar ";
			// 
			// bt_convertir
			// 
			this->bt_convertir->Location = System::Drawing::Point(227, 382);
			this->bt_convertir->Name = L"bt_convertir";
			this->bt_convertir->Size = System::Drawing::Size(94, 26);
			this->bt_convertir->TabIndex = 9;
			this->bt_convertir->Text = L"Convertir";
			this->bt_convertir->UseVisualStyleBackColor = true;
			this->bt_convertir->Click += gcnew System::EventHandler(this, &Convertidor::bt_convertir_Click);
			// 
			// Convertidor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 443);
			this->Controls->Add(this->bt_convertir);
			this->Controls->Add(this->lb_info);
			this->Controls->Add(this->lb_result);
			this->Controls->Add(this->tex_entrada);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_titulo);
			this->Name = L"Convertidor";
			this->Text = L"Convertidor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}*/
	private: System::Void bt_convertir_Click(System::Object^ sender, System::EventArgs^ e) {
		//primero los obvios y redundantes
		if (rb_bin1->Checked == true && rb_bin2->Checked == true) {
			lb_result->Text = tex_entrada->Text;
		}
		if (rb_hex1->Checked == true && rb_hex2->Checked == true) {
			lb_result->Text = tex_entrada->Text;
		}
		if (rb_deci1->Checked == true && rb_deci2->Checked == true) {
			lb_result->Text = tex_entrada->Text;
		}

		//listo
		//Ahora los binarios a decimales y viceversa
		
		//decimal a binario
		if (rb_deci1->Checked == true && rb_bin2->Checked == true) {
			int decimal[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
			int bin[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
			
			Char cadena[16] = { ' ', ' ',' ',' ', ' ',' ', ' ', ' ',' ', ' ', ' ',' ',' ', ' ',' ',' '};
			String^ str_caracter;
			decimal[0] = System::Convert::ToInt32(tex_entrada->Text);

			if (decimal[0] == 1) {
				lb_result->Text = "1";
			}
			else {
				for (int i = 0; decimal[i] != 1; i++) { 
					decimal[i + 1] = decimal[i] / 2;
					bin[i] = decimal[i] % 2;
					if (decimal[i + 1] == 1) {
						bin[i + 1] = 1;
					}
				}
			}
			for (int a = 15; a >= 0; a--) {
				cadena[a] = System::Convert::ToChar(bin[a]);
			}
			for (int i = 0; i < tex_entrada->Text->Length; i++) {
				cadena[i] = tex_entrada->Text[i];
				str_caracter = str_caracter + cadena[i];
			}
		}
		//binario a decimal
		if (rb_bin1->Checked == true && rb_deci2->Checked == true) {
			char binarios[5];
			int acumulo;
			int longitud = tex_entrada->Text->Length;
			int a = 0;
			for (int i = longitud; i == 0; i--) {
				binarios[i] = tex_entrada->Text[a];
				a++;
			}
			switch (longitud)
			{
				case 5: //cabe resaltar que sera la posicion 4 la maxima
					if (tex_entrada->Text[4] == '1') {
						acumulo = +(1 * (2 * 2 * 2 * 2));
					}
					
					
				case 4: //Posicion 3
					if (tex_entrada->Text[4] == '1') {
						acumulo = +(1 * (2 * 2 * 2 ));
					}

					
				case 3: //Posicion 2
					if (tex_entrada->Text[4] == '1') {
						acumulo = +(1 * (2 * 2));
					}

				case 2: //Posicion 1
					if (tex_entrada->Text[4] == '1') {
						acumulo = +2;
					}

					break;
				case 1: //Posicion 0
					if (tex_entrada->Text[4] == '1') {
						acumulo = +0;
					}

					break;
			default:
				break;
			}
			lb_result->Text = System::Convert::ToString(acumulo);
		}
	}
};
}

