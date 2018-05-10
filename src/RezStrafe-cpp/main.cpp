#include "main.h"
#include <Windows.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

int main(){
	system("color b");
	Console::CursorVisible = false;
	std::cout << "RezStrafe_cpp v8.0 CONSOLE version! Started successfully...\nVisit https://github.com/RezWaki?tab=repositories for fun stuff!\n==========================\n";
	Console::Write("Resolution: "+System::IO::File::ReadAllText("width.ini")+"x"+System::IO::File::ReadAllText("height.ini")+"\nPluser: "+System::IO::File::ReadAllText("strafeangle.ini"));
	std::cout << "Press 'P' key in active Half-Life window to start DuckSpam mode\n";
	Application::EnableVisualStyles();
	Application::Run(gcnew RezStrafecpp::main());
	return 0;
}

