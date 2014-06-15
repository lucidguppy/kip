/*
 * test.cpp
 *  a simple initial test program - to be filled out more
 *
 *  Created on: Jun 15, 2014
 *      Author: matt
 */

#include <kip.h>
#include <kipstring.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
  std::string lower {"lower"};
  cout << kip::string::capitalize(lower) << endl;
  // if the strings are equal return zero
  return (!(std::string("Lower") == kip::string::capitalize(lower)));
}



