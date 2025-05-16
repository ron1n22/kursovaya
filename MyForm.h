#pragma once
#include "MyForm1.h"


namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			
			

			next(this->n);
			
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
	private: System::Windows::Forms::Label^ text_numb;
	protected:
	private: System::Windows::Forms::Label^ text_question;
	private: System::Windows::Forms::RadioButton^ answer1;
	private: System::Windows::Forms::RadioButton^ answer2;
	private: System::Windows::Forms::RadioButton^ answer3;
	private: System::Windows::Forms::RadioButton^ answer4;
	private: System::Windows::Forms::Button^ button1;
     
	private: int n = 0;
	private: int select = 0;
	private: int sel_rig = 0;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



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
			this->text_numb = (gcnew System::Windows::Forms::Label());
			this->text_question = (gcnew System::Windows::Forms::Label());
			this->answer1 = (gcnew System::Windows::Forms::RadioButton());
			this->answer2 = (gcnew System::Windows::Forms::RadioButton());
			this->answer3 = (gcnew System::Windows::Forms::RadioButton());
			this->answer4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_numb
			// 
			this->text_numb->AutoSize = true;
			this->text_numb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text_numb->Location = System::Drawing::Point(48, 43);
			this->text_numb->Name = L"text_numb";
			this->text_numb->Size = System::Drawing::Size(51, 25);
			this->text_numb->TabIndex = 0;
			this->text_numb->Text = L"1/10";
			// 
			// text_question
			// 
			this->text_question->AutoSize = true;
			this->text_question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text_question->Location = System::Drawing::Point(12, 98);
			this->text_question->Name = L"text_question";
			this->text_question->Size = System::Drawing::Size(78, 25);
			this->text_question->TabIndex = 1;
			this->text_question->Text = L"Вопрос";
			this->text_question->Click += gcnew System::EventHandler(this, &MyForm::text_question_Click);
			// 
			// answer1
			// 
			this->answer1->AutoSize = true;
			this->answer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer1->Location = System::Drawing::Point(17, 244);
			this->answer1->Name = L"answer1";
			this->answer1->Size = System::Drawing::Size(104, 29);
			this->answer1->TabIndex = 2;
			this->answer1->TabStop = true;
			this->answer1->Text = L"answer1";
			this->answer1->UseVisualStyleBackColor = true;
			this->answer1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::answer1_CheckedChanged);
			// 
			// answer2
			// 
			this->answer2->AutoSize = true;
			this->answer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer2->Location = System::Drawing::Point(17, 294);
			this->answer2->Name = L"answer2";
			this->answer2->Size = System::Drawing::Size(104, 29);
			this->answer2->TabIndex = 3;
			this->answer2->TabStop = true;
			this->answer2->Text = L"answer2";
			this->answer2->UseVisualStyleBackColor = true;
			this->answer2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::answer2_CheckedChanged);
			// 
			// answer3
			// 
			this->answer3->AutoSize = true;
			this->answer3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer3->Location = System::Drawing::Point(17, 374);
			this->answer3->Name = L"answer3";
			this->answer3->Size = System::Drawing::Size(104, 29);
			this->answer3->TabIndex = 4;
			this->answer3->TabStop = true;
			this->answer3->Text = L"answer3";
			this->answer3->UseVisualStyleBackColor = true;
			this->answer3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::answer3_CheckedChanged);
			// 
			// answer4
			// 
			this->answer4->AutoSize = true;
			this->answer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer4->Location = System::Drawing::Point(17, 446);
			this->answer4->Name = L"answer4";
			this->answer4->Size = System::Drawing::Size(104, 29);
			this->answer4->TabIndex = 5;
			this->answer4->TabStop = true;
			this->answer4->Text = L"answer4";
			this->answer4->UseVisualStyleBackColor = true;
			this->answer4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::answer4_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(1245, 693);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 47);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(17, 693);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 47);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(864, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 30);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(864, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(204, 30);
			this->textBox2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(859, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Введите фамилию";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(859, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Введите имя";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1438, 752);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->answer4);
			this->Controls->Add(this->answer3);
			this->Controls->Add(this->answer2);
			this->Controls->Add(this->answer1);
			this->Controls->Add(this->text_question);
			this->Controls->Add(this->text_numb);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_question_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void next(int n) {
		this->text_numb->Text = System::Convert::ToString(n + 1) + "/10";
		array <String^>^ questions;
		array <String^, 2>^ answers;
		questions = gcnew array<String^> {
			"Класс - это",
				" Членами класса могут быть",
				"Что называется конструктором?",
				"Объект - это",
				"Выберите правильное удтверждение",
				"Что называется деструктором?",
				"Что называется наследованием?",
				"Возможность и способ обращения производного класса \n" "к элементам базового определяется",
				" Полиморфизм – это",
				"Для доступа к элементам объекта используются:"
		};

		answers = gcnew array<String^, 2>{
			{"любой тип данных, определяемый пользователем;", "тип данных, определяемый \n"
				"пользователем и сочетающий в себе данные и функции их обработки;", "структура, для которой в программе имеются функции работы с нею;", "Тип данных отвечающий за слова;"},
			{ "как переменные, так и функции, могут быть объявлены как private и как public","только переменные, объявленные как private","только функции, объявленные как private","только переменные и функции, объявленные как private" },
			{ "метод, имя которого совпадает с именем класса и который вызывается автоматически при создании объекта класса","метод, имя которого совпадает с именем класса и который вызывается автоматически при объявлении класса (до создания объекта класса)","метод, имя которого необязательно совпадает с именем класса и который вызывается при создании объекта класса","метод, имя которого совпадает с именем класса и который необходимо явно вызывать из головной программы при объявлении объекта класса" },
			{ "переменная, содержащая указатель на класс","экземпляр класса","класс, который содержит в себе данные и методы их обработки","Крутяк" },
			{ "конструкторы класса не наследуются","конструкторов класса может быть несколько, их синтаксис определяется программистом","конструкторов класса может быть несколько, но их синтаксис может не подчиняться правилам перегрузки функции","конструктор возвращает указатель на объект" },
			{ "метод, который уничтожает объект","метод, который удаляет объект","метод, который освобождает память, занимаемую объектом","системная функция, которая освобождает память, занимаемую объектом" },
			{ "это механизм, посредством которого производный класс получает элементы родительского и может дополнять либо изменять их свойства и методы","это механизм переопределения методов базового класса","это механизм, посредством которого производный класс получает все поля базового класса","это механизм, посредством которого производный класс получает элементы родительского, может их дополнить, но не может переопределить" },
			{ "ключами доступа: private, public, protected в теле производного класса","только ключом доступа protected в заголовке объявления производного класса","ключами доступа: private, public, protected в заголовке объявления производного класса","ключами доступа: private, public, protected в теле базового класса" },
			{ "средство, позволяющее использовать одно имя для обозначения действий, общих для родственных классов","средство, позволяющее в одном классе использовать методы с одинаковыми именами","средство, позволяющее в одном классе использовать методы с разными именами для выполнения одинаковых действий","средство, позволяющее перегружать функции для работы с разными типами или разным количеством аргументов" },
			{ "при обращении через имя объекта точка,при обращении через указатель – операция «->»","при обращении через имя объекта два двоеточия, при обращении через указатель – операция «точка»","при обращении через имя объекта – точка, при обращении через указатель – два двоеточия","при обращении через имя объекта – два двоеточия, при обращении через указатель – операция «->»" }
		};

		this->text_question->Text = questions[n];

		this->answer1->Text = answers[n, 0];
		this->answer2->Text = answers[n, 1];
		this->answer3->Text = answers[n, 2];
		this->answer4->Text = answers[n, 3];


	}

	private: int calculateTestResult() {
		return this->sel_rig;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->textBox1->Text;
		String^ surname = this->textBox2->Text;
		int testResult = calculateTestResult();

		StreamWriter^ sw = gcnew StreamWriter("user_info.txt");
		sw->WriteLine("Name: " + name);
		sw->WriteLine("Surname: " + surname);
		sw->WriteLine("Test Result: " + testResult);
		sw->Close();
	
		int right[10] = { 2,1,1,2,1,3,1,3,1 };
		if (this->select == right[this->n])
			this->sel_rig += 1;
		this->n += 1;
		if (this->n < 10)
			next(this->n);
		else {
			String^ what = "Тест пройден на " + System::Convert::ToString(this->sel_rig) + "/10";
			MessageBox::Show(this, what, "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			this->n = 0;
			this->sel_rig = 0;
			next(this->n);
		}

		
    }
private: System::Void answer1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 1;
}
private: System::Void answer2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 2;

}
private: System::Void answer3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 3;

}
private: System::Void answer4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->select = 4;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n > 0) {
		n--;
	}
	
	next(n);

}
};
}
