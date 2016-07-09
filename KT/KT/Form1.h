#pragma once

namespace KT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(476, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Температура по Цельсию";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 278);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(476, 31);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Температура по ";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Фаренгейту", L"Кельвину", L"Ранкину", L"Делилю", 
				L"Ньютону", L"Реомюру", L"Рёмеру"});
			this->comboBox1->Location = System::Drawing::Point(204, 239);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 33);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"(Не выбрано)";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 776);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L" Конвертор температуры";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				if (textBox1->Text != "" && textBox1->Text != "-")
			 switch (comboBox1->SelectedIndex){
				 case 0:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*1.8+32);break;
				 case 1:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)+273.15);break;
				 case 2:textBox2->Text = Convert:: ToString(((Convert::ToDouble(textBox1->Text))+273.15)*1.8);break;
				 case 3:textBox2->Text = Convert:: ToString((100-(Convert::ToDouble(textBox1->Text)))*1.5);break;
				 case 4:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*0.33);break;
				 case 5:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*0.8);break;
				 case 6:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*0.525+7.5);break;
				 }
			 else textBox2->Text="Температура не задана.";
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && textBox1->Text != "-")
			 switch (comboBox1->SelectedIndex){
				 case 0:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*1.8+32);break;
				 case 1:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)+273.15);break;
				 case 2:textBox2->Text = Convert:: ToString(((Convert::ToDouble(textBox1->Text))+273.15)*1.8);break;
				 case 3:textBox2->Text = Convert:: ToString((100-(Convert::ToDouble(textBox1->Text)))*1.5);break;
				 case 4:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*0.33);break;
				 case 5:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*0.8);break;
				 case 6:textBox2->Text = Convert:: ToString(Convert::ToDouble(textBox1->Text)*0.525+7.5);break;
				 }
			 else textBox2->Text="Температура не задана.";
		 }
};
}

