#pragma once

namespace Ventana10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ventanilla
	/// </summary>
	public ref class Ventanilla : public System::Windows::Forms::Form
	{
	public:
		Ventanilla(void)
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
		~Ventanilla()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ Timer_1;
	protected:
	private: System::Windows::Forms::Button^ Bot_timeretc;
	private: System::Windows::Forms::TextBox^ texb_timer;

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ PiBo_Rojo;

	private:

		//Variables

		float i_tiempo = 0.00;
	private: System::Windows::Forms::TextBox^ texb_opp2;
	private: System::Windows::Forms::Button^ Bot_suma;
	private: System::Windows::Forms::TextBox^ texb_opp1;
	private: System::Windows::Forms::TextBox^ texb_result;
		   bool b_bandera = true;

		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Timer_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Bot_timeretc = (gcnew System::Windows::Forms::Button());
			this->texb_timer = (gcnew System::Windows::Forms::TextBox());
			this->PiBo_Rojo = (gcnew System::Windows::Forms::PictureBox());
			this->texb_opp2 = (gcnew System::Windows::Forms::TextBox());
			this->Bot_suma = (gcnew System::Windows::Forms::Button());
			this->texb_opp1 = (gcnew System::Windows::Forms::TextBox());
			this->texb_result = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PiBo_Rojo))->BeginInit();
			this->SuspendLayout();
			// 
			// Timer_1
			// 
			this->Timer_1->Interval = 1000;
			this->Timer_1->Tick += gcnew System::EventHandler(this, &Ventanilla::Timer_1_Tick);
			// 
			// Bot_timeretc
			// 
			this->Bot_timeretc->Location = System::Drawing::Point(182, 31);
			this->Bot_timeretc->Name = L"Bot_timeretc";
			this->Bot_timeretc->Size = System::Drawing::Size(66, 81);
			this->Bot_timeretc->TabIndex = 0;
			this->Bot_timeretc->Text = L"X";
			this->Bot_timeretc->UseVisualStyleBackColor = true;
			this->Bot_timeretc->Click += gcnew System::EventHandler(this, &Ventanilla::Bot_timeretc_Click);
			// 
			// texb_timer
			// 
			this->texb_timer->Location = System::Drawing::Point(13, 58);
			this->texb_timer->Name = L"texb_timer";
			this->texb_timer->Size = System::Drawing::Size(100, 26);
			this->texb_timer->TabIndex = 1;
			// 
			// PiBo_Rojo
			// 
			this->PiBo_Rojo->BackColor = System::Drawing::Color::Red;
			this->PiBo_Rojo->Location = System::Drawing::Point(137, 30);
			this->PiBo_Rojo->Name = L"PiBo_Rojo";
			this->PiBo_Rojo->Size = System::Drawing::Size(39, 82);
			this->PiBo_Rojo->TabIndex = 2;
			this->PiBo_Rojo->TabStop = false;
			// 
			// texb_opp2
			// 
			this->texb_opp2->Location = System::Drawing::Point(13, 156);
			this->texb_opp2->Name = L"texb_opp2";
			this->texb_opp2->Size = System::Drawing::Size(100, 26);
			this->texb_opp2->TabIndex = 4;
			// 
			// Bot_suma
			// 
			this->Bot_suma->Location = System::Drawing::Point(119, 156);
			this->Bot_suma->Name = L"Bot_suma";
			this->Bot_suma->Size = System::Drawing::Size(57, 26);
			this->Bot_suma->TabIndex = 5;
			this->Bot_suma->Text = L"X";
			this->Bot_suma->UseVisualStyleBackColor = true;
			this->Bot_suma->Click += gcnew System::EventHandler(this, &Ventanilla::Bot_suma_Click);
			// 
			// texb_opp1
			// 
			this->texb_opp1->Location = System::Drawing::Point(13, 124);
			this->texb_opp1->MaxLength = 5;
			this->texb_opp1->Name = L"texb_opp1";
			this->texb_opp1->Size = System::Drawing::Size(100, 26);
			this->texb_opp1->TabIndex = 3;
			// 
			// texb_result
			// 
			this->texb_result->Location = System::Drawing::Point(12, 188);
			this->texb_result->Name = L"texb_result";
			this->texb_result->Size = System::Drawing::Size(236, 26);
			this->texb_result->TabIndex = 6;
			this->texb_result->TextChanged += gcnew System::EventHandler(this, &Ventanilla::texb_result_TextChanged);
			// 
			// Ventanilla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 244);
			this->Controls->Add(this->texb_result);
			this->Controls->Add(this->Bot_suma);
			this->Controls->Add(this->texb_opp2);
			this->Controls->Add(this->texb_opp1);
			this->Controls->Add(this->PiBo_Rojo);
			this->Controls->Add(this->texb_timer);
			this->Controls->Add(this->Bot_timeretc);
			this->MaximizeBox = false;
			this->Name = L"Ventanilla";
			this->Text = L"Ventanilla";
			this->Load += gcnew System::EventHandler(this, &Ventanilla::Ventanilla_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PiBo_Rojo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ventanilla_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Bot_timeretc_Click(System::Object^ sender, System::EventArgs^ e) {
		Timer_1->Enabled = true;
	}
	private: System::Void Timer_1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		i_tiempo+=1.1;


		//texb_timer->text = i_tiempo;	hay does maneras para hacerlo
		//Forma larga
		//texb_timer->Text = System::Convert::ToString(i_tiempo);
		
		
		//forma corta, solo para convertir a strings
		texb_timer->Text = "" + i_tiempo;
		if (b_bandera) {
			PiBo_Rojo->BackColor = SystemColors::Highlight;
			b_bandera = false;
		}
		else {
			PiBo_Rojo->BackColor = System::Drawing::Color::Red;
			b_bandera =true;
		}
		
	}
	private: System::Void texb_result_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void Bot_suma_Click(System::Object^ sender, System::EventArgs^ e) {
	int A, B, C;

	if (texb_opp1->Text->Length == 0 || texb_opp2->Text->Length == 0) {
		// escribir y borrar todo
		MessageBox::Show("Ponle algo", "Error");
	}

	
	//declaracion de arreglos
	int arr[5];
	arr[0] = System::Convert::ToInt32(texb_opp1->Text);
	arr[1] = System::Convert::ToInt32(texb_opp1->Text);
	arr[2] = arr[0] + arr[1];
	// esto si se puede hacer 
	arr[3] = texb_opp1->Text[0];

	//para hacer un arreglo de caracteres(fallido)
	//char *arrc = new char[10];
	


	A = System::Convert::ToInt32(texb_opp1->Text);
	B = System::Convert::ToInt32(texb_opp2->Text);
	C = A + B;
	A = texb_opp1->Text->Length;
	texb_result->Text = "" + C + " char de A " + A + " conversion " + arr[3];
	
	//resultado fallido pq suelta un booleano
	//texb_result->Text = System::Convert::ToString(arrc);
	
}
};
}
