/*
 * test.cpp
 *
 *  Created on: Jun 15, 2014
 *      Author: matt
 */

#include <kip.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	cout << "Testing kip" << endl;
	if (3 == kip::abs(-3)) {
		cout << "Kip abs works..." << endl;
	}
	// read a file and output it
	string data {kip::read("test.txt")};
	cout << "I read this data:" << endl;
	cout << data << endl;

	// read a document into a vector
	vector<string> datalines {kip::readlines("testlines.txt")};
	for (auto& line: datalines)
	{
		cout << "what a wonderful line" << endl;
		cout << line << endl;
	}

	return 0;
}



