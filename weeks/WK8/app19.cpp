//AUTHOR:	Dan Crisp
//DATE:		19OCT2016
//FILE:		App18.cpp
/* Readin and writing data from a text file. */
#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

const int MAX_CHARS_PER_LINE = 100;
const int MAX_TOKENS_PER_LINE = 20;
const char* const DELIMITER = " ";

int main()
{
	system("cls");
	
	int num1, num2, num3;
	char* thing1 = new char[MAX_CHARS_PER_LINE];
	char* thing2 = new char[MAX_CHARS_PER_LINE];
	//string thing1, thing2;
	int sum = 0;
	double average = 0;

	ifstream get_data;
	ofstream put_data;	
	get_data.open("Myinput.dat");
	if (!get_data.good())
		return 1;// exit if file not found
	
	get_data >> num1 >> num2 >> num3;
	//char* 
	cout << "This is 'num1': " << num1 << endl;
	cout << "This is 'num2': " << num2 << endl;
	cout << "This is 'num3': " << num3 << endl;
	
	sum = num1 + num2 + num3;
	double sqrtsum = sqrt(sum);
	double avg = (double)sum/3;
	
	cout << "This is the sum: " << sum << endl;
	cout << "This is the sqrtsum: " << sqrtsum << endl;
	cout << "This is the average: " << avg << endl;
	
	put_data.open("out_file.dat");
	get_data.close();
	put_data.close();
	
	ifstream work_data;
	work_data.open("AllAlarmChannels.txt");
	if (!work_data.good())
		return 1;
	
	
	work_data >> thing1 >> thing2;
	cout << "This is the new thing1: " << thing1 << endl;
	cout << "This is the new thing2: " << thing2 << endl;
	
	work_data.close();
	
	return 0;
}