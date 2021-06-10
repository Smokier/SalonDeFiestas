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
	/// Resumen de ConsultarP
	/// </summary>
	public ref class ConsultarP : public System::Windows::Forms::Form
	{
	public:
		ConsultarP(void)
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
		~ConsultarP()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;










































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lista de paquetes existentes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(28, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(582, 356);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultarP::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Editar";
			this->Column1->Name = L"Column1";
			this->Column1->Text = L"Editar";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(535, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarP::button1_Click_1);
			// 
			// ConsultarP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 521);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultarP";
			this->Text = L"ConsultarP";
			this->Load += gcnew System::EventHandler(this, &ConsultarP::ConsultarP_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ConsultarP_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "select * from paquete;";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
	try {
		MySqlDataAdapter^ adap = gcnew MySqlDataAdapter;
		adap->SelectCommand = cursor;
		DataTable^ dbdataset = gcnew DataTable();
		adap->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		dataGridView1->DataSource = dbdataset;
		adap->Update(dbdataset);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ConsultarP::Close();
}
};
}
