#pragma once

namespace Productointegrador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de restaurante
	/// </summary>
	public ref class restaurante : public System::Windows::Forms::Form
	{
	public:
		restaurante(void)
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
		~restaurante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ Rb_ent_2;


	private: System::Windows::Forms::PictureBox^ pick_usuario;
	private: System::Windows::Forms::RadioButton^ Rb_ent_4;

	private: System::Windows::Forms::RadioButton^ Rb_ent_3;


	private: System::Windows::Forms::RadioButton^ Rb_ent_1;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ bt_pay;

	private: System::Windows::Forms::NumericUpDown^ NUD_usuarios;





	private: System::Windows::Forms::Label^ lb_entradas;
	private: System::Windows::Forms::Label^ lb_platillos;
	private: System::Windows::Forms::Label^ lb_bebidas;



	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ Rb_pla_2;
	private: System::Windows::Forms::RadioButton^ Rb_pla_3;
	private: System::Windows::Forms::RadioButton^ Rb_pla_4;



	private: System::Windows::Forms::RadioButton^ Rb_pla_1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RadioButton^ Rb_beb_2;
	private: System::Windows::Forms::RadioButton^ Rb_beb_3;
	private: System::Windows::Forms::RadioButton^ Rb_beb_4;



	private: System::Windows::Forms::RadioButton^ Rb_beb_1;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RadioButton^ Rb_pos_2;
	private: System::Windows::Forms::RadioButton^ Rb_pos_3;
	private: System::Windows::Forms::RadioButton^ Rb_pos_4;



	private: System::Windows::Forms::RadioButton^ Rb_pos_1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ lb_cuenta;

private: System::Windows::Forms::Button^ bt_confirmar2;
private: System::Windows::Forms::Button^ bt_confirmar4;



private: System::Windows::Forms::Button^ bt_confirmar3;

private: System::Windows::Forms::Button^ bt_confirmar1;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ pictureBox22;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(restaurante::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Rb_ent_2 = (gcnew System::Windows::Forms::RadioButton());
			this->pick_usuario = (gcnew System::Windows::Forms::PictureBox());
			this->Rb_ent_4 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_ent_3 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_ent_1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bt_pay = (gcnew System::Windows::Forms::Button());
			this->NUD_usuarios = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_entradas = (gcnew System::Windows::Forms::Label());
			this->lb_platillos = (gcnew System::Windows::Forms::Label());
			this->lb_bebidas = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Rb_pla_2 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_pla_3 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_pla_4 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_pla_1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Rb_beb_2 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_beb_3 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_beb_4 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_beb_1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Rb_pos_2 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_pos_3 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_pos_4 = (gcnew System::Windows::Forms::RadioButton());
			this->Rb_pos_1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->lb_cuenta = (gcnew System::Windows::Forms::Label());
			this->bt_confirmar2 = (gcnew System::Windows::Forms::Button());
			this->bt_confirmar4 = (gcnew System::Windows::Forms::Button());
			this->bt_confirmar3 = (gcnew System::Windows::Forms::Button());
			this->bt_confirmar1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pick_usuario))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_usuarios))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(527, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"KOKORO";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(-3, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1227, 74);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label2->Location = System::Drawing::Point(555, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Comida japonesa";
			// 
			// Rb_ent_2
			// 
			this->Rb_ent_2->AutoSize = true;
			this->Rb_ent_2->BackColor = System::Drawing::Color::Transparent;
			this->Rb_ent_2->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_ent_2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_ent_2->Location = System::Drawing::Point(3, 129);
			this->Rb_ent_2->Name = L"Rb_ent_2";
			this->Rb_ent_2->Size = System::Drawing::Size(21, 20);
			this->Rb_ent_2->TabIndex = 3;
			this->Rb_ent_2->UseVisualStyleBackColor = false;
			// 
			// pick_usuario
			// 
			this->pick_usuario->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pick_usuario.Image")));
			this->pick_usuario->Location = System::Drawing::Point(1128, 77);
			this->pick_usuario->Name = L"pick_usuario";
			this->pick_usuario->Size = System::Drawing::Size(30, 30);
			this->pick_usuario->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pick_usuario->TabIndex = 4;
			this->pick_usuario->TabStop = false;
			// 
			// Rb_ent_4
			// 
			this->Rb_ent_4->AutoSize = true;
			this->Rb_ent_4->BackColor = System::Drawing::Color::Transparent;
			this->Rb_ent_4->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_ent_4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_ent_4->Location = System::Drawing::Point(3, 342);
			this->Rb_ent_4->Name = L"Rb_ent_4";
			this->Rb_ent_4->Size = System::Drawing::Size(21, 20);
			this->Rb_ent_4->TabIndex = 5;
			this->Rb_ent_4->TabStop = true;
			this->Rb_ent_4->UseVisualStyleBackColor = false;
			// 
			// Rb_ent_3
			// 
			this->Rb_ent_3->AutoSize = true;
			this->Rb_ent_3->BackColor = System::Drawing::Color::Transparent;
			this->Rb_ent_3->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_ent_3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_ent_3->Location = System::Drawing::Point(3, 236);
			this->Rb_ent_3->Name = L"Rb_ent_3";
			this->Rb_ent_3->Size = System::Drawing::Size(21, 20);
			this->Rb_ent_3->TabIndex = 6;
			this->Rb_ent_3->TabStop = true;
			this->Rb_ent_3->UseVisualStyleBackColor = false;
			// 
			// Rb_ent_1
			// 
			this->Rb_ent_1->AutoSize = true;
			this->Rb_ent_1->BackColor = System::Drawing::Color::Transparent;
			this->Rb_ent_1->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_ent_1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_ent_1->Location = System::Drawing::Point(3, 28);
			this->Rb_ent_1->Name = L"Rb_ent_1";
			this->Rb_ent_1->Size = System::Drawing::Size(21, 20);
			this->Rb_ent_1->TabIndex = 7;
			this->Rb_ent_1->TabStop = true;
			this->Rb_ent_1->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Rb_ent_2);
			this->panel1->Controls->Add(this->Rb_ent_3);
			this->panel1->Controls->Add(this->Rb_ent_4);
			this->panel1->Controls->Add(this->Rb_ent_1);
			this->panel1->Location = System::Drawing::Point(13, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(34, 408);
			this->panel1->TabIndex = 9;
			// 
			// bt_pay
			// 
			this->bt_pay->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->bt_pay->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_pay->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_pay->Location = System::Drawing::Point(1063, 596);
			this->bt_pay->Name = L"bt_pay";
			this->bt_pay->Size = System::Drawing::Size(149, 35);
			this->bt_pay->TabIndex = 10;
			this->bt_pay->Text = L"Pagar";
			this->bt_pay->UseVisualStyleBackColor = false;
			this->bt_pay->Click += gcnew System::EventHandler(this, &restaurante::bt_pay_Click);
			// 
			// NUD_usuarios
			// 
			this->NUD_usuarios->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUD_usuarios->Location = System::Drawing::Point(1169, 77);
			this->NUD_usuarios->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->NUD_usuarios->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_usuarios->Name = L"NUD_usuarios";
			this->NUD_usuarios->Size = System::Drawing::Size(40, 44);
			this->NUD_usuarios->TabIndex = 12;
			this->NUD_usuarios->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUD_usuarios->ValueChanged += gcnew System::EventHandler(this, &restaurante::NUD_usuarios_ValueChanged);
			// 
			// lb_entradas
			// 
			this->lb_entradas->AutoSize = true;
			this->lb_entradas->BackColor = System::Drawing::Color::Transparent;
			this->lb_entradas->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_entradas->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->lb_entradas->Location = System::Drawing::Point(122, 86);
			this->lb_entradas->Name = L"lb_entradas";
			this->lb_entradas->Size = System::Drawing::Size(124, 35);
			this->lb_entradas->TabIndex = 13;
			this->lb_entradas->Text = L"Entradas";
			// 
			// lb_platillos
			// 
			this->lb_platillos->AutoSize = true;
			this->lb_platillos->BackColor = System::Drawing::Color::Transparent;
			this->lb_platillos->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_platillos->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->lb_platillos->Location = System::Drawing::Point(454, 86);
			this->lb_platillos->Name = L"lb_platillos";
			this->lb_platillos->Size = System::Drawing::Size(113, 35);
			this->lb_platillos->TabIndex = 14;
			this->lb_platillos->Text = L"Platillos";
			// 
			// lb_bebidas
			// 
			this->lb_bebidas->AutoSize = true;
			this->lb_bebidas->BackColor = System::Drawing::Color::Transparent;
			this->lb_bebidas->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_bebidas->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->lb_bebidas->Location = System::Drawing::Point(738, 92);
			this->lb_bebidas->Name = L"lb_bebidas";
			this->lb_bebidas->Size = System::Drawing::Size(107, 35);
			this->lb_bebidas->TabIndex = 15;
			this->lb_bebidas->Text = L"Bebidas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label5->Location = System::Drawing::Point(1001, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 35);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Postres";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Rb_pla_2);
			this->panel2->Controls->Add(this->Rb_pla_3);
			this->panel2->Controls->Add(this->Rb_pla_4);
			this->panel2->Controls->Add(this->Rb_pla_1);
			this->panel2->Location = System::Drawing::Point(318, 118);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(34, 408);
			this->panel2->TabIndex = 10;
			// 
			// Rb_pla_2
			// 
			this->Rb_pla_2->AutoSize = true;
			this->Rb_pla_2->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pla_2->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pla_2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pla_2->Location = System::Drawing::Point(3, 129);
			this->Rb_pla_2->Name = L"Rb_pla_2";
			this->Rb_pla_2->Size = System::Drawing::Size(21, 20);
			this->Rb_pla_2->TabIndex = 3;
			this->Rb_pla_2->TabStop = true;
			this->Rb_pla_2->UseVisualStyleBackColor = false;
			// 
			// Rb_pla_3
			// 
			this->Rb_pla_3->AutoSize = true;
			this->Rb_pla_3->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pla_3->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pla_3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pla_3->Location = System::Drawing::Point(3, 236);
			this->Rb_pla_3->Name = L"Rb_pla_3";
			this->Rb_pla_3->Size = System::Drawing::Size(21, 20);
			this->Rb_pla_3->TabIndex = 6;
			this->Rb_pla_3->TabStop = true;
			this->Rb_pla_3->UseVisualStyleBackColor = false;
			// 
			// Rb_pla_4
			// 
			this->Rb_pla_4->AutoSize = true;
			this->Rb_pla_4->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pla_4->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pla_4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pla_4->Location = System::Drawing::Point(3, 342);
			this->Rb_pla_4->Name = L"Rb_pla_4";
			this->Rb_pla_4->Size = System::Drawing::Size(21, 20);
			this->Rb_pla_4->TabIndex = 5;
			this->Rb_pla_4->TabStop = true;
			this->Rb_pla_4->UseVisualStyleBackColor = false;
			// 
			// Rb_pla_1
			// 
			this->Rb_pla_1->AutoSize = true;
			this->Rb_pla_1->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pla_1->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pla_1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pla_1->Location = System::Drawing::Point(3, 28);
			this->Rb_pla_1->Name = L"Rb_pla_1";
			this->Rb_pla_1->Size = System::Drawing::Size(21, 20);
			this->Rb_pla_1->TabIndex = 7;
			this->Rb_pla_1->TabStop = true;
			this->Rb_pla_1->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Rb_beb_2);
			this->panel3->Controls->Add(this->Rb_beb_3);
			this->panel3->Controls->Add(this->Rb_beb_4);
			this->panel3->Controls->Add(this->Rb_beb_1);
			this->panel3->Location = System::Drawing::Point(621, 124);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(34, 408);
			this->panel3->TabIndex = 11;
			// 
			// Rb_beb_2
			// 
			this->Rb_beb_2->AutoSize = true;
			this->Rb_beb_2->BackColor = System::Drawing::Color::Transparent;
			this->Rb_beb_2->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_beb_2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_beb_2->Location = System::Drawing::Point(3, 129);
			this->Rb_beb_2->Name = L"Rb_beb_2";
			this->Rb_beb_2->Size = System::Drawing::Size(21, 20);
			this->Rb_beb_2->TabIndex = 3;
			this->Rb_beb_2->TabStop = true;
			this->Rb_beb_2->UseVisualStyleBackColor = false;
			// 
			// Rb_beb_3
			// 
			this->Rb_beb_3->AutoSize = true;
			this->Rb_beb_3->BackColor = System::Drawing::Color::Transparent;
			this->Rb_beb_3->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_beb_3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_beb_3->Location = System::Drawing::Point(3, 236);
			this->Rb_beb_3->Name = L"Rb_beb_3";
			this->Rb_beb_3->Size = System::Drawing::Size(21, 20);
			this->Rb_beb_3->TabIndex = 6;
			this->Rb_beb_3->TabStop = true;
			this->Rb_beb_3->UseVisualStyleBackColor = false;
			// 
			// Rb_beb_4
			// 
			this->Rb_beb_4->AutoSize = true;
			this->Rb_beb_4->BackColor = System::Drawing::Color::Transparent;
			this->Rb_beb_4->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_beb_4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_beb_4->Location = System::Drawing::Point(3, 342);
			this->Rb_beb_4->Name = L"Rb_beb_4";
			this->Rb_beb_4->Size = System::Drawing::Size(21, 20);
			this->Rb_beb_4->TabIndex = 5;
			this->Rb_beb_4->TabStop = true;
			this->Rb_beb_4->UseVisualStyleBackColor = false;
			// 
			// Rb_beb_1
			// 
			this->Rb_beb_1->AutoSize = true;
			this->Rb_beb_1->BackColor = System::Drawing::Color::Transparent;
			this->Rb_beb_1->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_beb_1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_beb_1->Location = System::Drawing::Point(3, 28);
			this->Rb_beb_1->Name = L"Rb_beb_1";
			this->Rb_beb_1->Size = System::Drawing::Size(21, 20);
			this->Rb_beb_1->TabIndex = 7;
			this->Rb_beb_1->TabStop = true;
			this->Rb_beb_1->UseVisualStyleBackColor = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Rb_pos_2);
			this->panel4->Controls->Add(this->Rb_pos_3);
			this->panel4->Controls->Add(this->Rb_pos_4);
			this->panel4->Controls->Add(this->Rb_pos_1);
			this->panel4->Location = System::Drawing::Point(909, 124);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(34, 408);
			this->panel4->TabIndex = 12;
			// 
			// Rb_pos_2
			// 
			this->Rb_pos_2->AutoSize = true;
			this->Rb_pos_2->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pos_2->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pos_2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pos_2->Location = System::Drawing::Point(3, 129);
			this->Rb_pos_2->Name = L"Rb_pos_2";
			this->Rb_pos_2->Size = System::Drawing::Size(21, 20);
			this->Rb_pos_2->TabIndex = 3;
			this->Rb_pos_2->TabStop = true;
			this->Rb_pos_2->UseVisualStyleBackColor = false;
			// 
			// Rb_pos_3
			// 
			this->Rb_pos_3->AutoSize = true;
			this->Rb_pos_3->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pos_3->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pos_3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pos_3->Location = System::Drawing::Point(3, 236);
			this->Rb_pos_3->Name = L"Rb_pos_3";
			this->Rb_pos_3->Size = System::Drawing::Size(21, 20);
			this->Rb_pos_3->TabIndex = 6;
			this->Rb_pos_3->TabStop = true;
			this->Rb_pos_3->UseVisualStyleBackColor = false;
			// 
			// Rb_pos_4
			// 
			this->Rb_pos_4->AutoSize = true;
			this->Rb_pos_4->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pos_4->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pos_4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pos_4->Location = System::Drawing::Point(3, 342);
			this->Rb_pos_4->Name = L"Rb_pos_4";
			this->Rb_pos_4->Size = System::Drawing::Size(21, 20);
			this->Rb_pos_4->TabIndex = 5;
			this->Rb_pos_4->TabStop = true;
			this->Rb_pos_4->UseVisualStyleBackColor = false;
			// 
			// Rb_pos_1
			// 
			this->Rb_pos_1->AutoSize = true;
			this->Rb_pos_1->BackColor = System::Drawing::Color::Transparent;
			this->Rb_pos_1->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rb_pos_1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Rb_pos_1->Location = System::Drawing::Point(3, 28);
			this->Rb_pos_1->Name = L"Rb_pos_1";
			this->Rb_pos_1->Size = System::Drawing::Size(21, 20);
			this->Rb_pos_1->TabIndex = 7;
			this->Rb_pos_1->TabStop = true;
			this->Rb_pos_1->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(53, 124);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(163, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(23, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 30);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Kushiage gouda";
			// 
			// pictureBox3
			// 
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(53, 245);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(161, 98);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(93, 332);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 30);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Rollos primavera";
			// 
			// pictureBox4
			// 
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(53, 354);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(161, 98);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(23, 432);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 30);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Soft shell";
			// 
			// pictureBox5
			// 
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(53, 465);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(161, 98);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(167, 544);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 30);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Gyosas";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(472, 544);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 30);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Teppanyaki";
			// 
			// pictureBox6
			// 
			this->pictureBox6->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.ErrorImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(358, 465);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(161, 98);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 31;
			this->pictureBox6->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(328, 432);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 30);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Sashimi";
			// 
			// pictureBox7
			// 
			this->pictureBox7->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.ErrorImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(358, 354);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(161, 98);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 29;
			this->pictureBox7->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(433, 321);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 30);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Ramen";
			// 
			// pictureBox8
			// 
			this->pictureBox8->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.ErrorImage")));
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(358, 245);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(134, 98);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 27;
			this->pictureBox8->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(328, 212);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 30);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Cola de langosta";
			// 
			// pictureBox9
			// 
			this->pictureBox9->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.ErrorImage")));
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(358, 124);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(163, 100);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 25;
			this->pictureBox9->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(775, 544);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 30);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Te verde";
			// 
			// pictureBox10
			// 
			this->pictureBox10->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.ErrorImage")));
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(661, 465);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(161, 98);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 39;
			this->pictureBox10->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(631, 432);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(118, 30);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Limonada";
			// 
			// pictureBox11
			// 
			this->pictureBox11->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.ErrorImage")));
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(661, 354);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(161, 98);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 37;
			this->pictureBox11->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(701, 332);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(170, 30);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Havana tequila";
			// 
			// pictureBox12
			// 
			this->pictureBox12->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.ErrorImage")));
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(693, 245);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(90, 98);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 35;
			this->pictureBox12->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(631, 212);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(128, 30);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Cappuccino";
			// 
			// pictureBox13
			// 
			this->pictureBox13->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.ErrorImage")));
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(661, 124);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(163, 100);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 33;
			this->pictureBox13->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(934, 535);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(99, 28);
			this->label16->TabIndex = 48;
			this->label16->Text = L"Dorayaki";
			// 
			// pictureBox14
			// 
			this->pictureBox14->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.ErrorImage")));
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(939, 457);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(161, 75);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 47;
			this->pictureBox14->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label17->Location = System::Drawing::Point(923, 423);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(83, 28);
			this->label17->TabIndex = 46;
			this->label17->Text = L"Onigiri";
			// 
			// pictureBox15
			// 
			this->pictureBox15->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.ErrorImage")));
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(939, 362);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(161, 75);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 45;
			this->pictureBox15->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->Location = System::Drawing::Point(993, 323);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(77, 28);
			this->label18->TabIndex = 44;
			this->label18->Text = L"Mochis";
			// 
			// pictureBox16
			// 
			this->pictureBox16->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.ErrorImage")));
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(939, 253);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(161, 75);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 43;
			this->pictureBox16->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Location = System::Drawing::Point(923, 203);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(117, 28);
			this->label19->TabIndex = 42;
			this->label19->Text = L"Cheese cake";
			// 
			// pictureBox17
			// 
			this->pictureBox17->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.ErrorImage")));
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(939, 132);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(163, 77);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 41;
			this->pictureBox17->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::DarkRed;
			this->label20->Location = System::Drawing::Point(1014, 26);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(154, 35);
			this->label20->TabIndex = 49;
			this->label20->Text = L"Su cuenta:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label21->Location = System::Drawing::Point(245, 152);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(69, 35);
			this->label21->TabIndex = 50;
			this->label21->Text = L"$65";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label22->Location = System::Drawing::Point(245, 271);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(72, 35);
			this->label22->TabIndex = 51;
			this->label22->Text = L"$74";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label23->Location = System::Drawing::Point(245, 383);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(67, 35);
			this->label23->TabIndex = 52;
			this->label23->Text = L"$92";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label24->Location = System::Drawing::Point(245, 491);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(68, 35);
			this->label24->TabIndex = 53;
			this->label24->Text = L"$60";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label25->Location = System::Drawing::Point(539, 491);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(69, 35);
			this->label25->TabIndex = 57;
			this->label25->Text = L"$79";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label26->Location = System::Drawing::Point(539, 383);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(68, 35);
			this->label26->TabIndex = 56;
			this->label26->Text = L"$35";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label27->Location = System::Drawing::Point(539, 271);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(70, 35);
			this->label27->TabIndex = 55;
			this->label27->Text = L"$45";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label28->Location = System::Drawing::Point(539, 152);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(67, 35);
			this->label28->TabIndex = 54;
			this->label28->Text = L"$95";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label29->Location = System::Drawing::Point(830, 500);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(68, 35);
			this->label29->TabIndex = 61;
			this->label29->Text = L"$17";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label30->Location = System::Drawing::Point(830, 392);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(66, 35);
			this->label30->TabIndex = 60;
			this->label30->Text = L"$15";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label31->Location = System::Drawing::Point(830, 280);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(69, 35);
			this->label31->TabIndex = 59;
			this->label31->Text = L"$70";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label32->Location = System::Drawing::Point(830, 161);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(67, 35);
			this->label32->TabIndex = 58;
			this->label32->Text = L"$20";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label33->Location = System::Drawing::Point(1108, 485);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(70, 35);
			this->label33->TabIndex = 65;
			this->label33->Text = L"$24";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label34->Location = System::Drawing::Point(1108, 377);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(69, 35);
			this->label34->TabIndex = 64;
			this->label34->Text = L"$40";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label35->Location = System::Drawing::Point(1108, 265);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(69, 35);
			this->label35->TabIndex = 63;
			this->label35->Text = L"$56";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label36->Location = System::Drawing::Point(1108, 146);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(72, 35);
			this->label36->TabIndex = 62;
			this->label36->Text = L"$74";
			// 
			// lb_cuenta
			// 
			this->lb_cuenta->AutoSize = true;
			this->lb_cuenta->BackColor = System::Drawing::Color::White;
			this->lb_cuenta->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_cuenta->ForeColor = System::Drawing::Color::Maroon;
			this->lb_cuenta->Location = System::Drawing::Point(1147, 26);
			this->lb_cuenta->Name = L"lb_cuenta";
			this->lb_cuenta->Size = System::Drawing::Size(50, 35);
			this->lb_cuenta->TabIndex = 66;
			this->lb_cuenta->Text = L"$0";
			// 
			// bt_confirmar2
			// 
			this->bt_confirmar2->BackColor = System::Drawing::Color::Chartreuse;
			this->bt_confirmar2->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 10, System::Drawing::FontStyle::Bold));
			this->bt_confirmar2->Location = System::Drawing::Point(318, 577);
			this->bt_confirmar2->Name = L"bt_confirmar2";
			this->bt_confirmar2->Size = System::Drawing::Size(127, 43);
			this->bt_confirmar2->TabIndex = 68;
			this->bt_confirmar2->Text = L"Confirme su\r\nseleccion";
			this->bt_confirmar2->UseVisualStyleBackColor = false;
			this->bt_confirmar2->Click += gcnew System::EventHandler(this, &restaurante::bt_confirmar2_Click);
			// 
			// bt_confirmar4
			// 
			this->bt_confirmar4->BackColor = System::Drawing::Color::Chartreuse;
			this->bt_confirmar4->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 10, System::Drawing::FontStyle::Bold));
			this->bt_confirmar4->Location = System::Drawing::Point(915, 576);
			this->bt_confirmar4->Name = L"bt_confirmar4";
			this->bt_confirmar4->Size = System::Drawing::Size(127, 43);
			this->bt_confirmar4->TabIndex = 69;
			this->bt_confirmar4->Text = L"Confirme su\r\nseleccion";
			this->bt_confirmar4->UseVisualStyleBackColor = false;
			this->bt_confirmar4->Click += gcnew System::EventHandler(this, &restaurante::bt_confirmar4_Click);
			// 
			// bt_confirmar3
			// 
			this->bt_confirmar3->BackColor = System::Drawing::Color::Chartreuse;
			this->bt_confirmar3->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 10, System::Drawing::FontStyle::Bold));
			this->bt_confirmar3->Location = System::Drawing::Point(624, 577);
			this->bt_confirmar3->Name = L"bt_confirmar3";
			this->bt_confirmar3->Size = System::Drawing::Size(127, 43);
			this->bt_confirmar3->TabIndex = 70;
			this->bt_confirmar3->Text = L"Confirme su\r\nseleccion";
			this->bt_confirmar3->UseVisualStyleBackColor = false;
			this->bt_confirmar3->Click += gcnew System::EventHandler(this, &restaurante::bt_confirmar3_Click);
			// 
			// bt_confirmar1
			// 
			this->bt_confirmar1->BackColor = System::Drawing::Color::Chartreuse;
			this->bt_confirmar1->Font = (gcnew System::Drawing::Font(L"Bradley Hand ITC", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_confirmar1->ForeColor = System::Drawing::Color::Black;
			this->bt_confirmar1->Location = System::Drawing::Point(16, 577);
			this->bt_confirmar1->Name = L"bt_confirmar1";
			this->bt_confirmar1->Size = System::Drawing::Size(127, 43);
			this->bt_confirmar1->TabIndex = 71;
			this->bt_confirmar1->Text = L"Confirme su\r\n seleccion";
			this->bt_confirmar1->UseVisualStyleBackColor = false;
			this->bt_confirmar1->Click += gcnew System::EventHandler(this, &restaurante::bt_confirmar1_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(245, -1);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(182, 72);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 72;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.InitialImage")));
			this->pictureBox19->Location = System::Drawing::Point(790, 9);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(64, 50);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 73;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.InitialImage")));
			this->pictureBox20->Location = System::Drawing::Point(909, 12);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(64, 50);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 74;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.InitialImage")));
			this->pictureBox21->Location = System::Drawing::Point(137, 9);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(64, 50);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 75;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.InitialImage")));
			this->pictureBox22->Location = System::Drawing::Point(28, 9);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(64, 50);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 76;
			this->pictureBox22->TabStop = false;
			// 
			// restaurante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1224, 643);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->bt_confirmar1);
			this->Controls->Add(this->bt_confirmar3);
			this->Controls->Add(this->bt_confirmar4);
			this->Controls->Add(this->bt_confirmar2);
			this->Controls->Add(this->lb_cuenta);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lb_bebidas);
			this->Controls->Add(this->lb_platillos);
			this->Controls->Add(this->lb_entradas);
			this->Controls->Add(this->NUD_usuarios);
			this->Controls->Add(this->bt_pay);
			this->Controls->Add(this->pick_usuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximizeBox = false;
			this->Name = L"restaurante";
			this->Text = L"Kokoro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pick_usuario))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUD_usuarios))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int precio = 0;
		int entrada = 0;
		int platillos = 0;
		int bebidas = 0;
		int postre = 0;
	
		//explicitamente, el usuario que pida mas puede comprar dos veces lo mismo, una vez que confirma su orden 
		//El precio es fijo, no se le puede restar, asi que por eso mismo hay un boton de confirmar
		//a la hora que este ya decidido se le da click
private: System::Void bt_pay_Click(System::Object^ sender, System::EventArgs^ e) {
	
	precio = entrada + platillos + bebidas + postre;
	MessageBox::Show("Su cuenta seria de: $" + precio, "Cuenta");
	//vuelven a estar en 0 todos los valores
	entrada = 0;
	platillos = 0;
	bebidas = 0;
	postre = 0;
	precio = 0;
	lb_cuenta->Text = "$" + precio;

}
private: System::Void bt_confirmar1_Click(System::Object^ sender, System::EventArgs^ e) {
	int ent[5] = {0,0,0,0,0};
	int valor = System::Convert::ToInt32(NUD_usuarios->Text);
	int corejido = valor - 1;
	if (Rb_ent_1->Checked == true) {
		ent[corejido] = 65;
	}
	if (Rb_ent_2->Checked == true) {
		ent[corejido] = 74;
	}
	if (Rb_ent_3->Checked == true) {
		ent[corejido] = 92;
	}
	if (Rb_ent_4->Checked == true) {
		ent[corejido] = 60;
	}
	for (int i = 0; i <= 4; i++) {
		entrada += ent[i];
	}
	precio = entrada + platillos + bebidas + postre;
	lb_cuenta->Text = "$" + precio;
}
private: System::Void bt_confirmar2_Click(System::Object^ sender, System::EventArgs^ e) {
	int pla[5] = { 0,0,0,0,0 };
	int valor = System::Convert::ToInt32(NUD_usuarios->Text);
	int corejido = valor - 1;

	if (Rb_pla_1->Checked == true) {
		pla[corejido] = 95;
	}
	if (Rb_pla_2->Checked == true) {
		pla[corejido] = 45;
	}
	if (Rb_pla_3->Checked == true) {
		pla[corejido] = 35;
	}
	if (Rb_pla_4->Checked == true) {
		pla[corejido] = 79;
	}
	for (int i = 0; i <= 4; i++) {
		platillos += pla[i];
	}
	precio = entrada + platillos + bebidas + postre;
	lb_cuenta->Text = "$" + precio;
}
private: System::Void bt_confirmar3_Click(System::Object^ sender, System::EventArgs^ e) {
	int beb[5] = { 0,0,0,0,0 };
	int valor = System::Convert::ToInt32(NUD_usuarios->Text);
	int corejido = valor - 1;

	if (Rb_beb_1->Checked == true) {
		beb[corejido] = 20;
	}
	if (Rb_beb_2->Checked == true) {
		beb[corejido] = 70;
	}
	if (Rb_beb_3->Checked == true) {
		beb[corejido] = 15;
	}
	if (Rb_beb_4->Checked == true) {
		beb[corejido] = 17;
	}
	for (int i = 0; i <= 4; i++) {
		bebidas += beb[i];
	}
	precio = entrada + platillos + bebidas + postre;
	lb_cuenta->Text = "$" + precio;
}
private: System::Void bt_confirmar4_Click(System::Object^ sender, System::EventArgs^ e) {
	int pos[5] = { 0,0,0,0,0 };
	int valor = System::Convert::ToInt32(NUD_usuarios->Text);
	int corejido = valor - 1;

	if (Rb_pos_1->Checked == true) {
		pos[corejido] = 74;
	}
	if (Rb_pos_2->Checked == true) {
		pos[corejido] = 56;
	}
	if (Rb_pos_3->Checked == true) {
		pos[corejido] = 40;
	}
	if (Rb_pos_4->Checked == true) {
		pos[corejido] = 24;
	}
	for (int i = 0; i <= 4; i++) {
		postre += pos[i];
	}
	precio = entrada + platillos + bebidas + postre;
	lb_cuenta->Text = "$" + precio;
}
private: System::Void NUD_usuarios_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	/* para quitar cualquier seleccion al cambiar de usuario/cliente */

	//entrada
	Rb_ent_1->Checked = false;
	Rb_ent_2->Checked = false;
	Rb_ent_3->Checked = false;
	Rb_ent_4->Checked = false;
	//platillos
	Rb_pla_1->Checked = false;
	Rb_pla_2->Checked = false;
	Rb_pla_3->Checked = false;
	Rb_pla_4->Checked = false;
	//bebidas
	Rb_beb_1->Checked = false;
	Rb_beb_2->Checked = false;
	Rb_beb_3->Checked = false;
	Rb_beb_4->Checked = false;
	//postres
	Rb_pos_1->Checked = false;
	Rb_pos_2->Checked = false;
	Rb_pos_3->Checked = false;
	Rb_pos_4->Checked = false;
}
};
}
