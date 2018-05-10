#pragma once
#pragma comment(lib, "user32.lib")
#include <stdio.h>
#include <fstream>
#include <Windows.h>
#include <WinBase.h>
#include <math.h>
#include "options.h"
#include <iostream>

namespace RezStrafecpp {

//	using namespace StrafeInfo;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;

	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(26, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(13, 66);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(2, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(62, 17);
			this->panel2->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Interval = 110;
			this->timer1->Tick += gcnew System::EventHandler(this, &main::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 60;
			this->timer2->Tick += gcnew System::EventHandler(this, &main::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 110;
			this->timer3->Tick += gcnew System::EventHandler(this, &main::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 300;
			this->timer4->Tick += gcnew System::EventHandler(this, &main::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 60;
			this->timer5->Tick += gcnew System::EventHandler(this, &main::timer5_Tick);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(64, 64);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main::main_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
		unsigned int strafes; //summary strafes
		int scrw, scrh, config1, pluser;
		System::Drawing::Point ptre, get;
		bool showstrafes;

	private: System::Void main_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if(e->KeyData == System::Windows::Forms::Keys::Insert){
					timer1->Start();
					timer2->Start();
				 }

				 if(e->KeyData == System::Windows::Forms::Keys::Delete){
					 timer1->Stop();
					 timer2->Stop();
					 timer3->Stop();
					 timer5->Stop();
				 }

				 if(e->KeyData == System::Windows::Forms::Keys::F1){
					 timer3->Start();
					 timer5->Start();
				 }

				 if(e->KeyData == System::Windows::Forms::Keys::F2){
					 if( showstrafes ){
						 showstrafes = false;
					 }
					 else{
						 showstrafes = true;
					 }
				 }
			 }
	private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {
				 options^ showopt = gcnew options();
				 showopt->Show();
				 showstrafes = true;
				 strafes = 0; //our total strafes count is 0
				 pluser = System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default));
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 pluser++;
				 if(pluser >= System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default)) + 128){
					 pluser = System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default));
				 }
				 //LPPOINT curpos;
				 //GetCursorPos(curpos);
				 //options^ showopt = gcnew options();
				 scrw = System::Convert::ToInt16(System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default));
				 scrh = System::Convert::ToInt16(System::IO::File::ReadAllText("height.ini", System::Text::Encoding::Default));
				 config1 = System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default));
				 System::Drawing::Point ptre;
				 System::Drawing::Point get = System::Windows::Forms::Cursor::Position; 
				 ptre.X = scrw/2-12*12+pluser; //dividing for 2 - got strafeangle
				 ptre.Y = get.Y; //get y position
				 System::Windows::Forms::Cursor::Position::set(ptre);
				 if( showstrafes ){
					 strafes++;
					 system("cls");
					 Console::Write("Total strafes: "+strafes.ToString());
				 }
			 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				// options^ showopt = gcnew options();
				 //read all infos in integer
				// Sytem::Drawing::Point get;
				 scrw = System::Convert::ToInt16(System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default));
				 scrh = System::Convert::ToInt16(System::IO::File::ReadAllText("height.ini", System::Text::Encoding::Default));
				 config1 = System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default));
				 get = System::Windows::Forms::Cursor::Position;
				 ptre.X = scrw/2+config1-pluser; //dividing for 2 + got strafeangle and multiplied by 2
				 ptre.Y = get.Y; //get y position
				 System::Windows::Forms::Cursor::Position::set(ptre); //make strafes
				 if( showstrafes ){
					 strafes++;
					 system("cls");
					 Console::Write("Total strafes: "+strafes.ToString());
				 }
				 /*if( GetKeyState( 80 ) ){
					 if( timer4->Enabled == true ){
						 timer4->Stop();
					 }
					 else{
						 timer4->Start();
					 }
				 }*/
			 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
				   	 pluser++;
				 	 if(pluser >= System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default)) + 128){
						 pluser = System::Convert::ToInt16(System::IO::File::ReadAllText("strafeangle.ini", System::Text::Encoding::Default));
					  }
					 get = System::Windows::Forms::Cursor::Position;
					 scrw = System::Convert::ToInt16(System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default));
					 scrh = System::Convert::ToInt16(System::IO::File::ReadAllText("height.ini", System::Text::Encoding::Default));
					 ptre.X = /*scrw/4+sin(get.X)*24+sqrt(System::Convert::ToInt16(System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default)))+abs(Math::Floor(Math::Tan( get.X )))*pluser+scrw^Math::Ceiling(Math::DivRem(scrw, scrw*2+256, %pluser-scrw^2));*/scrw/2+32+pluser; //dividing for 2 + got strafeangle and multiplied by 4
					 ptre.Y = get.Y+32;
					 System::Windows::Forms::Cursor::Position::set(ptre); //make strafes
					 if( showstrafes ){
						 strafes++;
						 system("cls");
						 Console::Write("Total strafes: "+strafes.ToString());
					 }
		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 SendKeys::Send("o");
		 }
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
			 		 get = System::Windows::Forms::Cursor::Position;
					 scrw = System::Convert::ToInt16(System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default));
					 scrh = System::Convert::ToInt16(System::IO::File::ReadAllText("height.ini", System::Text::Encoding::Default));
					 ptre.X = /*scrw/4+sin(get.X)*24+sqrt(System::Convert::ToInt16(System::IO::File::ReadAllText("width.ini", System::Text::Encoding::Default)))+abs(Math::Floor(Math::Tan( get.X )))*pluser+scrw^Math::Ceiling(Math::DivRem(scrw, scrw*2+256, %pluser-scrw^2));*/scrw/2-64-pluser/2; //dividing for 2 + got strafeangle and multiplied by 4
					 ptre.Y = get.Y-16;
					 System::Windows::Forms::Cursor::Position::set(ptre); //make strafes
					 if( showstrafes ){
						 strafes++;
						 system("cls");
						 Console::Write("Total strafes: "+strafes.ToString());
					 }
		 }
};
}
