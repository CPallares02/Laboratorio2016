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
	/// Resumen de ListarFacturas
	/// </summary>
	public ref class ListarFacturas : public System::Windows::Forms::Form
	{
	public:
		ListarFacturas(void)
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
		~ListarFacturas()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(376, 311);
			this->dataGridView1->TabIndex = 2;
			// 
			// ListarFacturas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 375);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ListarFacturas";
			this->Text = L"ListarFacturas";
			this->Load += gcnew System::EventHandler(this, &ListarFacturas::ListarFacturas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		/*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 int sw1 = 0;
				 int contador = 0;
				 String^nombre = "";
				 String^ productos = "";
				 String^cedula=textBox1->Text;

				 StreamReader^datos = gcnew StreamReader("Facturas.txt");
				 String^datos1 = datos->ReadLine();




				 while (datos1 != nullptr || sw1 == 0)
				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split = datos1->Split(chars);

					 if (split[0] == textBox1->Text)
					 {

						nombre = split[0];
						 sw1 = 1;
						 dataGridView1[0, 0]->Value = nombre;

					 }

					 datos1 = datos->ReadLine();
				 }

				 datos->Close();

				 if (sw1==0)
				 {
					 MessageBox::Show("No existe facturas registradas con este código");

				 }

				 else
				 {
					 
					 sw1 = 0;
					 
					 StreamReader^datosFactura = gcnew StreamReader("Facturas1.txt");
					 String^datos1Factura = datosFactura->ReadLine();

					 while (sw1==0)
					 {

						 array<Char>^chars = { ';' };
						 array<String^>^split = datos1Factura->Split(chars);

						 if (split[2] == cedula)
						 {
							 sw1=1;
							productos = split[3];
						 }


						 datos1Factura = datosFactura->ReadLine();
					 }

					 
					 dataGridView1[0,0]->Value = nombre;

					 array<Char>^chars = { ',' };
					 array<String^>^split = productos->Split(chars);
					 

					 

					 					 
				 }




				 array<Char>^chars = { ';' };
				 array<String^>^split = datos1->Split(chars);
				 String^cedulaDato;





	}

			 /*/
	private: System::Void ListarFacturas_Load(System::Object^  sender, System::EventArgs^  e) {


				 int contador = 0;

				 StreamReader^clientes = gcnew StreamReader("Facturas1.txt");
				 String ^Linea = clientes->ReadLine();



				 while (Linea != nullptr)
				 {
					 contador++;
					 Linea = clientes->ReadLine();
				 }


				 clientes->Close();

				 dataGridView1->RowCount = contador;
				 dataGridView1->ColumnCount = 5;

				 StreamReader^clientes1 = gcnew StreamReader("Facturas1.txt");
				 String ^Linea1 = clientes1->ReadLine();

				 for (int i = 0; i <= contador; i++)
				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split = Linea1->Split(chars);

					 for (int j = 0; j < 5; j++)
					 {
						 
						 
							 dataGridView1[j, i]->Value = split[j];
						
					 }
					 Linea1 = clientes1->ReadLine();
				 }

				 dataGridView1->Columns[4]->Visible = false;


				 clientes1->Close();
				 clientes->Close();


	}
};
}
