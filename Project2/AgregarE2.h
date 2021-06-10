#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de AgregarE2
	/// </summary>
	public ref class AgregarE2 : public System::Windows::Forms::Form
	{
	public:
	String^ connectionString = "datasource=localhost; password=n0m3l0; username=root; database=salon;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	MySqlConnection^ Conexion;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ Nombre;
	private: System::Windows::Forms::NumericUpDown^ personas;

	private: System::Windows::Forms::NumericUpDown^ plato;
	private: System::Windows::Forms::Label^ precio;
	private: System::Windows::Forms::Label^ label14;



	public:
		MySqlDataReader^ Lector;

		AgregarE2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		AgregarE2(MySqlConnection^ conn, MySqlDataReader^ dataReader)
		{
			InitializeComponent();
			Conexion = conn;
			Lector = dataReader;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		void PrecioFinal(void) {
			int precioInd = Convert::ToInt32(plato->Text);
			int numP = Convert::ToInt32(personas->Text);
			int pFinal = precioInd * numP;
			this->precio->Text = Convert::ToString(pFinal);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarE2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ refrescos;
	private: System::Windows::Forms::TextBox^ menu;
	private: System::Windows::Forms::TextBox^ mesas;
	private: System::Windows::Forms::TextBox^ Duracion;



	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->refrescos = (gcnew System::Windows::Forms::TextBox());
			this->menu = (gcnew System::Windows::Forms::TextBox());
			this->mesas = (gcnew System::Windows::Forms::TextBox());
			this->Duracion = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->personas = (gcnew System::Windows::Forms::NumericUpDown());
			this->plato = (gcnew System::Windows::Forms::NumericUpDown());
			this->precio = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->personas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plato))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(647, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 38);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Crear evento";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AgregarE2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(560, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 38);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarE2::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(222, 243);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 42;
			this->label11->Text = L"$";
			// 
			// refrescos
			// 
			this->refrescos->Location = System::Drawing::Point(380, 125);
			this->refrescos->Name = L"refrescos";
			this->refrescos->Size = System::Drawing::Size(100, 20);
			this->refrescos->TabIndex = 41;
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(380, 91);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(100, 20);
			this->menu->TabIndex = 40;
			// 
			// mesas
			// 
			this->mesas->Location = System::Drawing::Point(380, 57);
			this->mesas->Name = L"mesas";
			this->mesas->Size = System::Drawing::Size(100, 20);
			this->mesas->TabIndex = 39;
			// 
			// Duracion
			// 
			this->Duracion->Location = System::Drawing::Point(116, 159);
			this->Duracion->Name = L"Duracion";
			this->Duracion->Size = System::Drawing::Size(100, 20);
			this->Duracion->TabIndex = 38;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(430, 161);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(40, 17);
			this->checkBox2->TabIndex = 34;
			this->checkBox2->Text = L"No";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(380, 161);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(35, 17);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->Text = L"Si";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(264, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 32;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(264, 162);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Barra libre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(264, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"No. de refrescos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(264, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Menu";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(264, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"No. de mesas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Duracion en horas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Precio estimado del evento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Numero de personas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Paquete a elegir";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Precio por plato";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(520, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(164, 26);
			this->label12->TabIndex = 47;
			this->label12->Text = L"Detalles adicionales\r\n(Pueden presentar cargos extra): ";
			this->label12->Click += gcnew System::EventHandler(this, &AgregarE2::label12_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(523, 87);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 92);
			this->textBox2->TabIndex = 48;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(116, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 49;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarE2::comboBox1_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(0, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 13);
			this->label13->TabIndex = 51;
			this->label13->Text = L"Nombre del evento";
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(116, 25);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(100, 20);
			this->Nombre->TabIndex = 52;
			// 
			// personas
			// 
			this->personas->Location = System::Drawing::Point(116, 92);
			this->personas->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->personas->Name = L"personas";
			this->personas->Size = System::Drawing::Size(100, 20);
			this->personas->TabIndex = 53;
			this->personas->ValueChanged += gcnew System::EventHandler(this, &AgregarE2::numericUpDown1_ValueChanged);
			// 
			// plato
			// 
			this->plato->Location = System::Drawing::Point(116, 126);
			this->plato->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->plato->Name = L"plato";
			this->plato->Size = System::Drawing::Size(100, 20);
			this->plato->TabIndex = 54;
			this->plato->ValueChanged += gcnew System::EventHandler(this, &AgregarE2::plato_ValueChanged);
			// 
			// precio
			// 
			this->precio->AutoSize = true;
			this->precio->Location = System::Drawing::Point(150, 243);
			this->precio->Name = L"precio";
			this->precio->Size = System::Drawing::Size(68, 13);
			this->precio->TabIndex = 55;
			this->precio->Text = L"calculando...";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(222, 128);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 56;
			this->label14->Text = L"$";
			// 
			// AgregarE2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 285);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->precio);
			this->Controls->Add(this->plato);
			this->Controls->Add(this->personas);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->refrescos);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->mesas);
			this->Controls->Add(this->Duracion);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AgregarE2";
			this->Text = L"AgregarE2";
			this->Load += gcnew System::EventHandler(this, &AgregarE2::AgregarE2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->personas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plato))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AgregarE2_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "select * from paquete;";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
	try {
		MySqlDataAdapter^ adap = gcnew MySqlDataAdapter;
		adap->SelectCommand = cursor;
		DataTable^ dbdataset = gcnew DataTable();
		adap->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		comboBox1->DataSource = dbdataset;
		comboBox1->DisplayMember = "nombre_paquete";
		adap->Update(dbdataset);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ connP = gcnew MySqlConnection(connectionString);
	String^ sql = "select * from paquete where nombre_paquete ='"+comboBox1->Text+"';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, connP);
	MySqlDataReader^ paquete;
	try {
	connP->Open();
	paquete = cursor->ExecuteReader();
	if (paquete->Read())
	{
		this->personas->Text = paquete->GetString("personas_paquete");
		this->plato->Text = paquete->GetString("precio_paquete");
		this->Duracion->Text = paquete->GetString("duracion_paquete");
		this->mesas->Text = paquete->GetString("mesas_paquete");
		this->menu->Text = paquete->GetString("menu_paquete");
		this->refrescos->Text = paquete->GetString("refrescos_paquete");
	}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void precio_TextChanged(System::Object^ sender, System::EventArgs^ e) {PrecioFinal();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	PrecioFinal();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ idU = Lector->GetString("id_usuario");
	String^ sql = "insert into evento (id_usuario,nombre_evento,personas_evento,precio_evento,duracion_evento,mesas_evento,menu_evento,refrescos_evento)values("+idU+",'" + Nombre->Text + "'," + personas->Text + "," + precio->Text + "," + Duracion->Text + "," + mesas->Text + ",'" + menu->Text + "'," + refrescos->Text + ");";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
	cursor->Connection->Open();
	cursor->ExecuteNonQuery();
	MessageBox::Show("Evento registrado con exito");
	AgregarE2::Close();
}

private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	PrecioFinal();
}
private: System::Void plato_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	PrecioFinal();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarE2::Close();
}
};
}
