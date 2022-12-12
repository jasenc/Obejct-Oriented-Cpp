# Enigmatic Messages

#### User Manual
	
Simply provide the program with an input file that supplies all three rotors and the message you want to change, in the order of outer rotor, inner rotor, middle rotor and finally the actual message. The message will be displayed and then the program will ask if you would like to encrypt or decrypt the message, after the program is run, the message will be displayed once again.  

#### System Manual 

This program uses 6 subprograms to get the job done. readCode does exactly that and assigns the proper vectors to the proper lines provided from an input file. printMessage does what it name implies as well. It will print the vector that is passed through it. Find will find a character in a vector. Rotate will rotate the rotor that is passed through it. Encrypt and decrypt are both the same thing but backwards from each other and once again do as the name implies. Once they are all finally working they are called in the main program and ran. Encrypt and decrypt are independlty recursive in that they call the find and rotate functions.

The program is only set to handle vectors with a size of 27, for all rotors and the message. This can easily be changed for the message in that a few limits could be changed. Also, the rotate functions would have to be put into four loops, so that once the inner rotor has made a full rotation, the middle rotor would start to rotate and finally the outer rotot. Unfortunately I could not figure out how to rotate the middle and outer rotors, so my program will only decode and encode a message up to 27 characters long.

#### Test Log

I had many problems with this one. I had to go to the help desk a lot. The main problems were trying to tell the computer what to do. Then I had some problems getting my rotate function to work. It turns out I kept calling a nonexistent vector space, so that had some tinkering. Finally I had to do some tinkering with the encrypt and decrypt codes so they worked properly with the rotate function.

Unfortunately I could not figure out how to rotate the middle and outer rotors, so my program will only decode and encode a message up to 27 characters long.

Jasen Carroll\
CS171-064\
2/26/2010