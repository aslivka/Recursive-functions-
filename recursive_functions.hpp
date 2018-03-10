/******************************************************************
** Author:		Artem Slivka
** Date:		07/24/17
** Description: recursive_functions.hpp is the header file for 
**				recursive_functions.cpp
******************************************************************/

#ifndef RECURSIVE_FUNC_HPP
#define RECURSIVE_FUNC_HPP

#include <iostream>
#include <string>
#include "Utility.hpp"
using std::cout;
using std::endl;
using std::string;

//Recursive functions
void reverseString(string input);
int arraySum(int* inputArray, int size);
int triangularNum(int numRows);

void getArraySum();

#endif 