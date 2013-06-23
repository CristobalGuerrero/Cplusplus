// reference and value.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
This program will show how to use basic functions of passing by value and passing by reference. Passing by value makes a copy of all the values
passed into the function as opposed to passing by reference which references the data location and directly affects it if there is any manipulations
in the given function
*/

//This is called prototyping

//for functions you will have to specify the data type and the name and as for prototyping you will have to put the data types you will be passing in
int value( int, int );

//Using the void data type means the function returns nothing
void reference( int &, int & );

//Think of functions like a math function where when you pass values in a function. Let's say f(x,y) = x+y well it works the same way for c++ where
//x and y are distinguishable where if you, using the previous function f(2,3) = 2+3 as opposed to f(3,2) = 3+2 in a function when programming this is
//important because you can have different outcomes depending on how you pass in the variables when calling the function.



int _tmain(int argc, _TCHAR* argv[])
{
	int x = 4, y = 3, z;
	
	//since we are returning a value the function call has to have a variable with a data type being assigned to it
	z = value( x, y );
	cout << "Z value: " << z;
	cout << "\nX value: " << x << "\tY value: " << y << endl;
	reference( x, y );
	cout << "X value: " << x << "\tY value: " << y << endl;
	return 0;
}

//everything within the {} will be executed when this function is called
int value(int a, int b){
	
	//though it appears that x's value is changed it is not
	a = b + a;
	return a;
}

//since we are passing by reference even though x and a have different variable names it will alter x's original value
void reference( int & a, int & b){
	a = a+b;
}
