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
	/// Resumen de ModificarDatos
	/// </summary>
	public ref class ModificarDatos : public System::Windows::Forms::Form
	{
	public:
		ModificarDatos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~ModificarDatos()
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
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(96, 180);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(96, 219);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(96, 260);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 30);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Buscar Cliente";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarDatos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(91, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Modificar y Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarDatos::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Digite c�dula";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Correo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Direcci�n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"C�dula";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Nombre";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Celular";
			// 
			// ModificarDatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 370);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"ModificarDatos";
			this->Text = L"ModificarDatos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 int sw2 = 0;
				
				 StreamReader^modificar = gcnew StreamReader("Clientes1.txt");
				 String^lineaModificar = modificar->ReadLine();
				 StreamWriter^modAux = gcnew StreamWriter("Clientes1Modificar.txt");

				 while (lineaModificar != nullptr && sw2 != 1)
				  
				 {
					 array<Char>^chars = { ';' };
					 array<String^>^split = lineaModificar->Split(chars);

					 if (split[1] == textBox1->Text)
					 {
						 textBox2->Text = split[0];
						 textBox3->Text = split[1];
						 textBox4->Text = split[2];
						 textBox5->Text = split[3];
						 textBox6->Text = split[4];
						 sw2 = 1;

					 }

					 else
					 { 
						 modAux->WriteLine(lineaModificar);
					 }
					

					 lineaModificar = modificar->ReadLine();

				 }


				 StreamWriter^modAux1 = gcnew StreamWriter("Clientes1AuxModificar.txt");
					
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

			 StreamReader^modAux2 = gcnew StreamReader("Clientes1Modificar.txt");
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


			 StreamReader^modAux3 = gcnew StreamReader("Clientes1AuxModificar.txt");
			 String^lineamodAux3 = modAux3->ReadLine();



			 while (lineamodAux3 != nullptr && sw3 == 0)
			 {

				 array<Char>^chars = { ';' };
				 array<String^>^split = lineamodAux3->Split(chars);

				 if (split[1] == textBox3->Text)
				 {
					 sw3 = sw3 + 3;
				 }

				 else
				 {
					lineamodAux3 = modAux3->ReadLine();
				 }

				 

			 }

			 modAux3->Close();






			 if (sw3==0)
			 {

				 String^modificaCliente = this->textBox2->Text + ";" + this->textBox3->Text + ";" + this->textBox4->Text + ";" + this->textBox5->Text + ";" + this->textBox6->Text;

				 StreamReader^terminarMod1 = gcnew StreamReader("Clientes1Modificar.txt");
				 String^textoCompleto = File::ReadAllText("Clientes1Modificar.txt");

				 StreamReader^terminarMod2 = gcnew StreamReader("Clientes1Modificar.txt");
				 String^textoCompleto1 = File::ReadAllText("Clientes1AuxModificar.txt");

				 StreamWriter^modFinal = gcnew StreamWriter("Clientes1.txt");
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
				 this->textBox5->Clear();
				 this->textBox6->Clear();




			 }

			 else
			 {
				 MessageBox::Show("C�dula existente");
			 }
			 
			 sw3 = 0;
			


}
};
}
