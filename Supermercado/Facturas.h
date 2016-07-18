#pragma once
#include "ListarFacturas.h"
#include "ListarFacturaCliente.h"
namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Resumen de Facturas
	/// </summary>
	public ref class Facturas : public System::Windows::Forms::Form
	{
	public:
		Facturas(void)
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
		~Facturas()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Listar Facturas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Facturas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 69);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Factura por Cliente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Facturas::button2_Click);
			// 
			// Facturas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(271, 140);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Facturas";
			this->Text = L"Facturas";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 ListarFacturas^form1 = gcnew ListarFacturas;
				 form1->Show();


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 ListarFacturaCliente^form2 = gcnew ListarFacturaCliente;
				 form2->Show();

	}
};
}
