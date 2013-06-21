// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
This program demonstrates some common back-slash escape sequences at least the common ones. The escape commands
must be in quotations in order for them to work otherwise you will get a compiler error. These escape sequences
can be concatinated in a string. 
*/

int _tmain(int argc, _TCHAR* argv[])
{
	string str; 
	//causes a newline character
	cout << "First sentence \n";
	//causes a tab between the words
	cout << "Second\t Sentence\n";
	cout << "Enter in any character  to make the computer beep: ";
	cin >> str;
	//causes the computer to beep
	cout << "\a";
	return 0;
}

