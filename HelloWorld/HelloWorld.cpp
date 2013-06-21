// HelloWorld.cpp : Defines the entry point for the console application.
//

/*
#include <iostream> is a preprocessor directive. This is read prior to 
the program being read. The #include causes the compiler to look for the 
other files that are specified. Namespace is to organize the names of 
objects in your code.
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

/*
Your "main" function is the function that is ran at the start of the program.
In c++ the main is the first thing that is ran and later functions can be called
within it.
*/
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "First program on GITHub \n";
	return 0;
}

