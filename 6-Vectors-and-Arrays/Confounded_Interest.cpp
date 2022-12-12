/*
   The purpose of this program is to compute balances on a credit
   card and to predict how much you will have to pay if you are
   a delinquent and don't pay your balances on time.

   Jasen Carroll
   CS171-064
   Coufounded Interest
   Assignment 6/Homework 6
   2/21/2010

   The program has three subprograms. One being an introduction,
   another asks the user for their input data. That being their
   interest rate, starting balance and how much they plan to 
   charge and pay off each month. Unfortunalely for this program
   that has to be the same number. After that information is 
   entered the program calculates the interests amounts for up
   to a year.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include "jcc329_Library.h"
using namespace std;

// The first three are prototypes instead of putting the subprograms at the beginning
void introduction(); 
void getUserEntry(double& annualInterest, double& montlyAmount, double& initialBalance);
void showInterestTable(ostream& out, double annualInterest, double monthlyAmount, double initialBalance);

// The next three are global variables that I needed throughout the entire program
double interest; 
double endBalance;
double balance;

	int main()
	{
		introduction(); // Displays the introduction to the end user
		ofstream fout ("niceTable.txt"); // Records everything to a tab-delimited text file
		double annualInterest, monthlyAmount, initialBalance; // Creates the doubles needed for the program
		getUserEntry(annualInterest, monthlyAmount, initialBalance); // Retrieves the information from the end user.
		fout << "Month" << "\t" << "Balance at Beginning" << "\t" << "Balance after Spending" << "\t" << "Interest" 
				<< "\t" << "Balance After Spending" << endl;
					// Prints this to the aformentioned file
		cout << "Month" << "\t" << "Balance at Beginning" << "\t" << "Balance after Spending" << "\t" << "Interest" 
				<< "\t" << "Balance After Spending" << endl; 
					// Prints this to the screen
		int times = 0; // This will be used to count how many times the loop is processed
		while (times <= 13) // Continues for 12 months using the int times
		{
			times++; // This is how it counts to 12 months
			if (times == 1) // If it if the first month, it is January
			{
				cout << "Jan" << "\t"; // Prints January to the screen
				fout << "Jan" << "\t"; // Prints January to the output file
				initialBalance = initialBalance + interest; // Adds the interest to the initial balance
				balance = initialBalance+monthlyAmount; // Using a new variable the current balance is calculated
				interest = (balance)*((1./12.)*(annualInterest/100.)); // Determines the interest
				endBalance = interest + initialBalance;	// Balance at the end of the month
				showInterestTable(cout, interest, balance, initialBalance); // Prints everything to the screen
				showInterestTable(fout, interest, balance, initialBalance); // Prints everything to the output file
			}
			if (times == 2) // Same as first if statement but for February
			{
				cout << "Feb" << "\t";
				fout << "Feb" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 3) // Same as first if statement but for March
			{
				cout << "Mar" << "\t";
				fout << "Mar" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 4) // Same as first if statement but for April
			{
				cout << "Apr" << "\t";
				fout << "Apr" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 5) // Same as first if statement but for May
			{
				cout << "May" << "\t";
				fout << "May" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 6) // Same as first if statement but for June
			{
				cout << "Jun" << "\t";
				fout << "Jun" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 7) // Same as first if statement but for July
			{
				cout << "Jul" << "\t";
				fout << "Jul" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 8) // Same as first if statement but for August
			{
				cout << "Aug" << "\t";
				fout << "Aug" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 9) // Same as first if statement but for September
			{
				cout << "Sep" << "\t";
				fout << "Sep" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 10) // Same as first if statement but for October
			{
				cout << "Oct" << "\t";
				fout << "Oct" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 11) // Same as first if statement but for November
			{
				cout << "Nov" << "\t";
				fout << "Nov" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}
			if (times == 12) // Same as first if statement but for December
			{
				cout << "Dec" << "\t";
				fout << "Dec" << "\t";
				initialBalance = initialBalance + interest;
				balance = initialBalance+monthlyAmount;
				interest = (balance)*((1./12.)*(annualInterest/100.));
				endBalance = interest + initialBalance;			
				showInterestTable(cout, interest, balance, initialBalance);
				showInterestTable(fout, interest, balance, initialBalance);
			}			
		}
		fout.close();
		return 0;
	}
	
	
	void introduction() // Introduction, explains to the user what is going to happen.
	{
		cout << "After entering your credit card data the program will calculate how much \n"
				"interest you will acrue over the next year." << endl << endl;
	}
	
	void getUserEntry(double& annualInterest, double& montlyAmount, double& initialBalance)
	{  // This is a function that retrieves data from the end user
		string sInterest = "Please enter the interest rate on your credit card: "; 
						// Prompt the end user for the interest rate
		annualInterest = promptForDouble(sInterest); 
						// Using a function in a header file, retrieves the input from the end user
		string sAmount = "Please enter the how much you charge and pay off each month (one number): "; 
						// Prompt the end user for the payment amount
		montlyAmount = promptForDouble(sAmount); 
						// Using a function in a header file, retrieves the input from the end user
		string sBalance = "Please enter the initial Balance on your credit card: "; 
						// Prompt the end user for the initial balance
		initialBalance = promptForDouble(sBalance); 
						// Using a function in a header file, retrieves the input from the end user
	}


	void showInterestTable(ostream& out, double annualInterest, double monthlyAmount, double initialBalance)
	{ // This function just prints to line below to where you want it to go		
		out << fixed << setprecision(2) << "$" << initialBalance << "\t" << "$" << monthlyAmount << "\t" << 
			"$" << annualInterest << "\t" << "$" << endBalance << endl;
	}