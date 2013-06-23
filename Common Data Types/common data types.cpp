// common data types.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
This program will illustrate common data types and the max numbers that can be represented for example their limits.
Adding to this there are types, variables and values. The order to make a variable in c++ is to do a data-type followed by
the variable name. Make sure though that variables have unique and distinct names so that you may know what they are for
later in your code.
*/

int _tmain(int argc, _TCHAR* argv[])
{
	//Note for those that don't know 1 byte is 8 bits
	

	//This integer can hold up to 2 bytes and is signed
	short int numOne = 16;
	//This interger can hold up to 4 bytes
	int someNum = 14;
	//Long type has the same length as int
	long anotherNum = 5;
	
	//There are floats and doubles which represent decimal values. For floats there is a way to represent them using binary
	//this is done with the IEEE-754 standard to convert a decimal number to binary
	float tooManyVars = 3.145679;
	double WaytooMany = 2.5678;

	//and the rest just experiment with there are also chars and strings and other data types so just play around!


	return 0;
}

