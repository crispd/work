//AUTHOR	:	DAN CRISP
//DATE		:	04OCT2016
//WEEK3
//FILE		:	app16.cpp
/* Class Scores:
Write a program that calculates the total grade for N classroom exercises as a percentage.
The user should input the value for N followed by each of the N scores and totals.
Calculate the overall percentage (sum of the total points earned divided by the total points possible).
Output the result as a percentage, and be cheeky about it.

	cout.self(ios::fixed)
	cout.self(ios::showpoint)
	cout.precision(2)
*/
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

void new_line();
void show_result(int var1c, int var2c, double sum);
void get_data(int& var1a, int& var2a);
double sum_vars(int var1b, int var2b);

int main ()
{	
	using namespace std;
	int var1, var2;
	double sum(0.0);
	double avg(0.0);
	
	get_data( var1, var2 );
	sum = sum_vars( var1, var2 );
	show_result( var1, var2, sum );
	
	return 0;
}

void new_line()
{
	using namespace std;
	cout <<"\n";
}

void show_result(int var1c, int var2c, double sum)
{
	using namespace std;
	//first num is = var1
	cout << "First num is = " << var1c << endl;
	//second num is = var2
	cout << "Second num is = " << var2c << endl;
	//their sum is = sum
	cout << "SUM of nums is = " << sum << endl;
}

void get_data( int& var1a, int& var2a )
{
	using namespace std;
	cout << "please type two variables: ";
	cin >> var1a >> var2a;
	cout << endl;
	return;
}

double sum_vars( int var1b, int var2b )
{
	using namespace std;
	int sums = 0;
	sums = var1b + var2b;
	
	return sums;
}


