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
	/// Resumen de ConsultarE
	/// </summary>
	public ref class ConsultarE : public System::Windows::Forms::Form
	{
	public:
		String^ connectionString = "datasource=localhost; password=n0m3l0; username=root; database=salon;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
		MySqlConnection^ Conexion;
	private: System::Windows::Forms::Label^ personas;
	private: System::Windows::Forms::Label^ plato;


	private: System::Windows::Forms::Label^ duracion;
	private: System::Windows::Forms::Label^ mesas;
	private: System::Windows::Forms::Label^ menu;
	private: System::Windows::Forms::Label^ refrescos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ deposito;

	public:

	public:
		MySqlDataReader^ Lector;
		ConsultarE(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ConsultarE(MySqlConnection^ conn, MySqlDataReader^ dataReader)
		{
			InitializeComponent();
			Conexion = conn;
			Lector = dataReader;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultarE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ detalles;
	protected:

	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;







	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultarE::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->detalles = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->personas = (gcnew System::Windows::Forms::Label());
			this->plato = (gcnew System::Windows::Forms::Label());
			this->duracion = (gcnew System::Windows::Forms::Label());
			this->mesas = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::Label());
			this->refrescos = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->deposito = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deposito))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(125, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 25);
			this->comboBox1->TabIndex = 74;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultarE::comboBox1_SelectedIndexChanged);
			// 
			// detalles
			// 
			this->detalles->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->detalles->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->detalles->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detalles->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->detalles->Location = System::Drawing::Point(272, 100);
			this->detalles->Multiline = true;
			this->detalles->Name = L"detalles";
			this->detalles->ReadOnly = true;
			this->detalles->Size = System::Drawing::Size(196, 73);
			this->detalles->TabIndex = 73;
			this->detalles->TextChanged += gcnew System::EventHandler(this, &ConsultarE::detalles_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(269, 68);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(203, 34);
			this->label12->TabIndex = 72;
			this->label12->Text = L"Detalles adicionales\r\n(Pueden presentar cargos extra): ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaGreen;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(385, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 38);
			this->button2->TabIndex = 69;
			this->button2->Text = L"Realizar pago";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ConsultarE::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(298, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 38);
			this->button1->TabIndex = 68;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarE::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label11->Location = System::Drawing::Point(227, 295);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 15);
			this->label11->TabIndex = 67;
			this->label11->Text = L"$";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(385, 37);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(37, 21);
			this->checkBox1->TabIndex = 59;
			this->checkBox1->Text = L"Si";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(269, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 17);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Barra libre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(25, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 17);
			this->label8->TabIndex = 56;
			this->label8->Text = L"No. de refrescos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(25, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 17);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Menu";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(25, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 17);
			this->label6->TabIndex = 54;
			this->label6->Text = L"No. de mesas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(25, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 17);
			this->label5->TabIndex = 53;
			this->label5->Text = L"Duracion en horas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Location = System::Drawing::Point(38, 280);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 15);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Precio estimado del evento:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(25, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 17);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Numero de personas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(27, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Tus eventos";
			// 
			// personas
			// 
			this->personas->AutoSize = true;
			this->personas->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->personas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->personas->Location = System::Drawing::Point(166, 89);
			this->personas->Name = L"personas";
			this->personas->Size = System::Drawing::Size(50, 17);
			this->personas->TabIndex = 75;
			this->personas->Text = L"label13";
			// 
			// plato
			// 
			this->plato->AutoSize = true;
			this->plato->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plato->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->plato->Location = System::Drawing::Point(166, 295);
			this->plato->Name = L"plato";
			this->plato->Size = System::Drawing::Size(55, 15);
			this->plato->TabIndex = 76;
			this->plato->Text = L"label13";
			// 
			// duracion
			// 
			this->duracion->AutoSize = true;
			this->duracion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duracion->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->duracion->Location = System::Drawing::Point(166, 120);
			this->duracion->Name = L"duracion";
			this->duracion->Size = System::Drawing::Size(50, 17);
			this->duracion->TabIndex = 78;
			this->duracion->Text = L"label13";
			// 
			// mesas
			// 
			this->mesas->AutoSize = true;
			this->mesas->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mesas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->mesas->Location = System::Drawing::Point(166, 155);
			this->mesas->Name = L"mesas";
			this->mesas->Size = System::Drawing::Size(50, 17);
			this->mesas->TabIndex = 79;
			this->mesas->Text = L"label13";
			// 
			// menu
			// 
			this->menu->AutoSize = true;
			this->menu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menu->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->menu->Location = System::Drawing::Point(166, 190);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(50, 17);
			this->menu->TabIndex = 80;
			this->menu->Text = L"label13";
			// 
			// refrescos
			// 
			this->refrescos->AutoSize = true;
			this->refrescos->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refrescos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->refrescos->Location = System::Drawing::Point(166, 224);
			this->refrescos->Name = L"refrescos";
			this->refrescos->Size = System::Drawing::Size(50, 17);
			this->refrescos->TabIndex = 81;
			this->refrescos->Text = L"label13";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(442, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(491, 337);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 82;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label4->Location = System::Drawing::Point(12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 83;
			this->label4->Text = L"X";
			this->label4->Click += gcnew System::EventHandler(this, &ConsultarE::label4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(314, 226);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(131, 17);
			this->label10->TabIndex = 84;
			this->label10->Text = L"Cantidad a depositar";
			// 
			// deposito
			// 
			this->deposito->BackColor = System::Drawing::Color::Black;
			this->deposito->ForeColor = System::Drawing::SystemColors::Info;
			this->deposito->Location = System::Drawing::Point(317, 246);
			this->deposito->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->deposito->Name = L"deposito";
			this->deposito->Size = System::Drawing::Size(128, 20);
			this->deposito->TabIndex = 85;
			this->deposito->ValueChanged += gcnew System::EventHandler(this, &ConsultarE::numericUpDown1_ValueChanged);
			// 
			// ConsultarE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(757, 335);
			this->Controls->Add(this->deposito);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->refrescos);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->mesas);
			this->Controls->Add(this->duracion);
			this->Controls->Add(this->plato);
			this->Controls->Add(this->personas);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->detalles);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConsultarE";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ConsultarE";
			this->Load += gcnew System::EventHandler(this, &ConsultarE::ConsultarE_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deposito))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ a = this->comboBox1->Text;
		int precioInd = Convert::ToInt32(this->plato->Text);
		int numP = Convert::ToInt32(this->deposito->Text);
		int pFinal = precioInd - numP;
		String^ sql = "UPDATE `salon`.`evento` SET `precio_evento`='"+pFinal+"' WHERE `nombre_evento`='"+a+"'; ";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		cursor->Connection->Open();
		cursor->ExecuteNonQuery();
		MessageBox::Show("Pago Realizado con exito");
		this->plato->Text = Convert::ToString(pFinal);
		conn->Close();
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ connP = gcnew MySqlConnection(connectionString);
	String^ sql = "select * from evento where nombre_evento ='" + comboBox1->Text + "';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, connP);
	MySqlDataReader^ paquete;
	try {
		connP->Open();
		paquete = cursor->ExecuteReader();
		if (paquete->Read())
		{
			this->personas->Text = paquete->GetString("personas_evento");
			this->plato->Text = paquete->GetString("precio_evento");
			this->duracion->Text = paquete->GetString("duracion_evento");
			this->mesas->Text = paquete->GetString("mesas_evento");
			this->menu->Text = paquete->GetString("menu_evento");
			this->refrescos->Text = paquete->GetString("refrescos_evento");
			this->detalles->Text = paquete->GetString("adicionales_evento");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void ConsultarE_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ idU;
	idU = Lector->GetString("id_usuario");
	String^ sql = "select * from evento where id_usuario ="+idU+";";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
	try {
		MySqlDataAdapter^ adap = gcnew MySqlDataAdapter;
		adap->SelectCommand = cursor;
		DataTable^ dbdataset = gcnew DataTable();
		adap->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		comboBox1->DataSource = dbdataset;
		comboBox1->DisplayMember = "nombre_evento";
		adap->Update(dbdataset);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void personas_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void detalles_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarE::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarE::Close();
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
