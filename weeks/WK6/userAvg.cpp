//AUTHOR	:	DAN CRISP
//DATE		:	04OCT2016
//WEEK3
//FILE		:	usrAvg.cpp
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
#include <cstdlib>

using namespace std;

int main ()
{	
	double* nums = new int[num];
	double avg = 0;
	
	cout << "Hello steve, let me show you that I can average numbers. Please enter a number: \n";
	cin >> num[0];
	new_line();
	int i = 1;
	do
	{
		cout << "Alright buddy, give me another one. If you don't want to enter another number, enter 0.\n";
		cin >> num[i];
		i++;
		system("cls");
	}while (!num(i-1)==0)
	
	
	cout.self(ios::fixed);
	cout.self(ios::showpoint);
	cout.precision(2);
	
	avg = avg_input(nums);
	
	show_results(nums,avg)
	
	return 0;
}

void function new_line()
{
	cout<<"\n";
} 	

void show_results(double nums, double nums)
{
	cout << "Your Numbers";
}
double avg_data (double n1, double n2)
{
	double sum = 0;
	for (int i = 0; i < len(nums); i++)
	{
		sum = sum + nums[i];
		
	}
	
	avg = sum / (len(nums) - 1)
	
	return avg;
}
double get_data(double num1, double num2, double num3)
{
	
}
