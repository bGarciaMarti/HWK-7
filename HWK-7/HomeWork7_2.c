//
// HWK7_2.c
//
// Name: Bren Garcia
// Date: 3/11/2022
// Class: ECE2021
// Assignment: HWK 7_2
//  
// Problem statement:  Wite a program that converts a value given in degrees into radians
//				with two user defined functions and two double arrays the  same size.  
//////////////// ALGORITHM //////////////////////////
//
// pre-processor directives
// userFunction headerfiles

// main function
	// initialize first array
	//initialize second array
	// give function1 the arrays and SIZE

	// call 1111 user function algorithm to convert degrees given into radians
	// display the array
// end main
//
//	111 USER FUNCTION 111
//	222 USER FUNCTION 222

//////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
#include "HWK7_2_userFunctionPrototypes.h"

#define SIZE 5
const double myPi = 3.14159;

int main(void)
{
	// initialize first array
	double firstArray[SIZE] = { 0.0, 30.0, 45.0, 60.0, 90.0 };
	//initialize second array
	double secondArray[SIZE] = {0.0};
	// give function1 the arrays and SIZE

	function1(firstArray, secondArray, SIZE); // call 1111 user function algorithm to convert degrees given into radians
	function2(secondArray, SIZE); // display the array
		return 0;
}//end main

// 1111 User function One 1111

// 2222 User function Two 2222
