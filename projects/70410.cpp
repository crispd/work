//AUTHOR	:	DAN CRISP
//DATE		:	15OCT2016
//WEEK3
//FILE		:	70410.cpp
/* Cyber Tailor
Request user's height, weight, and age.
Compute clothing sizes:
	Hat size = (weight / height) * 2.9
	Jacket size = (height * weight) / 288 (if age >30, add 1/8'' per each decade past 30yrs)
	Waist = weight / 5.7 (if age > 28, add 1/10'' per each 2yrs past 28)
Use functions for each calculation.
Allow user to repeat this calculation as often as they wish by prompting either Y or y.
*/

#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>

// s pointer to a null-terminated sequencce of characters. The sequence is copied as the new value for the string. (this could be added, but doesn't appear to be needed)
// * fixes this error: "'int get_input(char)': cannot convert argument 1 from 'const char [7]' to 'char'"
int get_input(char*);
double hatCalc(int, int, int);
double jacketCalc(int, int, int);
double waistCalc(int, int, int);
void displayOutput(double, double, double);

int main ()
{
	using namespace std;
	int height, weight, age;
	// would like to put these three into one array 'double[3]'
	double hatSize, jacketSize, waistSize;
	char inp;
	
	do {
	// Clear Console
	system("cls");
	
	// Request Input
	height = get_input("height");
	weight = get_input("weight");
	age = get_input("age");
	
	
	// Process. Calculate sizes.
	hatSize = hatCalc(height, weight, age);
	jacketSize = jacketCalc(height, weight, age);
	waistSize = waistCalc(height, weight, age);
	
	// Display
	displayOutput(hatSize, jacketSize, waistSize);
	
	// Continuation Prompt
	cout << "Please type either 'y' or 'Y' to repeat the sizing algorithm:\n";
	cin >> inp;
	cout << "\n\n";
	
	} while ((inp == 'y')||(inp == 'Y'));
	
	return 0;
}

int get_input(char* thing)
{
	using namespace std;
	int value;
		
	cout << "Please enter your " << thing << ": \n";
	cin >> value;
	
	return value;
}

double hatCalc(int height, int weight, int age)
{
	using namespace std;
	double size;
	
	size = (static_cast<double>(weight) / height) * 2.9;
	
	return size;
}

double jacketCalc(int height, int weight, int age)
{
	using namespace std;
	double size;
	
	size = (static_cast<double>(height) * weight) / 288;
	if (age > 30) {
		size = size + floor((age - 30)/10)*0.125;
	}
	
	return size;
}

double waistCalc(int height, int weight, int age)
{
	using namespace std;
	double size;
	
	size = (static_cast<double>(weight) / height) * 2.9;
	if (age > 28) {
		size = size + floor((age - 28)/2)*0.1;
	}
	
	return size;
}

void displayOutput(double hat, double jacket, double waist)
{
	using namespace std;
	
	cout << "\t------------------------\n";
	cout << "\nYour automized tailor has some sizes for you.\n\t------------------------\n"
		<< "Hat Size:\t" << hat
		<< "\nJacket Size:\t" << jacket
		<< "\nWaist Size:\t" << waist << "\n\n";
}