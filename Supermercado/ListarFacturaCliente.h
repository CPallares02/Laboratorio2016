#pragma once

namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de ListarFacturaCliente
	/// </summary>
	public ref class ListarFacturaCliente : public System::Windows::Forms::Form
	{
	public:
		ListarFacturaCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~ListarFacturaCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(159, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar Factura";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListarFacturaCliente::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Digite Código de Factura";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(318, 248);
			this->dataGridView1->TabIndex = 3;
			// 
			// ListarFacturaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 364);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"ListarFacturaCliente";
			this->Text = L"ListarFacturaCliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 int sw = 0;
				 String^total = "";
				 String^productos = "";
				 String^fecha = "";

				 StreamReader^facturasClientes = gcnew StreamReader("Facturas1.txt");
				 String^codigofactura = facturasClientes->ReadLine();

				 while (codigofactura != nullptr || sw == 0)
				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split = codigofactura->Split(chars);

					 if (split[0] == textBox1->Text)
					 {
						 total = split[1];
						 fecha = split[4];
						 productos = split[3];
						 sw = 1;
					 }
					 codigofactura = facturasClientes->ReadLine();

				 }

				 facturasClientes->Close();

				 array<Char>^chars = { ',' };
				 array<String^>^split = productos->Split(chars);

				 int go = sizeof	(productos->Split(chars));

				 if (sw == 0)
				 {
					 MessageBox::Show("Código errado");

				 }

				 else
				 {
					 go = go + 1;
					 dataGridView1->RowCount = go;
					 dataGridView1->ColumnCount = 3;
					 for (int i = 0; i < go - 1; i++)
					 {
						 dataGridView1[1, i]->Value = split[i];

					 }


					 dataGridView1[2, go - 1]->Value = total;
					 dataGridView1[0, 0]->Value = fecha;
				 }


	}
	};
}
