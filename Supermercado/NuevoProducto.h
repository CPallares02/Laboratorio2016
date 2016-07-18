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
	/// Resumen de NuevoProducto
	/// </summary>
	public ref class NuevoProducto : public System::Windows::Forms::Form
	{
	public:
		NuevoProducto(void)
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
		~NuevoProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(126, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(126, 179);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Codigo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Precio";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Guardar Datos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NuevoProducto::button1_Click);
			// 
			// NuevoProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 316);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"NuevoProducto";
			this->Text = L"NuevoProducto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {



				 int sw = 0;

				 StreamReader^formAux = gcnew StreamReader("Productos1.txt");
				 String^LineaAux = formAux->ReadLine();




				 while (LineaAux != nullptr && sw != 1)
				 {

					 array<Char>^chars = { ';' };
					 array<String^>^split = LineaAux->Split(chars);
					 if (split[0] == textBox1->Text)
					 {
						 sw = 1;
					 }

					 else
					 {
						 LineaAux = formAux->ReadLine();

					 }
				 }
				 formAux->Close();






				 if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" )
				 {


					 MessageBox::Show("Faltan campos por llenar");

				 }

				 else
				 {


					 
					 if (textBox1->Text->Length < 4 )
						 {
							 MessageBox::Show("Codigo demasiado corto, por favor verificar");
						 }


						 else
						 {


							 if (textBox1->Text->Length > 4)
							 {
								 MessageBox::Show("Codigo demasiado largo, por favor verificar");


							 }

							 else
							 {

									 if (sw == 1)
							 {
								 MessageBox::Show("Este producto ya existe, verificar por codigo");

							 }

							 else
							 {
								 String^textoCompleto = "";
								 textoCompleto = File::ReadAllText("Productos1.txt");
								 StreamWriter^nuevo = gcnew StreamWriter("Productos1.txt");
								 String^nuevoCliente = this->textBox1->Text + ";" + this->textBox2->Text + ";" + this->textBox3->Text;
								 nuevo->Write(textoCompleto);
								 nuevo->WriteLine(nuevoCliente);
								 nuevo->Close();

								 MessageBox::Show("Registro exitoso");


								 this->textBox1->Clear();
								 this->textBox2->Clear();
								 this->textBox3->Clear();

								 sw = 0;

							 }
						 }
					 }


				 }





	}
};
}
