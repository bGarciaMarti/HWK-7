

// HWK7_4_inputStr.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: seperate header file for user function prototype STATEMENTS for 
//  
// Problem statement: write a user header file to store all the user function statements for
//				a program that takes string array input, once with  gets() and once with fgets().
// Algorithm: // prompt the user
// call gets cmd
//retun nothing
//////////////////////////////////////////

#include<stdio.h>
#include "HWK7_4_userFunctionPrototypes.h"

//function_1
void inputStr(char strArray[])
{
	printf("\nEnter a char string less than %u: ", SIZE); // prompt message to user
	gets(strArray); // input string using gets
	return;
}

// REFERENCE: https://www.geeksforgeeks.org/fgets-gets-c-language/