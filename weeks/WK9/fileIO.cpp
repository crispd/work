//AUTHOR:	Dan Crisp
//DATE:		19OCT2016
//FILE:		App18.cpp
/* Readin and writing data from a text file. */
/* Works well for AllAlarmChannels.txt as input, but doens't handle saveset.txt header very well */
#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

const int MAX_CHARS_PER_LINE = 100;
//const int MAX_TOKENS_PER_LINE = 20;
const int MAX_LINES_PER_FILE = 200;

const char* const DELIMITER = " ";

char* get_stuff( istream& , string* , int );
char* put_stuff( ostream& , string* , string* , int );

int main()
{
	system("cls");
	char* thing1 = new char[MAX_CHARS_PER_LINE];
	char* thing2 = new char[MAX_CHARS_PER_LINE];
	char* thing3 = new char[MAX_CHARS_PER_LINE];
	string name[MAX_LINES_PER_FILE] = {""};
	string value[MAX_LINES_PER_FILE] = {""};

	char inpfile[40] = {""};
	char outfile[40] = {""};
	
	// Request Filenames From User
	cout << "Enter filename for input relative to current location:\n";
	cin >> inpfile;
	cout << "Now enter filename for output:\n";
	cin >> outfile;
	
	
	//fin.open("AllAlarmChannels.txt");
	ifstream fin;
	fin.open(inpfile);
	if (!fin.good())
		return 1;
	
	cout << "\nGETTING INPUT:\n";
	for (int i = 0; i<MAX_LINES_PER_FILE; i++){
		cout << i;
		get_stuff(fin, name, i);
		cout << "\t\t\t";
		get_stuff(fin, value, i);
		cout << "\n";
		//cout << "This is the number of retrieval iterations: " << i << "\n";
	}
	
	char *namestr = new char[name[59].length() + 1];
	strcpy(namestr, name[59].c_str());
	
	fin >> thing2 >> thing3;
	cout << "This is the new name[3]: " << namestr << endl;
	cout << "This is the new thing2: " << thing2 << endl;
	cout << "This is the new thing3: " << thing3 << endl;
	
	fin.close();
	
	
	ofstream fout;
	fout.open(outfile);
	if(!fout.good())
		return 1;
	
	cout << "\nWRITING OUTPUT:\n";
	for (int i = 0; i < MAX_LINES_PER_FILE; i++) {
		put_stuff(fout, name, value, i);
	}
	fout.close();
	
	
	
	
	return 0;
}


char* get_stuff(istream& fin, string* name, int i)
{
	
	char* thing1 = new char[MAX_CHARS_PER_LINE];
	fin >> thing1;
	name[i] = thing1;
	
	// USING cout TO PRINT OUT VAR thing1
	//cout << thing1;
	//cout << "thing1 inside get_name: " << thing1 << "\n";
	
	// WANT TO TEST ASSIGNMENT OF name[i], BUT CAN'T cout TYPE string*, HAVE TO COPY IT INTO CHAR FIRST. LENGTH HERE CAN BE DEFINED.
	char *namestr = new char[name[i].length() + 1];
	strcpy(namestr, name[i].c_str());
	cout << namestr;
	
	//return namestr;
	return thing1;
}

char* put_stuff(ostream& fout, string* name, string* value, int i)
{
	
	char *namestr = new char[name[i].length() + 1];
	char *valuestr = new char[value[i].length() + 1];
		
	strcpy(namestr, name[i].c_str());
	strcpy(valuestr, value[i].c_str());
	
	// Display output to fout and screen
	fout << "caput " << namestr << " " << valuestr << endl;
	cout << "caput " << namestr << " " << valuestr << endl;
	
	
	return namestr;
}