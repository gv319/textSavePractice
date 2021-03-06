#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {

	ofstream output;

	output.open("names_and_ids.txt");

	int numberOfNames = 0, uniqueCharacters = 0, randomIncrease = 0;
	string name[3];
	char letters[3], digits[3];

	while (numberOfNames < 3) {
		cout << "Please enter a name: ";
		getline(cin, name[numberOfNames]);
		numberOfNames++;
	}

	output << "Name" << setw(12) << name[0] << setw(12) << name[1] << setw(12) << name[2] << endl;
	output << "ID";
	for (int i = 0; i < 3; i++) {
		while (uniqueCharacters < 3) {
			srand(time(0) + randomIncrease);
			letters[uniqueCharacters] = rand() % ('Z' - 'A') + 'A';
			digits[uniqueCharacters] = rand() % ('9' - '0') + '0';
			uniqueCharacters++;
			randomIncrease += 50; //This makes sure each value will be different
		}
		output << setw(12) << letters[rand() % 3] << letters[rand() % 3] << letters[rand() % 3] << "-" << digits[rand() % 3] << digits[rand() % 3] << digits[rand() % 3];
		uniqueCharacters = 0;
	}

}