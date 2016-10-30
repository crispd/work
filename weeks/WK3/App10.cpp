//AUTHOR	:	DAN CRISP
//DATE		:	15SEPT2016
//WEEK3
//FILE		:	App10.cpp
/* Program Description:
	Square first 15 positive integers, using for loop
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
	//int num; //defined in for condition
	int square;
	//num = 1; //assigned in for condition
	
	cout << "\t" << "NUMBER" << "\t" << "SQUARE" << endl;
	
	for (int num = 1; num <= 15; num++)
	{
		square = num * num;
		cout << "\t" << num << "\t" << square << endl;
	}
	
	return 0;
}