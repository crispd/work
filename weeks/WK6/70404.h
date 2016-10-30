//AUTHOR	:	DAN CRISP
//DATE		:	22SEPT2016
//WEEK3
//FILE		:	70404.cpp
/* Class Scores:
Write a program that calculates the total grade for N classroom exercises as a percentage.
The user should input the value for N followed by each of the N scores and totals.
Calculate the overall percentage (sum of the total points earned divided by the total points possible).
Output the result as a percentage, and be cheeky about it.
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main ()
{	
	//instantiate some vars. others initiated once user input is available for determining their length.
	int nums(0);
	double points_possible(0.0);
	double points_earned(0.0);
	double percentage(0.000);
	
	system("cls");
	
	cout << "Let\'s calculate your grade!\n\n";
	cout << "First, we need to know how many grades you\'ll need to enter. Please enter the number of grades we\'re considering: ";
	cin >> nums;
	
	//need to find out how to clear var, and error, then re-request input if int num between 0 and 1.
	while(nums<1)
	{
		nums = 0;
		cout << "Ok, don't be silly here, we're talking about your grade! Please tell me another number.. ABOVE ZERO!\n";
		cin >> nums;
		cout << " you entered: "<< nums<< endl;
	}
	
	cout << "\nGreat! So we\'ll be calculating your total grade based on " << nums << " items.\n\n";
	
	double* possible = new double[nums];
	double* earned = new double[nums];
	double* percent = new double[nums];
	
	for(int i = 0; i < nums; i++)
	{
		cout << "What was the total points possible for grade " << i + 1 << ": ";
		cin >> possible[i];
		points_possible = points_possible + possible[i];
		cout << "\nAnd how many points did you receive for grade " << i + 1 << ": ";
		cin >> earned[i];
		points_earned = points_earned + earned[i];
		percent[i] = 100*earned[i]/possible[i];
		cout << "\nThis grade was calculated to be a " << percent[i] << "%.\n\n";
		cout << "#" << "\tEARNED" << "\tPOSSIBLE" << "\tPERCENT" << endl;
		cout << i + 1 << "\t" << possible[i] << "\t" << earned[i] << "\t\t" << percent[i] << "%\n\n\n";
	}
	
	percentage = 100*points_earned/points_possible;
	
	cout << "\n\n\n";
	cout << "#" << "\tEARNED" << "\tPOSSIBLE" << "\tPERCENT" << endl;
	for( int i = 0; i < nums; i++)
	{
		cout << i+1 << "\t" << earned[i] << "\t" << possible[i] << "\t\t" << percent[i] << "%\n";
	}
	
	cout << "\nTOTAL\t" << points_earned << "\t" << points_possible << "\t\t" << percentage << "%\n";
	
	return 0;
}