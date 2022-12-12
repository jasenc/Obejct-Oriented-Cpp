// The purpose of this program is to estimate the age of a pet
// in their respective years

// Jasen Carroll
// CS171-064
// Assignment 2/Homework 2
// 1/18/2010

// This program succesfully calculates the age of a pet in that 
// species own time rate using very simplistic math functions


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float HUMAN_YEARS;
	float HUMAN_MONTHS;
	float PET_AGE_MULTIPLIER;

	cout << "How fast does your pet age compared to humans (no decimals): ";
	cin >> PET_AGE_MULTIPLIER;
	cout << "How many human years is old your pet (no decimals): ";
	cin >> HUMAN_YEARS;
	cout << "How many months old is your pet (use decimals if needed): ";
	cin >> HUMAN_MONTHS;
	int DOG_MONTHS = (PET_AGE_MULTIPLIER * HUMAN_MONTHS);
	int DOG_MTOY = DOG_MONTHS / 12;
	int DOG_YEARS = (PET_AGE_MULTIPLIER * HUMAN_YEARS)+DOG_MTOY;
	int DOG_MONTHS_SHOWN = DOG_MONTHS - (DOG_MTOY * 12);
	
	cout << "In pet years, your pet is " << DOG_YEARS << " years and " << DOG_MONTHS_SHOWN << " months old." << endl;

	return 0;
}
