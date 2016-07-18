#pragma once
#include "Clientes.h"
#include "Facturas.h"
#include"Productos.h"
#include "Comprar.h"
#include "Fidelizacion.h"

namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 109);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clientes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 109);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Facturas";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(38, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 109);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Productos";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(232, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 109);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Comprar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Inicio::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(38, 338);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 109);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Fidelización";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Inicio::button5_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 486);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


				 Clientes^form1 = gcnew Clientes;
				 form1->Show();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 Facturas^form2 =gcnew Facturas;
			 form2->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 Productos^Form3 =gcnew Productos;
			 Form3->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 Comprar^form4 = gcnew Comprar;
			 form4->Show();
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 Fidelizacion^form5 = gcnew Fidelizacion;
			 form5->Show();

}

};
}
