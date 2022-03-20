//
// HWK7_3function1.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: Serperate file for - HWK7_3function1.c
//  
// Problem statement:  Displays the contents of 12x12 2D array
//
//		1111 user function algorithm 1111

#include <stdio.h>
#include "HWK7_3_userFunctionPrototypes.h" // including the MACRO

void function_1(int silly_array[][SIZE], unsigned int sillys_size) // a function to display the contents of an array in a table
{
	size_t i, j = 0; // unsigned int

	for (i = 0; i < sillys_size; i++) // index through the rows
	{
		for (j = 0; j < sillys_size; j++)  // index through the columns
		{
			printf("%6d", silly_array[i][j]); //display the contents of the array
		} // end of for loop with j
		puts(""); //newline
	} // end of for loop with i
	return;
} // end of function1