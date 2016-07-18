#pragma once

namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System ::IO;

	/// <summary>
	/// Resumen de ListarClientes
	/// </summary>
	public ref class ListarClientes : public System::Windows::Forms::Form
	{
	public:
		
		int contador;
		ListarClientes(void)
		{ int contador = 0;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~ListarClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	protected: 

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(386, 258);
			this->dataGridView1->TabIndex = 0;
			// 
			// ListarClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 345);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ListarClientes";
			this->Text = L"ListarClientes";
			this->Load += gcnew System::EventHandler(this, &ListarClientes::ListarClientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListarClientes_Load(System::Object^  sender, System::EventArgs^  e) {

				
				
				 StreamReader^clientes=gcnew StreamReader("Clientes1.txt");
				 String ^Linea=clientes->ReadLine();


				
					 while (Linea != nullptr)
					 {
						 contador++;
						 Linea = clientes->ReadLine();
					 }


					 clientes->Close();

					 dataGridView1->RowCount = contador;
					 dataGridView1->ColumnCount = 5;

					 StreamReader^clientes1 = gcnew StreamReader("Clientes1.txt");
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

					 clientes1->Close();
					 clientes->Close();

				 }

			
	
};
}
