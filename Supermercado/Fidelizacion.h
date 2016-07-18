#pragma once
#include "PrecioTotal.h"
#include "ClienteProm.h"
#include "MayoresADiez.h";


namespace Supermercado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Fidelizacion
	/// </summary>
	public ref class Fidelizacion : public System::Windows::Forms::Form
	{
	public:
		Fidelizacion(void)
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
		~Fidelizacion()
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 84);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clientes para promociones";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Fidelizacion::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Location = System::Drawing::Point(198, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 84);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Clientes con compras acumuladas entre 10.000 y más";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Fidelizacion::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(39, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 84);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Valor de Compras totales";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Fidelizacion::button3_Click);
			// 
			// Fidelizacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(355, 266);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Fidelizacion";
			this->Text = L"Fidelizacion";
			this->Load += gcnew System::EventHandler(this, &Fidelizacion::Fidelizacion_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				
				 PrecioTotal^form1 = gcnew PrecioTotal;
				 form1->Show();

	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 	
			 ClienteProm^form2 = gcnew ClienteProm;
			 form2->Show();
			 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


			 MayoresADiez^form3 = gcnew MayoresADiez;
			 form3->Show();


}
private: System::Void Fidelizacion_Load(System::Object^  sender, System::EventArgs^  e) {


			 int puntos1 = 0;
			 int contador = 0;
			 int compratotal = 0;
			 String ^ datospromociones = "";

			 StreamReader^ cedula = gcnew StreamReader("Clientes1.txt");
			 String^ ced1 = cedula->ReadLine();

			 while (ced1 != nullptr)
			 {
				 array<Char>^chars = { ';' };
				 array<String^>^split = ced1->Split(chars);

				 StreamReader^ puntos = gcnew StreamReader("Facturas1Aux.txt");
				 String^ pet1 = puntos->ReadLine();



				 while (pet1 != nullptr)
				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split1 = pet1->Split(chars);

					 if (split[1] == split1[0])
					 {
						 puntos1 = puntos1 + System::Int32::Parse(split1[2]);
						 compratotal = compratotal + System::Int32::Parse(split1[1]);

					 }



					 pet1 = puntos->ReadLine();
				 }

				 puntos->Close();

				 if (puntos1 >50){

					 datospromociones = File::ReadAllText("Clientes1Promociones.txt");
					 StreamWriter^clientespromociones = gcnew StreamWriter("Clientes1Promociones.txt");
					 clientespromociones->Write(datospromociones);
					 clientespromociones->WriteLine(split[0]);
					 clientespromociones->Close();
				 }

				 if (compratotal > 9999)
				 {
					 String^ datospromociones1 = File::ReadAllText("Clientes1Mayores10.txt");
					 StreamWriter^clientespromociones1 = gcnew StreamWriter("Clientes1Mayores10.txt");
					 clientespromociones1->Write(datospromociones1);
					 clientespromociones1->WriteLine(split[0]);
					 clientespromociones1->Close();
				 }

				 compratotal = 0;
				 puntos1 = 0;
				 ced1 = cedula->ReadLine();
			 }


			 cedula->Close();

}
};
}
