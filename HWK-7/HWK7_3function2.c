//
// HWK7_3function2.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: Serperate file for - HWK7_3function2.c
//  
// Problem statement:  multiplies the index of a 2D array in such a way that, row * column and restores the result
//					back into the array
//
//		2222 user function algorithm 2222

#include <stdio.h>
#include "HWK7_3_userFunctionPrototypes.h" // including the MACRO


void function_2(int productArray[][SIZE], unsigned int sillys_size) // multiplication function
{
	size_t i, j = 0; // unsigned int

	for (i = 0; i < sillys_size; i++) // index through rows
	{
		for (j = 0; j < sillys_size; j++) // index through columns
		{
			productArray[i][j] = i * j; // inner most, multiply the row index by the column index
		} // end of for loop with j
	} // end of for loop with i
	return;
} // end of function2