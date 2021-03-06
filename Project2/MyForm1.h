#pragma once
#include "AgregarP.h"
#include "ConsultarP.h"
#include "ConsultarEA.h"


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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Nombre1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(42, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Agregar paquete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(134, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Consultar paquetes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(236, 91);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 46);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Consultar eventos";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(282, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 29);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cerrar sesion";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// Nombre1
			// 
			this->Nombre1->AutoSize = true;
			this->Nombre1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->Nombre1->Location = System::Drawing::Point(39, 19);
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Size = System::Drawing::Size(47, 15);
			this->Nombre1->TabIndex = 12;
			this->Nombre1->Text = L"label1";
			this->Nombre1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(274, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 17);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(416, 301);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Nombre1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Control del administrador";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	ConsultarEA^ eventos = gcnew ConsultarEA;
	eventos->Show();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
