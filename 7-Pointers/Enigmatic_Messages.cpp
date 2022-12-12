 /**
    @file Enigmatic_Messages.cpp
    @author Jasen Carroll
    @date 03-06-2010
    @version 1.0
 */

 /* Copyright 2010 Jasen Carroll */

/*
   The purpose of this program is to function as a working Enigma 
   machine that was used back in World War II by the Nazis. This 
   program will sucessfully encrypt a message and also decrypt 
   messages, whether they were made with this program or not.

   Jasen Carroll
   CS171-064
   Enigmatic Messages
   Assignment 7/Homework 7
   3/06/2010

   The program has six subprograms. readCode does exactly that and assigns 
   the proper vectors to the proper lines provided from an input file.
   printMessage does what it name implies as well. It will print the vector
   that is passed through it. Find will find a character in a vector. Rotate
   will rotate the rotor that is passed through it. Encrypt and decrypt are
   both the same thing but backwards from each other and once again do as the
   name implies.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "jcc329_Library.h"
using namespace std;

void readCode(istream& in, vector<char> & code);
void printMessage(vector<char>& message);
int find(char ch, vector<char>& v);
vector<char> rotate(vector<char>& rotor, int n);
vector<char> encrypt(vector<char>& message, vector<char>& outerRotor, vector<char>& middleRotor, vector<char>& innerRotor);
vector<char> decrypt(vector<char>& message, vector<char>& outerRotor, vector<char>& middleRotor, vector<char>& innerRotor);


	vector<char> outerRotor;
	vector<char> innerRotor;
	vector<char> middleRotor;
	vector<char> message;
int main()
{
	string prompt = "What is your input file? (If unsure type 'QUIT') ";
	promptForString(prompt); // Uses subprogram from jcc329_Library to prompt for a string
	ifstream fin (prompt.c_str());
	readCode(fin, outerRotor); // Assigns outerRotor
	readCode(fin, innerRotor); // Assigns innerRotor
	readCode(fin, middleRotor); // Assigns middleRotor
	readCode(fin, message); // Assigns the message that is wished to be decoded or encoded
	cout << "Your input message is ";
	printMessage(message); // displays the provided message
	cout << endl;
	string input;
	cout << "Would you like to encrypt or decrypt? (you can use full words or e/d) ";
	cin >> input;
	if (input == "encrypt" || input == "e") // If encrypt is typed then it will encrypt the message
	{
		encrypt(message, outerRotor, middleRotor, innerRotor);
	}
	if (input == "decrypt" || input == "d") // If decrypt is typed then it will decrypt the message
	{
		decrypt(message, outerRotor, middleRotor, innerRotor);
	}
	if (input != "encrypt" && input != "decrypt" && input != "e" && input != "d") // If the wrong input is supplied the program will print
	{
		cout << "You have entered an incorrect phrase" << endl;
		exit(1);
	}
	printMessage(message); // Once again the message is displayed
	cout << endl;
}


 /**
    This is a procedure that reads a code. This can
	be done either from an input file or from the console 
	itself.
    @param in is the file name that would be specified if used.
	@param code would be in input of the code on the console.
    @return nothing.
 */
void readCode(istream& in, vector<char> & code)
{
	
	char temp; // defines a char named temp
	string line; // defines a string named line
	int i = 0; // defines an int named i equal to 0
	getline(in, line); // retrieves the line from the input file
	while (i < line.size()) // continues while there are still lines
	{
		temp = line[i]; // assigns the char to the vector space in line
		code.push_back(temp); // pushes temp back by one
		i++ ; // increments i by one
	}
}

 /**
    This procedure simply prints the message to the console
    @param message is what needs to be printed   
    @return message to be printed
 */
void printMessage(vector<char>& message)
{
	for(int i=0;i<message.size();i++) // for loop for while the message exists
	{
		cout << message[i]; // prints each vectors spot of the message
	}
}

/**
    This function returns the position of the first occurrences
	of the character ch in the vector v. It returns -1 if ch is 
	not found. 
    @param ch is the character being looked for.
	@param v is where the character is being looked for.
    @return returns position of character in the inner rotor.
 */
int find(char ch, vector<char>& v)
{
	for(int i=0; i < v.size();i++) // for loop while the vector exists
	{
			if (ch == v[i]) // finds the char in v
			{
				return i; // returns the location of the char
			}
	}
	return -1; // if not found returns -1

}


 /**
    This is a function that returns the result of rotating 
	a vector forward n positions. Instead of altering the 
	vector that was passed in, it creates a new vector of
	the same size, copies the elements into the appropriate
	sports in the new vector.
    @param rotor is which rotor needs be to rotated.
	@param n is how many clicks clockwise.
    @return returns the new vector as a result.
 */
vector<char> rotate(vector<char>& rotor, int n)
{

	while(n-- > 0)
	{
		char temp = rotor[26]; // sets temp equal to the last leter in the rotor
		for(int i=26; i > 0;i--) // while the rotor exists
		{
			rotor[i] = rotor[i-1]; // sets the spot of the rotor equal to the one before it
		}
		rotor[0] = temp; // sets the first spot equal to the previous last
	}
	return rotor; // returns the rotor

}


 /**
    This routine encrypts a message using information from
	three rotors as parameters. It does not change the value 
	of the vector passed in as an argument, but creates a 
	result vector.
    @param message is the message that needs to be encrypted.
	@param outerRotor is the combination of leteres in the 
	outer rotor that you wish to specify.
	@param middleRotor is the combination of leteres in the
	middle rotor that you wish to specify.
	@param innerRotor is the combination of leteres in the
	inner rotor that you wish to specify.
    @return returns the encrypted message.
 */
vector<char> encrypt(vector<char>& message, vector<char>& outerRotor, vector<char>& middleRotor, vector<char>& innerRotor)
{
	for(int i = 0; i < message.size(); i++) // while the message exists
	{
		int a = find(message[i], innerRotor); // finds the char in the inner rotor
		int b = find (outerRotor[a], middleRotor); // finds the correspoinding char in the middle rotor
		char c = outerRotor[b]; // assigns char to the location in the outer rotor
		message[i] = c; // assigns the message to the char from the outer rotor
		rotate(innerRotor, 1); // rotates the inner rotor by 1
	}
	return message; // returns the message
}


  /**
    This routine encrypts a message using information from
	three rotors as parameters. It does not change the value 
	of the vector passed in as an argument, but creates a 
	result vector.
    @param message is the message that needs to be encrypted.
	@param outerRotor is the combination of leteres in the 
	outer rotor that you wish to specify.
	@param middleRotor is the combination of leteres in the
	middle rotor that you wish to specify.
	@param innerRotor is the combination of leteres in the
	inner rotor that you wish to specify.
    @return returns decrypted message.
 */
vector<char> decrypt(vector<char>& message, vector<char>& outerRotor, vector<char>& middleRotor, vector<char>& innerRotor)
{
	for(int i=0; i < message.size(); i++) // while the message exists
	{
		int a = find(message[i], outerRotor); // finds the char in the outer rotor
		int b = find(middleRotor[a], outerRotor); // finds the corresponding char in the middle rotor to the outer rotor again
		char c = innerRotor [b]; // assigns char to the spot in the inner rotor
		message[i] = c; // assigns message spot to that char
		rotate(innerRotor, 1); // rotates the inner rotor by 1
	}
	return message; // returns the message
}