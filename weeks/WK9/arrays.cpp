//AUTHOR:	DAN CRISP
//DATE:		25OCTOBER, 2016
//FILE:		arrays.cpp
/* Description: Arrays */

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cstdlib>
#include<cmath>

int main()
{
	using namespace std;
	
	int inputs[5];
	
	ifstream get_data;
	ofstream put_data;
	get_data.open("Myinput.txt");
	if (!get_data.good())
		return 1;
	
	if(get_data.eof())
		cout << "\nFile is empty.\n";
	else
		cout << "\nGood to go.\n";
	
	for ( int i=0; i < 5; i++) {
		get_data >> inputs[i];
	}
	
	put_data.open("out_file.txt");
	if(!put_data.good())
		return 1;
	
	for (int i = 0; i < 5; i++) {
		put_data << inputs[i] << endl;
	}
	
	
	return (0);
}