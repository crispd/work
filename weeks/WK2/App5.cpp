//AUTHOR	:	DAN CRISP
//DATE		:	8SEPT16
//WEEK2
//FILE		:	Application5.cpp
/* Program Description:
	This program computes the gross pay for a week.
*/
/*C++ statements to be copied into the program to print real numbers. These statements are:
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	escape sequence:
	"\n" - new line
	"\t" - horizontal tab
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main ()
{	
	system("cls");
	// input
	double hourly_rate; // to store hourly wages
	double hours_worked; // hours worked per week
	double gross_pay;
	
	cout << "Let's calculate your gross pay!\n";
	cout << "\n";
	cout << "Type the number of hours worked: ";
	cin >> hours_worked;
	
	/*
	while(hours_worked <= 0); {
		cout << "\n You think your pretty funny don't you?" << endl;
		cout << "Try putting in something other than "
			<< hours_worked << " to continue." << endl;
	}
	*/
	
	cout << "\n";
	cout << "Type your hourly rate : ";
	cin >> hourly_rate;
	system("cls");
	
	//Process
	gross_pay = hours_worked * hourly_rate;
	
	//Output
	if(hours_worked > 0)
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
	
		cout << "Mmmmk... I suppose this is what your making then..\n";
		cout << "\n";
		cout << "Rate" <<"\t"
			<< "Hours" <<"\t"
			<< "Pay" <<endl;
		cout << "$" << hourly_rate <<"\t"
			<< "$" << hours_worked <<"\t"
			<< "$" << gross_pay <<endl;
	} else {
		cout << "Your an ass.. put in some real hours next time. /n";
	}
	
	
	return 0;
}