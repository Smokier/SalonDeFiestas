#pragma once
#include "MyForm1.h"
#include "AgregarP.h"
#include "UsuarioC.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ Cliente;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ correo;
	private: System::Windows::Forms::TextBox^ pass;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cliente = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->correo = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Cliente
			// 
			this->Cliente->Location = System::Drawing::Point(310, 217);
			this->Cliente->Name = L"Cliente";
			this->Cliente->Size = System::Drawing::Size(100, 38);
			this->Cliente->TabIndex = 2;
			this->Cliente->Text = L"iniciar sesion";
			this->Cliente->UseVisualStyleBackColor = true;
			this->Cliente->Click += gcnew System::EventHandler(this, &MyForm::Cliente_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(112, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(259, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Salon de fiestas";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// correo
			// 
			this->correo->Location = System::Drawing::Point(202, 115);
			this->correo->Name = L"correo";
			this->correo->Size = System::Drawing::Size(100, 20);
			this->correo->TabIndex = 4;
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(202, 154);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(100, 20);
			this->pass->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"correo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"contraseña";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 305);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->correo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Cliente);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Cliente_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "datasource=localhost; password=n0m3l0; username=root; database=salon;";
	MySqlConnection^ conexion = gcnew MySqlConnection(connectionString);
	
	String^ sql = "select * from usuario where correo_usuario = '"+correo->Text+"' and pass_usuario = '"+pass->Text+"';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conexion);
	MySqlDataReader^ lector;

	try
	{
		conexion->Open();
		lector = cursor->ExecuteReader();
		if (lector->Read()) {
			String^ permiso;
			permiso = lector->GetString("permiso_usuario");
			if (permiso=="0") {
				MyForm1^ admin = gcnew MyForm1(conexion, lector);
				admin->Show();
			}
			else {
				UsuarioC^ usuarioC = gcnew UsuarioC(conexion, lector);
				usuarioC->Show();				
			}
		}
		else {
			MessageBox::Show("usuario no registrado, contacte con el administador");
			conexion->Close();
		}
	}
	catch (Exception^e)
	{
		MessageBox::Show(e->Message);
	}
}
};
}
