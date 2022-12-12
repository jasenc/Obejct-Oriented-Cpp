# Twisted Lines

#### User Manual
	
This program lets a user use a text file to input data into a program. That program then turns the points in the text file into actual points on an image. The text file must have x y coordinates. When the program is run the user will be prompt for the text file. After that they can grab their coffee, sit back and relax as their data point in their text file will be displayed in a 2D fashion on their computer screen.

The alternate program simply lets the user click around and records their clicks to a text file. 
  

#### System Manual 

This program uses Horstmann Graphics to display graphics on the screen. The text file is input into the program and the dots are displayed respectively in an x y grid. The program uses a while loop to go through various different lines of coordinates. Within the while loop strings had to be converted to doubles. To do this I used the atoi function. I first had to separate the strings into their respective x and y coordinates. Once I had the x and y strings I was able to convert them into constant characters. The characters were changed into doubles using the atoi function mentioned above. Once I finally obtained the doubles I was able to input them into the Horstmann Graphics Point generator and finally get the points that were desired.

The alternate program simply lets the user click around in as many locations as wanted and as they click, points will show up where they have clicked. This program again uses Horstmann Graphics. It then records these points into a text file named Datacollect.txt


#### Test Log

It took me a while to familiarize myself with the way that cwin is used. Also, I had a major problem converting the text in the data files to x and y integers so that the Point function can be used. It turns out that in the end I had to convert them into doubles, not integers. I used the atoi function to help me go from string all the way down to a double.

Jasen Carroll\
CS171-064\
1/30/2010