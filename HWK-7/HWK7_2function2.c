//
// HWK7_function2.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: Serperate file for - HWK7_function2.c
//  
// Problem statement:  Display the results of a program that converts a value given in degrees into radians
//				with two user defined functions and two double arrays the  same size.  
//
//		2222 user function algorithm 2222
// index through the second array and print the values in a table
#include <stdio.h>

void function2(double secondArray[], double n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf_s("secondArray[%d]=%f\n", i, secondArray[i]);
	} // end of for loop
}