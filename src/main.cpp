/* 
 * File:   main.cpp
 * Author: matt
 *
 * Created on June 8, 2014, 3:47 PM
 */

#include <kip.h>
#include <kipstring.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    for(auto ii: kip::range(10))
    {
	cout << "Hello";
	cout << ii << endl;
    }

    string silly {"Rubber,baby,buggy,bumpers"};
    vector<string> rows = kip::string::split(silly,',');
    for(auto row: rows)
    {
	cout << row << endl;
	cout << "silly!!!!" << endl;
    }

    vector<int> nums {1,4,5,0,9};
    cout << kip::sum(nums) << endl;
    cout << kip::string::join("|", rows) << endl;
    const string target {"This is a silly string."};
    const string query {"silly"};
    if (kip::string::in(query, target))
    {
	cout << "Indeed it is a silly string." << endl;
    }
    if (!(kip::string::in(target, query)))
    {
	cout << "But this is crazy." << endl;
    }

    return 0;
}

