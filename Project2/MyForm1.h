#pragma once
#include "AgregarP.h"
#include "ConsultarP.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ Nombre1;
	public:MySqlConnection^ Conexion;
	public:MySqlDataReader^ Lector;
	public:MyForm1(void)
	{
		InitializeComponent();
		//
		//TODO: agregar código de constructor aquí
		//
	}
	public:MyForm1(MySqlConnection^ conn, MySqlDataReader^ dataReader)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button6;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Nombre1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Agregar paquete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(42, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Consultar paquetes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(236, 47);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 46);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Consultar eventos";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(301, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"cerrar sesion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// Nombre1
			// 
			this->Nombre1->AutoSize = true;
			this->Nombre1->Location = System::Drawing::Point(39, 9);
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Size = System::Drawing::Size(35, 13);
			this->Nombre1->TabIndex = 12;
			this->Nombre1->Text = L"label1";
			this->Nombre1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 301);
			this->Controls->Add(this->Nombre1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"Control del administrador";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ datos;
		datos = Lector->GetString("correo_usuario");
		this->Nombre1->Text = "bienvenido "+datos;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarP^ agregar = gcnew AgregarP;
	agregar->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarP^ consultar = gcnew ConsultarP;
	consultar->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1::Close();
	Conexion->Close();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
