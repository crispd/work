//AUTHOR	:	DAN CRISP
//DATE		:	13SEPT16
//WEEK2
//FILE		:	App7.cpp
/* Program Description:
	Calculate gross income using these income brackets:
	0% tax IF <= $10,000
	6% tax IF > $10,000 && <= 20,000
	1$ tax IF > $20,000
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
	system("cls");
	// static input
	const double rate_lowInc(0.0), rate_midInc(0.06), rate_highInc(0.10);
	
	/* 4 lines for checking vars or stopping
	int check(1);
	cout << rate_lowInc << "\t" << rate_midInc << "\t" << rate_highInc << "\n \n type 1 to continue, anything else will stop: " << endl;
	cin >> check;
	if(check == 1) {system("cls"); } else {return 0;} */
	
	
	// user input
	/* removing stuff from last week 
	double hourly_rate; // to store hourly wages
	double hours_worked; // hours worked per week
	double gross_monthly; 
	
	
	cout << "Let's calculate your monthly gross pay!\n";
	cout << "\n";
	cout << "Type the number of hours worked: ";
	cin >> hours_worked;
	*/
	
	/* Was trying to place input validation where input was requested, separate it from output process.
	int hours_bad(0);
	while(hours_bad == 0); {
		cout << "\n You think your pretty funny don't you?" << endl;
		cout << "Try putting in something other than "
			<< hours_worked << " to continue." << endl;
	}
	*/
	double inc_min = 10000.00; //referred to in class as min_amt, the point between low and mid income brackets
	double inc_max = 20000.00; //point between mid and high income brackets
	double inc_gross; //referred to in class as gross_income
	double tax_rate; //referred to in class as tax_amt
	/* ask for hourly rate
	cout << "\n";
	cout << "Type your hourly rate : ";
	cin >> hourly_rate;
	system("cls");*/
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Please type your gross income: ";
	cin >> inc_gross;
	
	system("cls");
	cout << "GROSS INCOME:" << "\t" << "$" << inc_gross << "\n" << endl;
	
	
	//Process
	/* calculate gross_monthly from hours * rate
	gross_monthly = hours_worked * hourly_rate;*/
	if(inc_gross <= inc_min)
	{
		cout << "Your income puts you in a tax bracket not subject to a tax. \n \n";
		tax_rate = 0;
	} else if(inc_gross > inc_max && inc_gross <= inc_max) {
		tax_rate = rate_midInc * (inc_gross - inc_min);
		cout << "middle bracket" << endl;
	} else if(inc_gross > inc_max) {
		tax_rate = rate_highInc * (inc_gross - inc_max) + rate_midInc * (inc_max - inc_min);
		cout << "top bracket" << endl;
	}
	
	//Output
	/* if hours_worked >0 show rate, hours, gross monthly
	if(hours_worked > 0)
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
	
		cout << "Mmmmk... I suppose this is what your making then..\n";
		cout << "\n";
		cout << "Rate" <<"\t"
			<< "Hours" <<"\t"
			<< "Gross Monthly" <<endl;
		cout << "$" << hourly_rate <<"\t"
			<< "$" << hours_worked <<"\t"
			<< "$" << gross_monthly <<endl;
	} else {
		cout << "Your an ass.. put in some real hours next time. /n";
	} */
	cout << "YOU'LL OWE:" << "\t" << "$" << tax_rate << endl;
	
	
	return 0;
}