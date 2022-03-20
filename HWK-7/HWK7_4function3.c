// HWK7_4_displayStr.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: seperate header file for user function prototype STATEMENTS for 
//  
// Problem statement: write a user header file to store all the user function statements for
//				a program that takes string array input, once with  gets() and once with fgets().
// Algorithm: 
// use secure printf to display the strArray contents to the console 
//retun nothing
//////////////////////////////////////////
#include<stdio.h>
#include "HWK7_4_userFunctionPrototypes.h"

//function3
void displayStr(char strArray[])
{
	
	printf_s("%s", strArray);
}