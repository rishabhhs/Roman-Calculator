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

using namespace std;

bool checkForIllegalCharacters(string &str){
	for (unsigned int i = 0; i < str.length(); i++) {
		if(!(str[i]=='M' ||str[i]=='D' ||str[i]=='C' ||str[i]=='L' ||str[i]=='X' ||str[i]=='V' ||str[i]=='I')){
			return false;
		}
	}
	return true;
}

void convertToUpper(string &str) {
	for (unsigned int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
}



int main( int argc, char *argv[] ) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	bool validate;
	string roman_number1 = "mc";
	string roman_number2 = "R";


	convertToUpper(roman_number1);
	cout << "Converted Roman number to Capitals" << roman_number1 << endl;
	validate = checkForIllegalCharacters(roman_number2);
	if(validate)
		cout << "Roman Number is valid" << endl;
	else
		cout << "Roman Number is not valid" << endl;

	return 0;
}
