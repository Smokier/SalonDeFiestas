#pragma once
#include "AgregarE2.h"
#include "ConsultarE.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Resumen de UsuarioC
	/// </summary>
	public ref class UsuarioC : public System::Windows::Forms::Form
	{
	public:MySqlConnection^ Conexion;
	private: System::Windows::Forms::Label^ Nombre1;
	public:
	public:MySqlDataReader^ Lector;
	public:
		UsuarioC(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	public:
		UsuarioC(MySqlConnection^ conn, MySqlDataReader^ dataReader)
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
		~UsuarioC()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button3;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Nombre1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(72, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 46);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Consultar evento";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UsuarioC::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 46);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar evento";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UsuarioC::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(197, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"cerrar sesion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UsuarioC::button2_Click);
			// 
			// Nombre1
			// 
			this->Nombre1->AutoSize = true;
			this->Nombre1->Location = System::Drawing::Point(30, 17);
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Size = System::Drawing::Size(35, 13);
			this->Nombre1->TabIndex = 11;
			this->Nombre1->Text = L"label1";
			this->Nombre1->Click += gcnew System::EventHandler(this, &UsuarioC::Nombre1_Click);
			// 
			// UsuarioC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Nombre1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"UsuarioC";
			this->Text = L"UsuarioC";
			this->Load += gcnew System::EventHandler(this, &UsuarioC::UsuarioC_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarE^ consultar = gcnew ConsultarE;
		consultar->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		UsuarioC::Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarE2^ agregar = gcnew AgregarE2(Conexion,Lector);
		agregar->Show();
	}
	private: System::Void UsuarioC_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ datos;
		datos = Lector->GetString("correo_usuario");
		this->Nombre1->Text = "bienvenido " + datos;
	}
private: System::Void Nombre1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
