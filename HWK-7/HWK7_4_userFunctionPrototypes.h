

// HWK7_4_userFunctionPrototype.h
//
// Name: Bren Garcia
// Date: 3/14/2022
// Class: ECE2021
// Assignment: seperate header file for user function prototype STATEMENTS for 
//  
// Problem statement: write a user header file to store all the user function statements for
//				a program that takes string array input, once with  gets() and once with fgets().  
#pragma once

// give MACROS to all the files
#ifndef USEFULMACROS
#define USEFULMACROS
#define SIZE 50
#endif
// function prototype statements

void inputStr(char strArray[]); // using gets() cmd

void diffInputStr(char strArray[]); //using fgets() cmd

void displayStr(char strArray[]); //display the results to the console


// REFERENCES: USING MACROS in multi file compiles: https://stackoverflow.com/questions/9573474/reusing-a-c-macro-in-several-files
