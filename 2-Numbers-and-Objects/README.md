# Big Picture

#### User Manual
	
This program determines the file size of the image and amount of time required to send the image across the network. To run the application open the ‘Big Picture.exe’ file and input what is asked for.  After you enter the file name is input, just follow the rest of the prompts, width, height and bits per pixel of his/her image. For large numbers please omit the commas, using a comma will cause the program to run incorrectly. This information is used to determine the data size of the image. Then you will be prompted to input your network connection speed if you happen to know it. If you do not know the speed it is quite all right and there will be a standard provided if you simply enter ‘0’. After all of the inputs are collected there will be an output consisting of the file name, the data size displayed in bits, bytes, kilobytes and megabytes, as well as an approximation of how long it will take to send the picture across your network.  

#### System Manual 

This program was made using simple mathematical formulas such as addition, multiplication and division. Notice it does not bother the problem if the file name includes spaces. If the user does not know their network speed they can input 0 – as prompted. In this case a simple if statement is used and a constant of 2.4 Mb/s is provided to give an estimate of the image transfer time.

#### Test Log

I only ran into a few errors in making this program. One would be the fact that I couldn’t remember to end statements with the semicolon, and the other was that for some reason in my if statement I needed to set my variable to <= 0 instead of just = 0. The latter was just a symantic error. Unfortunately for the customer or whoever may work on this program further I did not run into any major errors to document so I could expedite their processes should they run into problems.

Jasen Carroll\
CS171-064\
1/10/2010