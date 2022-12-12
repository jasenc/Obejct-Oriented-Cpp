// The purpose of this program is to estimate the size of a picture
// in the format of BMP (bitmap) and also how long it will take that
// picture to travel across a network. 

// Jasen Carroll
// CS171-064
// Assignment 1/Homework 1
// 1/10/2010

// This program succesfully calculates the data size of a picture
// in the format of BMP (bitmap). It then asks if you know your 
// network connection speed to calculate how long it would take 
// to send your picture to a friend or college(sp). If you do not
// know your connection speed the standard of 2Mb/s is used. This 
// number is moderatly low to account for the fact that even in 
// today's world, not everyone has blazing fast internet.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "\n";
	string imageName ;
	cout << "Name of Image? ";
	getline(cin, imageName);
	int imageWidth, imageHeight ;
	cout << "Width (in pixels)? ";
	cin >> imageWidth;
	cout << "Height (in pixels)? ";
	cin >>imageHeight;
	int pixels;
	pixels = imageWidth * imageHeight;
	int bit;
	cout << "Number of bits per pixel? ";
	cin >> bit;
	int bits;
	bits = pixels * bit + 448;
	double bytes;
	bytes = bits / 8.0;
	double kilobytes;
	kilobytes = bytes / 1024.0;
	double megabytes;
	megabytes = kilobytes / 1024.0;
	double trate;
	cout << "Network speed in MB/s? (If unknown enter 0) ";
	cin >> trate;
	double time;
	if (trate <= 0)
	{
		double fakespeed;
		fakespeed = 2.4 * 8388608;  
		time = bits / fakespeed;
	cout << "If the image '" <<imageName<< "' is in BMP format, it will require " <<bits<< " bits that would be "
		<< bytes << " bytes or " << kilobytes << " kilobytes or even " << megabytes<< " megabytes. "
		"That will take approximately " << time << " seconds to transfer across your network. \n";
	}
	else 
	{
		double bitrate;
		bitrate = trate * 8388608;	
		time = bits / bitrate;
		cout << "If the image '" <<imageName<< "' is in BMP format, it will require " <<bits<< " bits that would be "
			<< bytes << " bytes or " << kilobytes << " kilobytes or even " << megabytes<< " megabytes. "
			"That will take approximately " << time << " seconds to transfer across your network. \n";
	}
	
	return 0;
}
