 /**
    @file jcc329_Library.h.cpp
    @author Jasen Carroll
    @date 02-13-2010
    @version 1.1
 */

 /* Copyright 2010 Jasen Carroll */

 /**
    This fuction allows the user to control the prompt given 
	for an input a string. This can be very useful and time 
	saving. The function directly underneath is the same 
	function, though it requires no arugments and provides
	a default prompt to enter a string.
    @param prompt This is the string that will be created.   
    @return returns the string that was created.
 */

#include <string>
using namespace std;

	string prompt; // Creates the sting named prompt so it can be used outside of the function.
	static string promptForString(string& prompt) // Funtion that prompts for a string.
	{
		cout << prompt; // Asks the user to input a string.
		getline(cin, prompt); // Uses getline in case the user inputs more than one word.
		if (prompt == "QUIT")
		{
			exit(1);
		}
		
		return prompt; // Returns the string so it can be used in other programs instead of just terminating the string.
	}
	static string promptForString() // Funtion that takes no arguments
	{
		cout << "Please enter your string: "; // Since no arguement is used a default prompt is printed.
		getline(cin, prompt); // Uses getline in case the user inputs more than one word.
		if (prompt == "QUIT")
		{
			exit(1);
		}
		
		return prompt; // Returns the string so it can be used in other programs instead of just terminating the string.
	}


/**
    This function prompts the user for a number, once the 
	number is entered the program returns the number to be
	used futher by the main program.
    @param number This is the double that will be created.   
    @return returns the number that was created.
 */
	double number; // Creates the double named number so it can be used outside of the function.
	string sayWhat; // Input string for what the program should prompt for
	double promptForDouble(string sayWhat) // Function that takes a string for an argument
	{
		cout << sayWhat; // Asks or the number
		cin >> number; // Retrieves the number
		return number; // Returns the number
	}

	double promptForDouble() // Function that takes no arguments and prompts for a double
	{
		cout << "Please enter your number: "; // Asks or the number
		cin >> number; // Retrieves the number
		return number; // Returns the number
	}