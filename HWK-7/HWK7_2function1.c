//
// HWK7_function1.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: Serperate file for - HWK7_function1.c
//  
// Problem statement: converts a value given in degrees into radians
//				with two user defined functions and two double arrays the  same size.  
//
//		1111 user function algorithm 1111
// external variable myPi
// index through the second array and muliply the value using sign and pi
#include <math.h>

void function1(double firstArray[], double secondArray[], int n)
{
	extern const double myPi;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		secondArray[i] = 1.0 * sin(firstArray[i] * (2 * myPi / 360));
	} // end of for loop
}