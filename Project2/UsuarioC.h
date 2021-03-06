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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UsuarioC::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Nombre1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SteelBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(43, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 46);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Consultar evento";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UsuarioC::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Purple;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(43, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 46);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar evento";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UsuarioC::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(12, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"cerrar sesion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UsuarioC::button2_Click);
			// 
			// Nombre1
			// 
			this->Nombre1->AutoSize = true;
			this->Nombre1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->Nombre1->Location = System::Drawing::Point(40, 25);
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Size = System::Drawing::Size(47, 15);
			this->Nombre1->TabIndex = 11;
			this->Nombre1->Text = L"label1";
			this->Nombre1->Click += gcnew System::EventHandler(this, &UsuarioC::Nombre1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(177, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(463, 308);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// UsuarioC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(636, 309);
			this->Controls->Add(this->Nombre1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UsuarioC";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UsuarioC";
			this->Load += gcnew System::EventHandler(this, &UsuarioC::UsuarioC_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ConsultarE^ consultar = gcnew ConsultarE(Conexion, Lector);
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
