/******************************************************************
** Author:		Artem Slivka
** Date:		07/24/17
** Description: recursive_functions.cpp is the implementation file for
**				file recursive_functions.hpp. It holds function
**				definitions for 3 recursive functions for Lab 5.
******************************************************************/

#include "recursive_functions.hpp"		

/*********************************************************************
** Description:		This function recursively reverses a string.
**					It prints the reversed characters to the screen
**					followed by a newline character.
*********************************************************************/
void reverseString(string input)
{
	int strLength = input.length();
	if (strLength > 0)
	{
		cout << input[strLength - 1];
		string shortString = input;
		shortString.pop_back();
		reverseString(shortString);
	}
	if (strLength == 0)
	{
		cout << "\n";
	}
}

/*********************************************************************
** Description:		This function recursively calculates the sum of
**					array of integers. It returns the final sum.
*********************************************************************/
int arraySum(int* inputArray, int size)
{
	//If array size is 0, don't add to sum
	if (size == 0)
	{
		return 0;
	}
	//Otherwise, recursively iterate through the array elements,
	//adding them on the way
	return (inputArray[size - 1] + arraySum(inputArray, size - 1));
}

/*********************************************************************
** Description:		This function manages user input for the arraySum
**					function.
*********************************************************************/
void getArraySum()
{
	int arraySize = 0;
	cout << "Enter number of integers in the array (from 1 - 20). " << endl;
	arraySize = getIntegerRange(1, 20);

	int* inputArray = new int[arraySize];
	//Initializing array
	cout << "Enter " << arraySize <<  " integers. (Each on new line)" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		int inputElement = getInteger();
		inputArray[i] = inputElement;
	}

	//Displaying array sum
	int arraySum(int* inputArray, int size);
	cout << "Array sum: " << arraySum(inputArray, arraySize) << endl;

	//Freeing memory from allocated array
	delete [] inputArray;
	inputArray = 0;
}

/*********************************************************************
** Description:		This function recursively calculates the triangular
**					number/sum for a triangle with numRows rows.
**					For numRows =2, the triangular number is 1+2=3
*********************************************************************/
int triangularNum(int numRows)
{
	if (numRows == 0)
	{
		return 0;
	}
	return (numRows + triangularNum(numRows - 1));
}
