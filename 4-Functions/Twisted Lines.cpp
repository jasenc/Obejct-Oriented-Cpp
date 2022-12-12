/*
   The purpose of this program is to use Horstmann Graphics in order
   to place a couple of dots on the screen. The inputs should work 
   be entered by supplying a file name that already consists of
   various coordinates.

   Jasen Carroll
   CS171-064
   Assignment 4/Homework 4
   1/30/2010

   This program succesfully places dots around the screen according
   to the file of which coordinates are placed. For my examples I 
   have included a file named dots.txt that was kept in the 
   appropriate project folder. 
*/

#include <fstream>
#include "ccc_win.h"

int ccc_win_main()
{
	string filename = cwin.get_string( "Please enter filename:" ); // File name of where your data is
	ifstream fin (filename.c_str()); // Opens the input file
	cwin.coord(-10, 10, 10, -10); // Creates the window, in this case -10 < x < 10 and -10 < y < 10
	Point m(-9, -9); // Creates a point to be used to display the file name 
	cwin << Message(m, filename); // Displays the file name at the defined point
	string textline; // This is the line that will be read from the input file
	while(getline(fin, textline)) // Lets the program run for each line in the input file until all lines have been used
	{
		int COMMA = textline.find(", "); // Finds the comma in the line of the input file such as "-10, 10"
		string xcoord = textline.substr(0, COMMA); // Takes the x coordinate of the locations, "-10"
		string ycoord = textline.substr(COMMA+1); // Takes the y coordinate of the locations, "10"
		const char *P = xcoord.c_str(); // turns the x coordinate from a string to a characater 
		const char *Q = ycoord.c_str(); // turns the y coordinate from a string to a characater 
		double i = atoi (P); // turns the x coordinate from a characater to a double
		double j = atoi (Q); // turns the x coordinate from a characater to a double
		cwin << Point(i,j); // Finally outputs the point
	}
  return 0;
}