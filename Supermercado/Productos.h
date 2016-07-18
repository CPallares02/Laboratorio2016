#pragma once
#include"ListarProductos.h"
#include"NuevoProducto.h"
#include"EliminarProducto.h"
#include"ModificarProducto.h"
namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Resumen de Productos
	/// </summary>
	public ref class Productos : public System::Windows::Forms::Form
	{
	public:
		Productos(void)
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
		~Productos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 69);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Modificar Producto";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Productos::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 69);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar Producto";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Productos::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 69);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Nuevo Producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Productos::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Listar Productos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Productos::button1_Click);
			// 
			// Productos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Productos";
			this->Text = L"Productos";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 StreamReader^formLineaAntes = gcnew StreamReader("Productos1.txt");
				 String^LineaAntes = formLineaAntes->ReadLine();

				 if (LineaAntes == nullptr){
					 MessageBox::Show("Registros vacios");
				 }
				 else
				 {
					 ListarProductos^form1 = gcnew ListarProductos;
					 form1->Show();
				 }
				 formLineaAntes->Close();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 NuevoProducto^form2 = gcnew NuevoProducto;
				 form2->Show();

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


			 StreamReader^formLineaAntes = gcnew StreamReader("Productos1.txt");
			 String^LineaAntes = formLineaAntes->ReadLine();

			 if (LineaAntes == nullptr){
				 MessageBox::Show("Registros vacios");
			 }
			 else
			 {
				 EliminarProducto^form3 = gcnew EliminarProducto;
				 form3->Show();
			 }
			 formLineaAntes->Close();

			


}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 ModificarProducto^form4 = gcnew ModificarProducto;
			 form4->Show();

}
};
}
