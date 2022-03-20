//
// HWK7_3.c
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: HWK 7_3
//  
// Problem statement:  Wite a program that fills a table of -99s
//					to instead display the elementary 12x12 multiplication table.

//////////////// ALGORITHM //////////////////////////
//
// pre-processor directives
// userFunction headerfiles

// main function
// counting variable
//create a 2D array
// initalize the 2D full of -99s

// call the display function
// call the multiplication function
// formatting \newlines
// call the display function

// end main
//
//	111 USER FUNCTION 111
	// display function, called function_1 for HWK readability
//	222 USER FUNCTION 222
	// multiplication function, called function_2 for HWK readability

//////////////////////////////////////////////////
#include <stdio.h>
#include "HWK7_3_userFunctionPrototypes.h"


int main(void) 
{
	
	size_t i, j = 0; // counting variable
	int silly_array[SIZE][SIZE] = { 0 }; //create a 2D array

	// initalize the 2D array
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			silly_array[i][j] = -99;
		} // end of for j initalizer
	} // end of for i initalizer
	// end of initalizing the 2D array

	function_1(silly_array, SIZE); // call the display function
	function_2(silly_array, SIZE); // call the multiplication function

	puts(""); // formatting
	puts("");

	function_1(silly_array, SIZE); // call the display function

	return 0;
} // end main
