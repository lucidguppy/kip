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


int main(int argc, char** argv)
{
  std::string lower {"lower"};
  bool retval = false;
  cout << kip::string::capitalize(lower) << endl;
  // if the strings are equal return zero
  if (!(std::string("Lower") == kip::string::capitalize(lower)))
    {
      retval = true;
    }
  // make sure capitalize of nothing is nothing
  if ( std::string("") != kip::string::capitalize(""))
    {
      retval = true;
    }
  return retval;
}



