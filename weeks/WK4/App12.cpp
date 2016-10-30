//AUTHOR	:	DAN CRISP
//DATE		:	15SEPT2016
//WEEK3
//FILE		:	App12.cpp
/* Program Description:
	Build a square dog house. Length depends on cost of material and available cash.
	Cost/sqft is $10.00
	User Input: budget
	Proc: Area; Length = sqrt(Area)
	Program Output: 
		Length of dog house built on user budget
*/
/*C++ statements to be copied into the program to print real numbers. These statements are:
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	escape sequence:
	"\n" - new line
	"\t" - horizontal tab
	Leaving these legacy notes...
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main ()
{	
	//clear screen
	system("cls");
	
	//instantiate vars
	double length(0.0);
	const double costSqft(10.00);
	double perimeter, area= 0.0;
	double budget;
	
	cout << "Looks like you interested in building a dog house! Let's figure out the floor dimensions of your doghouse based on your budget." << endl;
	cout << "\n";
	cout << "Please enter your budget: ";
	cin >> budget;
	//system("cls");
	cout << "\n";
	
	if (budget < 25)
	{
		cout << budget << "?!?! That's pretty weak sauce!" << endl;
		cout << "\n";
	}
	
	area = budget/costSqft;
	length = sqrt(area);
	perimeter = length * 4;
	
	cout << "Alright, this is what we're talking about with a budget of $" << budget << "..." << endl;
	cout << "\n";
	
	cout << "BUDGET:" << "\t\t$" << budget << endl;
	cout << "\n";
	
	cout << "AREA:" << "\t\t" << area << "sqft" << endl;
	cout << "\n";
	
	cout << "LENGTH:" << "\t\t" << length << "ft" << endl;
	cout << "\n";
	
	cout << "PERIMETER:" << "\t" << perimeter << "ft" << endl;
	cout << "\n";
	
	return 0;
}