//AUTHOR	:	DAN CRISP & DYLAN SIMON
//DATE		:	13OCT2016
//WEEK3
//FILE		:	test2Program2
/* Cyber Tailor
In 3-4 sentences define static vairable.
	A static varialbe is one whose value, once defined, can be called repeatedly throughout the run of the program.
	Unlike a global varialbe, it can only be referenced by the function where it was declared.
in 3-4 sentences define static global variable.
	A static global variable is one which, once defined, can be repeatedly accessed from anywhere within a program throughout it's runtime.

Demonstrate your understanding of static variables by 
	creating a small application that computes the 
	running average of the given values.
*/

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

int get_input(char);
int hatCalc(int, int, int);
int jacketCalc(int, int, int);
int waistCalc(int, int, int);


int main ()
{
	using namespace std;
	
	int num1(1), num2(2), num3(3);
	const int N(3);
	int sum, avg;
	
	cout << "To demonstrate a moving average, we'll start with these numbers: 1, 2, and 3\n\n";
	cout << "Now, with every integer you enter, the moving average for the last 3 numbers will be displayed. \n";
	
	sum = num1 + num2 + num3;
	avg = sum / N;
	
	cout << "Enter an integer: ";
	cin >> num;
	
	runningAvg = 
	return 0;
}