#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream input;

	input.open("names_and_ids.txt");

	string name1, name2, name3, name4, name5, name6, name7, name8, name9, name10 , name11;

	input >> name1 >> name2 >> name3 >> name4 >> name5 >> name6 >> name7 >> name8 >> name9 >> name10 >> name11;

	cout << name1 << name2 << name3 << name4 << name5 << name6 << name7 << name8 << name9 << name10 << name11;

	input.close();


}