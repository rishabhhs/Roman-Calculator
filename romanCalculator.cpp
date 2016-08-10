//============================================================================
// Name        : romanCalculator.cpp
// Author      : Rishabh
// Version     :
// Copyright   : My individual work
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <string>
#include <ctype.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

//creating maps to replace my lesser Roman numbers
map <string, string> myRoman= {
			{"IV", "IIII"},
			{"IX", "VIIII"},
			{"XL", "XXXX"},
			{"XC", "LXXXX"},
			{"CD", "CCCC"},
			{"CM", "DCCCC"}	};

//check for illegal characters entered by the user
bool checkForIllegalCharacters(string &str){
	for (unsigned int i = 0; i < str.length(); i++) {
		if(!(str[i]=='M' ||str[i]=='D' ||str[i]=='C' ||str[i]=='L' ||str[i]=='X' ||str[i]=='V' ||str[i]=='I')){
			return false;
		}
	}
	return true;
}

//convert the Roman number entered by user to Capital letters
void convertToUpper(string &str) {
	int len = str.length();
	for (unsigned int i = 0; i <len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
}

bool IfReplacementRequired(char str1, char str2){
	if(str1=='I' && str2=='V')
		return false;
	return true;
}





int main( int argc, char *argv[] ) {
	cout << "!!!Welcome to Roman Calculator!!!" << endl; // prints !!!Hello World!!!
	vector <int> testing;


	bool validate;
	string roman_number1 = "mclxiv";
	string roman_number2 = "1V";


	convertToUpper(roman_number1);
	cout << "Converted Roman number to Capitals" << roman_number1 << endl;
	validate = checkForIllegalCharacters(roman_number2);
	if(validate)
		cout << "Roman Number is valid" << endl;
	else
		cout << "Roman Number is not valid" << endl;

	return 0;
}
