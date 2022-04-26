#pragma once
#include <string>
#include <vector>
#include "fstream"
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include "Swap.h"
#include "ABCModel.h"

namespace cryptographyswap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	const int SIZE_ABC = 33;

	const char ABC[] = { 'а', 'б', 'в', 'г', 'д', 'е', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н',
		'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я', ' ' };

	Swap* encryptor = new Swap(ABC);
	ABCModel* originalModel = new ABCModel(ABC);
	ABCModel* cryptoModel = new ABCModel(ABC);

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			this->labelErrors->ResetText();
			this->labelErrors->Visible = true;

			this->dataGridView1->ColumnCount = SIZE_ABC;
			this->dataGridView1->RowCount = SIZE_ABC;
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelErrors;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelErrors = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(236, 152);
			this->textBox1->TabIndex = 0;
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// textBox2
			// 
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(252, 26);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(242, 152);
			this->textBox2->TabIndex = 1;
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Исходный текст:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(249, 7);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Криптограмма:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 182);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выбрать файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(14, 240);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox3->Size = System::Drawing::Size(234, 161);
			this->textBox3->TabIndex = 5;
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::TextValidate);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 221);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Пример текста:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(252, 240);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox4->Size = System::Drawing::Size(242, 161);
			this->textBox4->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 405);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(234, 26);
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
			this->label4->Location = System::Drawing::Point(249, 221);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Расшифрованный текст:";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1151, 9);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Длина ключа:";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(1154, 85);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(1154, 109);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 24);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Зашифровать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(1154, 137);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 24);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Расшифровать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(1154, 194);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 24);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Дешифровать";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(1154, 166);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 24);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Анализ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9" });
			this->comboBox1->Location = System::Drawing::Point(1154, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1151, 66);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Ключ:";
			// 
			// labelErrors
			// 
			this->labelErrors->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelErrors->AutoSize = true;
			this->labelErrors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelErrors->ForeColor = System::Drawing::Color::Red;
			this->labelErrors->Location = System::Drawing::Point(506, 6);
			this->labelErrors->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelErrors->Name = L"labelErrors";
			this->labelErrors->Size = System::Drawing::Size(61, 17);
			this->labelErrors->TabIndex = 18;
			this->labelErrors->Text = L"Ошибки";
			this->labelErrors->Visible = false;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->AxisX->Interval = 1;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(509, 26);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Name = L"Series1";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series4->ChartArea = L"ChartArea1";
			series4->Name = L"Series2";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(637, 182);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(509, 240);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(637, 386);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1283, 659);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->labelErrors);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Шифр простой перестановки";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

	System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // Зашифровать
		
		if (ValidationKeys() != 0) { return; }

		if (this->textBox1->TextLength <= 0) {
			this->labelErrors->Text = "Введите исходный текст";
			return;
		}

		if (this->textBox1->TextLength % this->textBox5->TextLength != 0) {
			this->labelErrors->Text = "Ключ должен быть кратен длине текста. Остаток: ";
			this->labelErrors->Text += (this->textBox1->TextLength % this->textBox5->TextLength);
			return;
		}

		this->textBox2->Text = gcnew System::String(encryptor->encrypt(
			msclr::interop::marshal_as<std::string>(this->textBox1->Text),
			msclr::interop::marshal_as<std::string>(this->textBox5->Text)
		).c_str());
	}

	int ValidationKeys() { // Валидация ключа
		this->labelErrors->ResetText();
		if (this->comboBox1->SelectedIndex == -1) {
			this->labelErrors->Text = "Выберите длину ключа.";
			return 1;
		}

		if (this->textBox5->TextLength <= 0) {
			this->labelErrors->Text = "Введите ключ";
			return 1;
		}

		if (this->textBox5->TextLength != Int16::Parse(this->comboBox1->Text)) {
			this->labelErrors->Text = "Длина ключа и ключ не совпадают";
			return 1;
		}

		string key = msclr::interop::marshal_as<std::string>(this->textBox5->Text);

		sort(key.begin(), key.end());

		for (int i = 0; i < key.length(); i++)
		{
			string s{ key[i] };
			if (stoi(s) != i + 1) {
				this->labelErrors->Text = "Ключ должен состоять из цифр от 1 до длины ключа";
				return 1;
			}
		}
		return 0;
	}

	System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // Расшифрование
		if (ValidationKeys() != 0) { return; }

		if (this->textBox2->TextLength <= 0) {
			this->labelErrors->Text = "Введите шифр текст";
			return;
		}

		if (this->textBox2->TextLength % this->textBox5->TextLength != 0) {
			this->labelErrors->Text = "Ключ должен быть кратен длине текста. Остаток: ";
			this->labelErrors->Text += (this->textBox2->TextLength % this->textBox5->TextLength);
			return;
		}

		this->textBox4->Text = gcnew System::String(encryptor->decrypt(
			msclr::interop::marshal_as<std::string>(this->textBox2->Text),
			msclr::interop::marshal_as<std::string>(this->textBox5->Text)
		).c_str());
	}

	System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // Анализ
		this->labelErrors->ResetText();

		if (this->textBox3->TextLength <= 0) {
			this->labelErrors->Text = "Введите пример текста";
			return;
		}

		if (this->textBox2->TextLength <= 0) {
			this->labelErrors->Text = "Введите шифр";
			return;
		}

		this->chart1->Visible = true;

		originalModel->Analyse(msclr::interop::marshal_as<std::string>(this->textBox3->Text));
		cryptoModel->Analyse(msclr::interop::marshal_as<std::string>(this->textBox2->Text));

		map<char, double> points = originalModel->GetDistribution();
		drowGraf(points, chart1->Series[0]);

		points = cryptoModel->GetDistribution();
		drowGraf(points, chart1->Series[1]);

		this->dataGridView1->Visible = true;
		vector<vector<int>> bigrams = originalModel->GetBigrams();

		displayBigrams(bigrams, this->dataGridView1);
	}

	void drowGraf(map<char, double> points, System::Windows::Forms::DataVisualization::Charting::Series^ series) { // Рисование графа
		series->Points->Clear();

		map<char, double>::iterator itr;
		for (itr = points.begin(); itr != points.end(); itr++) {
			System::String^ x = gcnew System::String(string{ itr->first }.c_str());
			series->Points->AddXY(x, itr->second);
		}
	}

	void displayBigrams(vector<vector<int>> bigrams, System::Windows::Forms::DataGridView^ grid) { // Отобразить биграммы
		for (int i = 0; i < SIZE_ABC; i++) {
			grid->Columns[i]->HeaderText = gcnew System::String(string{ originalModel->GetCharABC(i) }.c_str());
			grid->Rows[i]->HeaderCell->Value = gcnew System::String(string{ originalModel->GetCharABC(i) }.c_str());
		}

		for (unsigned int i = 0; i < bigrams.size(); i++) {
			for (unsigned j = 0; j < bigrams[i].size(); j++) {
				grid->Rows[i]->Cells[j]->Value = bigrams[i][j];
			}
		}
	}
};
}
