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
	//instantiate vars (try to create arrays of length repeatloop, & display table w/ array values at exit)
	int repeatLoop(1000);
	int limitLoop(5);
	
	double width(0.0);
	double length(0.0);
	
	double perimeter;
	double area;
	
	
	for (int cntr = 0; cntr < repeatLoop; cntr++)
	{
		if(cntr == limitLoop )
		{
			break;
		}
		
		cout << "We're going to calculate the perimeter of a rectangle!" << endl;
		
		int i(0);
		while (width <= 0 || i == 0 )
		{
			cout << "\n";
			if (i==0)
			{
				cout << "Give me a width in feet. Enter it for me here: ";
			} else {
				cout << "Let's try that again! Give me number above 0 for the width: ";
			}
			cin >> width;
			system("cls");
			
			i = 1;
		}
		
		i = 0;
		while (length <= 0 || i == 0 )
		{
			cout << "\n";
			if (i==0)
			{
				cout << "Great, now enter a length: ";
			} else {
				cout << "Let's try that again! Give me a number greater than 0 for the length: ";
			}
			cin >> length;
			system("cls");
			
			i = 1;
		}
		
		//process
		perimeter = (2*width) + (2*length);
		area = width * length;
		
		//display output
		cout << "\n";
		cout << "\t" << "WIDTH" << "\t" << "LENGTH" << "\t" << "PERIMETER" << "\t" << "AREA" << endl;
		cout << "\t" << width << "\t" << length << "\t" << perimeter << "\t" << area << endl;
		cout << "\n";
		
	}
	
	
	return 0;
}