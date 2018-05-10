#pragma once

namespace RezStrafecpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ options
	/// </summary>
	public ref class options : public System::Windows::Forms::Form
	{
	public:
		options(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  textBox3;
	private: 
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	public: 

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Screen width:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"1280";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &options::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"24";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &options::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pluser:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(90, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"1024";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &options::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Screen height:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(12, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &options::timer1_Tick);
			// 
			// options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(193, 132);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"options";
			this->Text = L"Settings...";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &options::options_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &options::options_FormClosed);
			this->Load += gcnew System::EventHandler(this, &options::options_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox3->Text != ""){
					System::IO::File::WriteAllText("height.ini", textBox3->Text, System::Text::Encoding::Default);
				 }
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text != ""){ //if we haven't empty line
				//textBox2->Text = System::Convert::ToString(System::Convert::ToInt16(textBox1->Text)/40); //calculate more optimal strafeangle
				System::IO::File::WriteAllText("width.ini", textBox1->Text, System::Text::Encoding::Default); //put width info
			 }
		 }
private: System::Void options_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 this->Show();
		 }
private: System::Void options_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Show();
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 System::IO::File::WriteAllText("strafeangle.ini", textBox2->Text, System::Text::Encoding::Default);
			 //put strafeangle
		 }
private: System::Void options_Load(System::Object^  sender, System::EventArgs^  e) {
			 	 String^ scrw = System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default); //read width
				 String^ scrh = System::IO::File::ReadAllText("height.ini", System::Text::Encoding::Default); //read height
				 String^ config1 = System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default); //read strafeangle
				 //put got infos
				 textBox1->Text = scrw;
				 textBox2->Text = config1;
				 textBox3->Text = scrh;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 label4->Text = "Cur X: "+System::Convert::ToString( System::Windows::Forms::Cursor::Position.X ) + "\n Cur Y: "+System::Convert::ToString( System::Windows::Forms::Cursor::Position.Y );
		 }
};
}
