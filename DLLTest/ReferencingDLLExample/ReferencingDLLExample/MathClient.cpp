// MathClient.cpp : Defines the entry point for the console application.  
// Compile by using: cl /EHsc /link MathLibrary.lib MathClient.cpp  

//https://stackoverflow.com/questions/6626397/error-lnk2019-unresolved-external-symbol-winmain16-referenced-in-function
//wimain search fix
#include "stdafx.h"  
#include <iostream>  
#include <windows.h>
#include "MathLibrary.h"  

using namespace std;
/*
To know which of the two you should use, check the following setting: Properties -> Linker -> System -> SubSystem, if this is set to Console (/SUBSYSTEM:CONSOLE) it will expect the standard main signature, if it is set to Windows (/SUBSYSTEM:WINDOWS) it will expect the WinMain one.
https://stackoverflow.com/questions/17938275/visual-studio-how-to-get-output-in-win32-project

*/
int main()
{
	wprintf(L"Hello DLL World!\n");

	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		MathLibrary::Functions::Add(a, b) << endl;
	cout << "a * b = " <<
		MathLibrary::Functions::Multiply(a, b) << endl;
	cout << "a + (a * b) = " <<
		MathLibrary::Functions::AddMultiply(a, b) << endl;

	cin.get();
	cin.ignore();
	return 1;
}
