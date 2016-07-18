#pragma once
#include "ListarClientes.h"
#include "CrearCliente.h"
#include "EliminarCliente.h"
#include "ModificarDatos.h"
namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
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
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Listar Clientes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Clientes::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Nuevo Cliente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Clientes::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Eliminar Cliente";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Clientes::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 69);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Modificar Datos";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Clientes::button4_Click);
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


				 StreamReader^formLineaAntes = gcnew StreamReader("Clientes1.txt");
				 String^LineaAntes = formLineaAntes->ReadLine();

				 if (LineaAntes == nullptr){
					 MessageBox::Show("Registros vacios");
				 }
				 else
				 {
					 ListarClientes^form1 =gcnew ListarClientes;
					 form1->Show();
				 }
				 formLineaAntes->Close();

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 CrearCliente^form2 = gcnew CrearCliente;
				 form2->Show();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 StreamReader^formLineaAntes1 = gcnew StreamReader("Clientes1.txt");
				 String^LineaAntes1 = formLineaAntes1->ReadLine();

				 if (LineaAntes1 == nullptr){
					 MessageBox::Show("Registros vacios");
				 }
				 else
				 {
					 EliminarCliente^form3 = gcnew EliminarCliente;
					 form3->Show();
				 }
				 formLineaAntes1->Close();

			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				 ModificarDatos^form4 = gcnew ModificarDatos;
				 form4->Show();


	}
};
}
