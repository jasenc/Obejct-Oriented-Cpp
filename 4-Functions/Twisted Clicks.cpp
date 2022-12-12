// The purpose of this program is to use Horstmann Graphics in order
// to place a couple of dots on the screen. The inputs should work 
// from clicks from the user's mouse

// Jasen Carroll
// CS171-064
// Assignment 4/Homework 4
// 1/30/2010

// This program succesfully places dots around the screen according
// to the clicking of the mouse.

#include <fstream>
#include "ccc_win.h"

int ccc_win_main()
{
	string filename = "Datacollect.txt";
	ofstream fout(filename.c_str());
	string p_all;
while (fout << p_all )
{
	Point p = cwin.get_mouse( "Click the screen until your satisfied") ;//Lets the user click to a specific spot

	cwin << p ;//displays the chosen points

	double p_x=p.get_x();//get the x-coordinates
	double p_y=p.get_y();//get the y-coordinates

	fout << p_x << ", " << p_y << endl;
		
	
		fout << p_all ;//placed into the file

		
}
	fout.close();

	return 0 ;
}
