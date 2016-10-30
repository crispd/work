//AUTHOR:	Dan Crisp
//DATE:		19OCT2016
//FILE:		App18.cpp
/* Readin and writing data from a text file. */
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
	system("cls");
	
	int num1, num2;
	
	// Define input & open
	ifstream input_data;
	input_data.open("Myinput.dat");
	
	// Read first value from text
	input_data >> num1;
	cout << num1 << endl;
	
	// Read second value from text
	input_data >> num2;
	cout << num2 << endl;
	
	// Switch Values
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	
	// Display
	cout << "\n\nNUMBER ONE:\t\tNUMBER TWO:\n";
	cout << num1 << "\t\t\t" << num2 << endl;
	
	return 0;
}