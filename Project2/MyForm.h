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
	private: System::Windows::Forms::CheckBox^ checkbox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cliente = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->correo = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(31, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Cliente
			// 
			this->Cliente->BackColor = System::Drawing::Color::SteelBlue;
			this->Cliente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Cliente->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Cliente->FlatAppearance->BorderSize = 0;
			this->Cliente->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cliente->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Cliente->Location = System::Drawing::Point(119, 235);
			this->Cliente->Name = L"Cliente";
			this->Cliente->Size = System::Drawing::Size(100, 38);
			this->Cliente->TabIndex = 2;
			this->Cliente->Text = L"iniciar sesion";
			this->Cliente->UseVisualStyleBackColor = false;
			this->Cliente->Click += gcnew System::EventHandler(this, &MyForm::Cliente_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Amethyst", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(28, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 66);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Your\r\nparty";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// correo
			// 
			this->correo->BackColor = System::Drawing::Color::Black;
			this->correo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->correo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correo->ForeColor = System::Drawing::Color::White;
			this->correo->Location = System::Drawing::Point(34, 109);
			this->correo->Name = L"correo";
			this->correo->Size = System::Drawing::Size(179, 32);
			this->correo->TabIndex = 4;
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::Black;
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pass->Location = System::Drawing::Point(34, 162);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(179, 32);
			this->pass->TabIndex = 5;
			this->pass->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(31, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"correo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(31, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"contraseña";
			// 
			// checkbox
			// 
			this->checkbox->AutoSize = true;
			this->checkbox->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkbox->Location = System::Drawing::Point(35, 200);
			this->checkbox->Name = L"checkbox";
			this->checkbox->Size = System::Drawing::Size(184, 17);
			this->checkbox->TabIndex = 8;
			this->checkbox->Text = L"Acepto los termnos y condiciones";
			this->checkbox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(227, -6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(496, 310);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(0, -6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(22, 31);
			this->button1->TabIndex = 10;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(716, 296);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Cliente);
			this->Controls->Add(this->checkbox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->correo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
			MessageBox::Show("usuario no registrado, contacte con el administador"+checkbox->Checked);

			conexion->Close();
		}
	}
	catch (Exception^e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
};
}
