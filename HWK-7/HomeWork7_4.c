//
// HWK7_4.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: HWK 7_4
//  
// Problem statement:  Wite a program that takes string array input, once with  gets() and once with fgets().  
//////////////// ALGORITHM //////////////////////////
//
// pre-processor directives
// userFunction headerfiles

// main function
	//declaration and initialization of character array
	// get input from user with gets cmd with a user function
	// label the output and display the string

	// get input from user with fgets cmd with a user function
	// label the output and display the string
// end main
//
//	111 USER FUNCTION 111
//	222 USER FUNCTION 222
//	333 USER FUNCTION 333
//////////////////////////////////////////////////
#include<stdio.h>
#include "HWK7_4_userFunctionPrototypes.h"

//defining array size
//#define SIZE 50

//main function
int main(void)
{
	
	char myString[SIZE] = { '\0' }; //declaration and initialization of character array

	inputStr(myString); // get input from user with gets cmd

	// label the output and display the string
	puts("The string used with a gets cmd is:");
	displayStr(myString);

	diffInputStr(myString); // get input from user with fgets cmd

	// label the output and display the string
	puts("The string used with a fgets cmd is:");
	displayStr(myString);

	return 0;
} // end of main