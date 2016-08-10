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

/*
bool checkForIllegalCharacters(string roman){

}
*/

void convertToUpper(string &str) {
	for (unsigned int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
}



int main( int argc, char *argv[] ) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	string roman_number1 = "mc";
	string roman_number2 = "IV";


	convertToUpper(roman_number1);

	cout << roman_number1 << endl;



	return 0;
}
