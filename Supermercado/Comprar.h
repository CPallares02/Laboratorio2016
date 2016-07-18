#pragma once
#include "time.h"
#include<stdlib.h>
namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Comprar
	/// </summary>
	public ref class Comprar : public System::Windows::Forms::Form
	{
	public:
		int precio, acum, factura;
		Comprar(void)
		{
			InitializeComponent();
			acum=0;
			precio = 0;
			factura = 0;
			
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Comprar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(23, 48);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(221, 276);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// listView2
			// 
			this->listView2->Location = System::Drawing::Point(377, 48);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(221, 276);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Comprar::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Descartar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(630, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Total :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(633, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 35);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Efectuar Compra";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Comprar::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(470, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Carrito";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(99, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Inventario";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(633, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(633, 240);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(673, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 11;
			// 
			// Comprar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 342);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Name = L"Comprar";
			this->Text = L"Comprar";
			this->Load += gcnew System::EventHandler(this, &Comprar::Comprar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Comprar_Load(System::Object^  sender, System::EventArgs^  e) {


			 StreamReader^lista = gcnew StreamReader("Productos1.txt");
			 String^producto = lista->ReadLine();

			 while (producto != nullptr)
			 {

				 array<Char>^chars = { ';' };
				 array<String^>^split = producto->Split(chars);

				 ListViewItem^ listItem = gcnew ListViewItem(split[1] + "-" + split[2]);
				 listView1->Items->Add(listItem);
				 producto = lista->ReadLine();
			 }
			 this->Controls->Add(listView1);

			 lista->Close();



}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


			 int sw = 0;
			 String^ archivoAux = "";
			 String^ item = listView1->SelectedItems[0]->Text;

			 array<Char>^chars = { '-' };
			 array<String^>^split = item->Split(chars);
			 String^nombreproducto = split[0];


			 ListViewItem^nuevoItem = gcnew ListViewItem(item);
			 listView2->Items->Add(nuevoItem);

			 archivoAux = File::ReadAllText("Comprar1Aux.txt");

			 StreamWriter ^compra = gcnew StreamWriter("Comprar1Aux.txt");
			 compra->Write(archivoAux);
			 compra->WriteLine(item);

			 compra->Close();


			 StreamReader^lista1 = gcnew StreamReader("Productos1.txt");
			 String^aux = lista1->ReadLine();


			 while (aux != nullptr || sw == 0)
			 {
				 array<Char>^chars = { ';' };
				 array<String^>^split = aux->Split(chars);

				 if (split[1] == nombreproducto)
				 {
					 sw = 1;
					 precio = System::Int32::Parse(split[2]);
				 }

				 aux = lista1->ReadLine();
			 }


			 lista1->Close();


			 acum = acum + precio;

			 label2->Text = Convert::ToString(acum);


}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


				 srand(time(NULL));
				 int  num = 1 + rand() % (1001 - 1);
				 
				

				 acum = 0;
				 precio = 0;
				 int sw1 = 0;
				 String^ lista = "";
				 String^ fcha = "";

				 String^cedula = this->textBox1->Text;

				 StreamReader^buscarCedula = gcnew StreamReader("Clientes1.txt");
				 String^valor1 = buscarCedula->ReadLine();

				 while (valor1 != nullptr || sw1 == 0)
				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split = valor1->Split(chars);

					 if (split[1] == cedula)
					 {
						 factura = factura + 1;
						 sw1 = 1;
					 }

					 valor1 = buscarCedula->ReadLine();
				 }

				 buscarCedula->Close();

				 				
				 if (sw1 = 1)
				 {


					 if (textBox2->Text == "")
					 {
						 MessageBox::Show("Digite Fecha");
					 }

					 else
					 {

						 for (int i = 0; i < listView2->Items->Count; i++)
						 {
							 String^productos11 = listView2->Items[i]->Text;
							 lista = productos11 + "," + lista;
						 }

						 for (int j = listView2->Items->Count-1; j <listView2->Items->Count; j++)
						 {
							 String^productos12 = listView2->Items[j]->Text;
							 lista = lista+productos12;
						 }


					 }






					 lista = Convert::ToString(num) + ";" + label2->Text + ";" + cedula + ";" + lista + ";" + textBox2->Text;

					 String^facturasCompletas = File::ReadAllText("Facturas1.txt");

					 StreamWriter^factura = gcnew StreamWriter("Facturas1.txt");

					 factura->Write(facturasCompletas);
					 factura->WriteLine(lista);

					 factura->Close();
					 textBox1->Clear();
					 textBox2->Clear();
					

					 for (int j = 0; j < listView2->Items->Count; j++)
					 {
						 listView2->Items[j]->Text = "";
					 }

					 MessageBox::Show("Compra exitosa");

					 /////////////////////////
					 String^textocompleto = "";
					
					 
					
					 String^ info = cedula + ";" + label2->Text + ";" + Convert::ToString(System::Int32::Parse(label2->Text) / 100);
					 label2->Text = "";

						textocompleto = File::ReadAllText("Facturas1Aux.txt");
						 StreamWriter^ fidelización = gcnew StreamWriter("Facturas1Aux.txt");


						 fidelización->Write(textocompleto);
						 fidelización->WriteLine(info);
						 fidelización->Close();
					 
						 					 
					 /////////////////////////

				
				 }

				 else
				 {
					 if (sw1 == 0)
					 {
						 MessageBox::Show("Cédula no registrada, agregue al archivo");
					 }

				 }
				 




			
}
};
}
