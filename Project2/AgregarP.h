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
	/// Resumen de AgregarP
	/// </summary>
	public ref class AgregarP : public System::Windows::Forms::Form
	{
	public:
		AgregarP(void)
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
		~AgregarP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; password=n0m3l0; username=root; database=salon;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::TextBox^ personas;
	private: System::Windows::Forms::TextBox^ precio;




	private: System::Windows::Forms::TextBox^ Duracion;
	private: System::Windows::Forms::TextBox^ mesas;
	private: System::Windows::Forms::TextBox^ menu;
	private: System::Windows::Forms::TextBox^ refrescos;





	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->personas = (gcnew System::Windows::Forms::TextBox());
			this->precio = (gcnew System::Windows::Forms::TextBox());
			this->Duracion = (gcnew System::Windows::Forms::TextBox());
			this->mesas = (gcnew System::Windows::Forms::TextBox());
			this->menu = (gcnew System::Windows::Forms::TextBox());
			this->refrescos = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre del paquete";
			this->label1->Click += gcnew System::EventHandler(this, &AgregarP::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero de personas";
			this->label2->Click += gcnew System::EventHandler(this, &AgregarP::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precio del paquete";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Duracion en horas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(280, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"No. de mesas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(280, 81);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Menu";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(280, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"No. de refrescos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(280, 149);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Barra libre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(280, 181);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 9;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(396, 148);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(35, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Si";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AgregarP::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(446, 148);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(40, 17);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"No";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(132, 47);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(100, 20);
			this->nombre->TabIndex = 12;
			this->nombre->TextChanged += gcnew System::EventHandler(this, &AgregarP::textBox1_TextChanged);
			// 
			// personas
			// 
			this->personas->Location = System::Drawing::Point(132, 78);
			this->personas->Name = L"personas";
			this->personas->Size = System::Drawing::Size(100, 20);
			this->personas->TabIndex = 13;
			// 
			// precio
			// 
			this->precio->Location = System::Drawing::Point(132, 112);
			this->precio->Name = L"precio";
			this->precio->Size = System::Drawing::Size(100, 20);
			this->precio->TabIndex = 14;
			// 
			// Duracion
			// 
			this->Duracion->Location = System::Drawing::Point(132, 146);
			this->Duracion->Name = L"Duracion";
			this->Duracion->Size = System::Drawing::Size(100, 20);
			this->Duracion->TabIndex = 16;
			// 
			// mesas
			// 
			this->mesas->Location = System::Drawing::Point(396, 44);
			this->mesas->Name = L"mesas";
			this->mesas->Size = System::Drawing::Size(100, 20);
			this->mesas->TabIndex = 17;
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(396, 78);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(100, 20);
			this->menu->TabIndex = 18;
			// 
			// refrescos
			// 
			this->refrescos->Location = System::Drawing::Point(396, 112);
			this->refrescos->Name = L"refrescos";
			this->refrescos->Size = System::Drawing::Size(100, 20);
			this->refrescos->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(238, 115);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"$";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(308, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 38);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarP::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 38);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AgregarP::button2_Click);
			// 
			// AgregarP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 268);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->refrescos);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->mesas);
			this->Controls->Add(this->Duracion);
			this->Controls->Add(this->precio);
			this->Controls->Add(this->personas);
			this->Controls->Add(this->nombre);
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
			this->Name = L"AgregarP";
			this->Load += gcnew System::EventHandler(this, &AgregarP::AgregarP_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AgregarP_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "insert into paquete (nombre_paquete,personas_paquete,precio_paquete,duracion_paquete,mesas_paquete,menu_paquete,refrescos_paquete)values('"+nombre->Text +"',"+personas->Text +","+precio->Text +","+Duracion->Text +","+mesas->Text +",'"+menu->Text +"',"+refrescos->Text +");";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
	cursor->Connection->Open();
	cursor->ExecuteNonQuery();
	MessageBox::Show("paquete registrado con exito");
	this->conn->Close();
	AgregarP::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarP::Close();
}
};
}
