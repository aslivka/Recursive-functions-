/*********************************************************************
** Program name:		Lab5
** Author:				Artem Slivka
** Date:				7/24/17
** Description:			This program shows how 3 different recursive
**						functions work, with user input allowed.
**						Select a menu choice to try one of the 
**						functions.
*********************************************************************/

#include <iostream>
#include <string>
#include "recursive_functions.hpp"
#include "Menu.hpp"
using namespace std;

int main()
{
	Menu menu1;
	menu1.addOption("Reverse a string");
	menu1.addOption("Calculate sum of an int array");
	menu1.addOption("Calculate triangular number for N");
	menu1.addOption("Quit program");

	do
	{
		//Printing menu options
		menu1.printMenu();

		//Selecting menu option
		int menuChoice = getIntegerRange(1, 4);

		//Set/select a menu option
		menu1.setOption(menuChoice);

		switch (menu1.getOption())
		{
			case 1: {
					//Asking for user input
					string inputString;
					cout << "Enter a string to reverse." << endl;
					getline(cin, inputString);

					//Displaying reversed string
					cout << "Reversed string: " << endl;
					reverseString(inputString);
					break;
					}

			case 2: {
					getArraySum();
					break;
					}
			case 3: {
					//Asking for user input
					int inputNum;
					cout << "Enter an integer. (from 0-100)" << endl;
					inputNum = getIntegerRange(0,100);

					//Displaying reversed string
					cout << "Triangular number for N=" << inputNum;
					cout << " is: " << triangularNum(inputNum) << endl;
					break;

					}
		}
	} while (menu1.getOption() != 4);
	cout << "Quitting program..." << endl;
	
	cin.get();
	return 0;

}

