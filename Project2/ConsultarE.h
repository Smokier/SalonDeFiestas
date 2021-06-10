#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarE
	/// </summary>
	public ref class ConsultarE : public System::Windows::Forms::Form
	{
	public:
		ConsultarE(void)
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
		~ConsultarE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ refrescos;
	private: System::Windows::Forms::TextBox^ menu;
	private: System::Windows::Forms::TextBox^ mesas;
	private: System::Windows::Forms::TextBox^ Duracion;
	private: System::Windows::Forms::TextBox^ precio;
	private: System::Windows::Forms::TextBox^ personas;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->refrescos = (gcnew System::Windows::Forms::TextBox());
			this->menu = (gcnew System::Windows::Forms::TextBox());
			this->mesas = (gcnew System::Windows::Forms::TextBox());
			this->Duracion = (gcnew System::Windows::Forms::TextBox());
			this->precio = (gcnew System::Windows::Forms::TextBox());
			this->personas = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(143, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 74;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(550, 129);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 92);
			this->textBox2->TabIndex = 73;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(547, 102);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(164, 26);
			this->label12->TabIndex = 72;
			this->label12->Text = L"Detalles adicionales\r\n(Pueden presentar cargos extra): ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 133);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 71;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Precio por plato";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(426, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 38);
			this->button2->TabIndex = 69;
			this->button2->Text = L"Realizar pago";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConsultarE::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(319, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 38);
			this->button1->TabIndex = 68;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(283, 285);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 67;
			this->label11->Text = L"$";
			// 
			// refrescos
			// 
			this->refrescos->Location = System::Drawing::Point(407, 167);
			this->refrescos->Name = L"refrescos";
			this->refrescos->Size = System::Drawing::Size(100, 20);
			this->refrescos->TabIndex = 66;
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(407, 133);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(100, 20);
			this->menu->TabIndex = 65;
			// 
			// mesas
			// 
			this->mesas->Location = System::Drawing::Point(407, 99);
			this->mesas->Name = L"mesas";
			this->mesas->Size = System::Drawing::Size(100, 20);
			this->mesas->TabIndex = 64;
			// 
			// Duracion
			// 
			this->Duracion->Location = System::Drawing::Point(143, 167);
			this->Duracion->Name = L"Duracion";
			this->Duracion->Size = System::Drawing::Size(100, 20);
			this->Duracion->TabIndex = 63;
			// 
			// precio
			// 
			this->precio->Location = System::Drawing::Point(177, 282);
			this->precio->Name = L"precio";
			this->precio->Size = System::Drawing::Size(100, 20);
			this->precio->TabIndex = 62;
			// 
			// personas
			// 
			this->personas->Location = System::Drawing::Point(143, 99);
			this->personas->Name = L"personas";
			this->personas->Size = System::Drawing::Size(100, 20);
			this->personas->TabIndex = 61;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(457, 203);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(40, 17);
			this->checkBox2->TabIndex = 60;
			this->checkBox2->Text = L"No";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(407, 203);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(35, 17);
			this->checkBox1->TabIndex = 59;
			this->checkBox1->Text = L"Si";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(291, 236);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 58;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(291, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Barra libre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(291, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 56;
			this->label8->Text = L"No. de refrescos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(291, 136);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Menu";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(291, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 54;
			this->label6->Text = L"No. de mesas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 53;
			this->label5->Text = L"Duracion en horas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Precio estimado del evento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Numero de personas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Tus eventos";
			// 
			// ConsultarE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 409);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->refrescos);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->mesas);
			this->Controls->Add(this->Duracion);
			this->Controls->Add(this->precio);
			this->Controls->Add(this->personas);
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
			this->Name = L"ConsultarE";
			this->Text = L"ConsultarE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
