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
	/// Resumen de EliminarCliente
	/// </summary>
	public ref class EliminarCliente : public System::Windows::Forms::Form
	{
	public:
		EliminarCliente(void)
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
		~EliminarCliente()
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
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EliminarCliente::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Digite cédula del cliente a elminar";
			// 
			// EliminarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 252);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"EliminarCliente";
			this->Text = L"EliminarCliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 int sw1 = 0;

				 StreamWriter^formAuxiliar = gcnew StreamWriter("Clientes1Aux.txt");
				 String^Linea2Aux = "";
				 StreamReader^formEliminar = gcnew StreamReader("Clientes1.txt");
				 String^Linea2 = formEliminar->ReadLine();

				 while (Linea2 != nullptr){
				 
					 Linea2Aux = Linea2;
					 array<Char>^chars = { ';' };
					 array<String^>^split = Linea2->Split(chars);

					 if (split[1] != this->textBox1->Text)
					 {
						 formAuxiliar->WriteLine(Linea2Aux);
						 Linea2 = formEliminar->ReadLine();
					 }

					 else
					 {
						 sw1 = 1;
						 Linea2 = formEliminar->ReadLine();
					 }

					

				 }

				 formAuxiliar->Close();
				 formEliminar->Close();

				 String^textoCompletoAux;
				textoCompletoAux = File::ReadAllText("Clientes1Aux.txt");
				 StreamWriter^clientesdeNuevo = gcnew StreamWriter("Clientes1.txt");

				 clientesdeNuevo->Write(textoCompletoAux);
				 clientesdeNuevo->Close();

				 this->textBox1->Clear();
				 if (sw1==0)
				 {
					 MessageBox::Show("Cédula no registrada, por favor verificar");


				 }

				 else
				 {
					 MessageBox::Show("Cliente borrado");

				 }



	}
	};
}
