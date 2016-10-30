//AUTHOR	:	DAN CRISP
//DATE		:	11OCT2016
//WEEK3
//FILE		:	app17.cpp
/* Something:
Create two variables
You typed first num = xx
You typed second num = xx
The switch numbers are..
	num1 is changed to =
	num2 is changed to =
	

Be able to pass value by reference call (w/ @) or by function return.

	cout.self(ios::fixed)
	cout.self(ios::showpoint)
	cout.precision(2)
*/
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

void getvars( int& var1, int& var2 );
void switchvars( int& var1, int& var2 );
void outputvars( int var1, int var2 );

int main ()
{	
	using namespace std;
	int var1(1000);
	int var2(2000);
	
	// Display variable values
	outputvars( var1 , var2 );
	
	// Re-assign variable values with requested user input
	getvars( var1, var2 );
	
	//Display variable values
	outputvars( var1 , var2 );
	
	// Process, switch variable values
	switchvars( var1 , var2 );
	
	// Display variable values
	outputvars( var1 , var2 );
	
	return 0;
}

void getvars( int& num1, int& num2)
{
	using namespace std;
	cout << "Enter value for variable 1: ";
	cin >> num1;
	cout << "Enter value for variable 2: ";
	cin >> num2;
	
	return;
}

void switchvars( int& var1, int& var2)
{
	//Don't need to 
	int temp = var1;
	
	var1 = var2;
	var2 = temp;
	
	return;
}

void outputvars( int var1, int var2)
{
	using namespace std;
	cout << "Variable 1 is " << var1 << endl;
	cout << "Variable 2 is " << var2 << endl;
	
	return;
}