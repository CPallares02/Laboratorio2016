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
	/// Resumen de ModificarProducto
	/// </summary>
	public ref class ModificarProducto : public System::Windows::Forms::Form
	{
	public:
		ModificarProducto(void)
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
		~ModificarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Codigo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Precio";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Digite codigo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 30);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Buscar Producto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarProducto::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(110, 194);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(85, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 41);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Modificar y Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarProducto::button2_Click);
			// 
			// ModificarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 322);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"ModificarProducto";
			this->Text = L"ModificarProducto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int sw2 = 0;

				 StreamReader^modificar = gcnew StreamReader("Productos1.txt");
				 String^lineaModificar = modificar->ReadLine();
				 StreamWriter^modAux = gcnew StreamWriter("Productos1Modificar.txt");

				 while (lineaModificar != nullptr && sw2 != 1)

				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split = lineaModificar->Split(chars);

					 if (split[0] == textBox1->Text)
					 {
						 textBox2->Text = split[0];
						 textBox3->Text = split[1];
						 textBox4->Text = split[2];
						 sw2 = 1;

					 }

					 else
					 {
						 modAux->WriteLine(lineaModificar);
					 }


					 lineaModificar = modificar->ReadLine();

				 }


				 StreamWriter^modAux1 = gcnew StreamWriter("Productos1AuxModificar.txt");

				 while (lineaModificar != nullptr)
				 {

					 modAux1->WriteLine(lineaModificar);

					 lineaModificar = modificar->ReadLine();


				 }

				 modAux1->Close();



				 sw2 = 0;
				 modAux->Close();
				 modificar->Close();


	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 int sw3 = 0;

			 StreamReader^modAux2 = gcnew StreamReader("Productos1Modificar.txt");
			 String^lineamodAux2 = modAux2->ReadLine();



			 while (lineamodAux2 != nullptr && sw3 == 0)
			 {

				 array<Char>^chars = { ';' };
				 array<String^>^split = lineamodAux2->Split(chars);

				 if (split[1] == textBox3->Text)
				 {
					 sw3 = sw3 + 3;
				 }

				 else
				 {
					 lineamodAux2 = modAux2->ReadLine();
				 }


			 }

			 modAux2->Close();


			 StreamReader^modAux3 = gcnew StreamReader("Productos1AuxModificar.txt");
			 String^lineamodAux3 = modAux3->ReadLine();



			 while (lineamodAux3 != nullptr && sw3 == 0)
			 {

				 array<Char>^chars = { ';' };
				 array<String^>^split = lineamodAux3->Split(chars);

				 if (split[0] == textBox2->Text)
				 {
					 sw3 = sw3 + 3;
				 }

				 else
				 {
					 lineamodAux3 = modAux3->ReadLine();
				 }



			 }

			 modAux3->Close();






			 if (sw3 == 0)
			 {

				 String^modificaCliente = this->textBox2->Text + ";" + this->textBox3->Text +";" + this->textBox4->Text;

				 StreamReader^terminarMod1 = gcnew StreamReader("Productos1Modificar.txt");
				 String^textoCompleto = File::ReadAllText("Productos1Modificar.txt");

				 StreamReader^terminarMod2 = gcnew StreamReader("Productos1Modificar.txt");
				 String^textoCompleto1 = File::ReadAllText("Productos1AuxModificar.txt");

				 StreamWriter^modFinal = gcnew StreamWriter("Productos1.txt");
				 modFinal->Write(textoCompleto);
				 modFinal->WriteLine(modificaCliente);
				 modFinal->Write(textoCompleto1);

				 terminarMod1->Close();
				 terminarMod2->Close();
				 modFinal->Close();

				 MessageBox::Show("Cambio exitoso");
				 this->textBox1->Clear();
				 this->textBox2->Clear();
				 this->textBox3->Clear();
				 this->textBox4->Clear();
				 
				 




			 }

			 else
			 {
				 MessageBox::Show("Codigo existente");
			 }

			 sw3 = 0;



}
};
}
