#pragma once
#include <string>
#include <vector>
#include "fstream"
#include <msclr\marshal_cppstd.h>

namespace cryptographyswap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 135);
			this->textBox1->TabIndex = 0;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(266, 32);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 135);
			this->textBox2->TabIndex = 1;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Исходный текст:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(262, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Криптограмма:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выбрать файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 231);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 135);
			this->textBox3->TabIndex = 5;
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Пример текста:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(266, 231);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(244, 135);
			this->textBox4->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(244, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Выбрать файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(262, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Расшифрованный текст:";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1041, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ключ:";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(1045, 32);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(113, 22);
			this->textBox5->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(1045, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 29);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Зашифровать";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(1045, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 29);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Расшифровать";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(1045, 165);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 29);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Дешифровать";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(1045, 130);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(113, 29);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Анализ";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 491);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Шифр простой перестановки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // Выбрать файл
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }

		string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);

		vector<string> lines = ReadFile_(filename);

		DisplayWords(lines, this->textBox1);

		this->textBox1->Focus();
		this->button1->Focus();
	}

	template <class T>
	void DisplayWords(T words, System::Windows::Forms::TextBox^ textBox) { // Вывод слов
		System::String^ word;
		string wordBuffer;
		;
		T::iterator itr;

		for (itr = words.begin(); itr != words.end(); itr++) {
			wordBuffer = *itr;
			word += gcnew System::String(wordBuffer.c_str());
			word += " ";
		}

		textBox->Text = word;
	}

	vector<string> ReadFile_(string filename) { // Чтение файла
		ifstream file;
		file.open(filename);

		vector<string> lines;

		string line;
		while (getline(file, line))
		{
			lines.push_back(line);
		}

		file.close();

		return lines;
	}

	System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // Выбрать файл
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }

		string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);

		vector<string> lines = ReadFile_(filename);

		DisplayWords(lines, this->textBox3);

		this->textBox3->Focus();
		this->button2->Focus();
	}

	System::Void TextValidate(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) { // Валидация
		TextBox^ textbox = safe_cast<TextBox^>(sender);
		textbox->Text = System::Text::RegularExpressions::Regex::Replace(textbox->Text, "[^а-я ]", "");
	}
};
}
