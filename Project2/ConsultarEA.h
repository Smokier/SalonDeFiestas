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
	/// Resumen de ConsultarEA
	/// </summary>
	public ref class ConsultarEA : public System::Windows::Forms::Form
	{
	public:
		ConsultarEA(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ connectionString = "datasource=localhost; password=n0m3l0; username=root; database=salon;";
		MySqlConnection^ conexion = gcnew MySqlConnection(connectionString);
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultarEA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^ Calendario1;
	private: System::Windows::Forms::Label^ Fecha;
	private: System::Windows::Forms::Label^ Evento;
	private: System::Windows::Forms::Label^ refrescos;

	private: System::Windows::Forms::Label^ mesas;
	private: System::Windows::Forms::Label^ duracion;

	private: System::Windows::Forms::TextBox^ detalles;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ personas;
	private: System::Windows::Forms::TextBox^ menu;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ plato;

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
			this->Calendario1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->Fecha = (gcnew System::Windows::Forms::Label());
			this->Evento = (gcnew System::Windows::Forms::Label());
			this->refrescos = (gcnew System::Windows::Forms::Label());
			this->mesas = (gcnew System::Windows::Forms::Label());
			this->duracion = (gcnew System::Windows::Forms::Label());
			this->detalles = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->personas = (gcnew System::Windows::Forms::TextBox());
			this->menu = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->plato = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Calendario1
			// 
			this->Calendario1->Location = System::Drawing::Point(18, 18);
			this->Calendario1->MaxSelectionCount = 1;
			this->Calendario1->Name = L"Calendario1";
			this->Calendario1->ShowToday = false;
			this->Calendario1->TabIndex = 0;
			this->Calendario1->TodayDate = System::DateTime(2021, 6, 16, 0, 0, 0, 0);
			this->Calendario1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &ConsultarEA::monthCalendar1_DateChanged);
			// 
			// Fecha
			// 
			this->Fecha->AutoSize = true;
			this->Fecha->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Fecha->Location = System::Drawing::Point(356, 18);
			this->Fecha->Name = L"Fecha";
			this->Fecha->Size = System::Drawing::Size(37, 13);
			this->Fecha->TabIndex = 1;
			this->Fecha->Text = L"Fecha";
			this->Fecha->Click += gcnew System::EventHandler(this, &ConsultarEA::Fecha_Click);
			// 
			// Evento
			// 
			this->Evento->AutoSize = true;
			this->Evento->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Evento->Location = System::Drawing::Point(356, 42);
			this->Evento->Name = L"Evento";
			this->Evento->Size = System::Drawing::Size(146, 13);
			this->Evento->TabIndex = 2;
			this->Evento->Text = L"No hay eventos para este dia";
			this->Evento->Click += gcnew System::EventHandler(this, &ConsultarEA::Evento_Click);
			// 
			// refrescos
			// 
			this->refrescos->AutoSize = true;
			this->refrescos->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refrescos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->refrescos->Location = System::Drawing::Point(497, 203);
			this->refrescos->Name = L"refrescos";
			this->refrescos->Size = System::Drawing::Size(50, 17);
			this->refrescos->TabIndex = 95;
			this->refrescos->Text = L"label13";
			// 
			// mesas
			// 
			this->mesas->AutoSize = true;
			this->mesas->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mesas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->mesas->Location = System::Drawing::Point(497, 134);
			this->mesas->Name = L"mesas";
			this->mesas->Size = System::Drawing::Size(50, 17);
			this->mesas->TabIndex = 93;
			this->mesas->Text = L"label13";
			// 
			// duracion
			// 
			this->duracion->AutoSize = true;
			this->duracion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duracion->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->duracion->Location = System::Drawing::Point(497, 99);
			this->duracion->Name = L"duracion";
			this->duracion->Size = System::Drawing::Size(50, 17);
			this->duracion->TabIndex = 92;
			this->duracion->Text = L"label13";
			// 
			// detalles
			// 
			this->detalles->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->detalles->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->detalles->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detalles->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->detalles->Location = System::Drawing::Point(30, 227);
			this->detalles->Multiline = true;
			this->detalles->Name = L"detalles";
			this->detalles->Size = System::Drawing::Size(196, 73);
			this->detalles->TabIndex = 90;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(27, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(203, 34);
			this->label12->TabIndex = 89;
			this->label12->Text = L"Detalles adicionales\r\n(Pueden presentar cargos extra): ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(500, 228);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(37, 21);
			this->checkBox1->TabIndex = 88;
			this->checkBox1->Text = L"Si";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(356, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 17);
			this->label9->TabIndex = 87;
			this->label9->Text = L"Barra libre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(356, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 17);
			this->label8->TabIndex = 86;
			this->label8->Text = L"No. de refrescos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(356, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 17);
			this->label7->TabIndex = 85;
			this->label7->Text = L"Menu";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(356, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 17);
			this->label6->TabIndex = 84;
			this->label6->Text = L"No. de mesas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(356, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 17);
			this->label5->TabIndex = 83;
			this->label5->Text = L"Duracion en horas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(356, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 17);
			this->label2->TabIndex = 82;
			this->label2->Text = L"Numero de personas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(594, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 96;
			this->label1->Text = L"X";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultarEA::label1_Click);
			// 
			// personas
			// 
			this->personas->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->personas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->personas->ForeColor = System::Drawing::SystemColors::Info;
			this->personas->Location = System::Drawing::Point(496, 69);
			this->personas->Name = L"personas";
			this->personas->Size = System::Drawing::Size(100, 20);
			this->personas->TabIndex = 97;
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->menu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->menu->ForeColor = System::Drawing::SystemColors::Info;
			this->menu->Location = System::Drawing::Point(496, 169);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(100, 20);
			this->menu->TabIndex = 98;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(496, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 99;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarEA::button1_Click);
			// 
			// plato
			// 
			this->plato->AutoSize = true;
			this->plato->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plato->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->plato->Location = System::Drawing::Point(265, 283);
			this->plato->Name = L"plato";
			this->plato->Size = System::Drawing::Size(96, 17);
			this->plato->TabIndex = 100;
			this->plato->Text = L"precio restante";
			// 
			// ConsultarEA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(620, 324);
			this->Controls->Add(this->plato);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->personas);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->refrescos);
			this->Controls->Add(this->mesas);
			this->Controls->Add(this->duracion);
			this->Controls->Add(this->detalles);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Evento);
			this->Controls->Add(this->Fecha);
			this->Controls->Add(this->Calendario1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConsultarEA";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ConsultarEA";
			this->Load += gcnew System::EventHandler(this, &ConsultarEA::ConsultarEA_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		DateTime^ a;
		a = Calendario1->SelectionRange->Start;
		this->Fecha->Text = a->ToString("dd-MM-yyyy");
		DateTime^ fecha;
		fecha = Calendario1->SelectionRange->Start;
		String^ sql = "select * from evento natural join calendario where fecha_calendario = '" + fecha->ToString("yyyy-MM-dd") + "';";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conexion);
		MySqlDataReader^ lector;

		try
		{
			conexion->Open();
			lector = cursor->ExecuteReader();
			if (lector->Read()) {
				String^ eid = lector->GetString("id_evento");
				String^ enombre = lector->GetString("nombre_evento");
				String^ epersonas = lector->GetString("personas_evento");
				String^ eprecio = lector->GetString("precio_evento");
				String^ eduracion = lector->GetString("duracion_evento");
				String^ emesas = lector->GetString("mesas_evento");
				String^ emenu = lector->GetString("menu_evento");
				String^ erefrescos = lector->GetString("refrescos_evento");
				String^ eadicionales = lector->GetString("adicionales_evento");
				this->Evento->Text = enombre;
				this->personas->Text = epersonas;
				this->duracion->Text = eduracion;
				this->plato->Text = "El precio restante es: "+ eprecio+"$";
				this->mesas->Text = emesas;
				this->menu->Text = emenu;
				this->refrescos->Text = erefrescos;
				this->detalles->Text = eadicionales;
				conexion->Close();
			}
			else{
				this->Evento->Text = "no hay eventos para este dia";
				this->Evento->Text = "";
				this->personas->Text = "";
				this->duracion->Text = "";
				this->plato->Text = "No hay evento asignado";
				this->mesas->Text = "";
				this->menu->Text = "";
				this->refrescos->Text = "";
				this->detalles->Text = "";
				conexion->Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	
	private: System::Void Evento_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Fecha_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ConsultarEA_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarEA::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "UPDATE `salon`.`evento` SET `personas_evento`='" + this->personas->Text + "', menu_evento='" + this->menu->Text + "',adicionales_evento='" + this->detalles->Text + "' WHERE `nombre_evento`='" + this->Evento->Text + "';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conexion);
	cursor->Connection->Open();
	cursor->ExecuteNonQuery();
	MessageBox::Show("Evento editado con exito");
	cursor->Connection->Close();
}
};
}
