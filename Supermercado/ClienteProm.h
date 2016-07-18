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
	/// Resumen de ClienteProm
	/// </summary>
	public ref class ClienteProm : public System::Windows::Forms::Form
	{
	public:
		ClienteProm(void)
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
		~ClienteProm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clientes con puntos acmulados mayor a 100PTS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ClienteProm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(350, 316);
			this->dataGridView1->TabIndex = 1;
			// 
			// ClienteProm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 412);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"ClienteProm";
			this->Text = L"ClienteProm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 int contador = 0;
				
				 StreamReader^contar = gcnew StreamReader("Clientes1Promociones.txt");
				 String^ dato = contar->ReadLine();
				 int contador1 = 0;

				 while (dato!=nullptr)
				 {
					 contador1++;
					 dato = contar->ReadLine();
				 }
				 contar->Close();

				 int contador2 = contador1;

				 StreamReader^contar1= gcnew StreamReader("Clientes1Promociones.txt");
				 String^ dato1 = contar1->ReadLine();

				 dataGridView1->RowCount = contador2;

				 for (int i = 0; i < contador2;i++){

					 dataGridView1[0, i]->Value = dato1;
					 dato1 = contar1->ReadLine();
				 }
				 contar1->Close();
				 contador = 0;

				


	}
	
};
}
