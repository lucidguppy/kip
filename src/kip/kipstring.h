/* 
 * File:   kipstring.h
 * Author: matt
 *
 * Created on June 8, 2014, 7:57 PM
 *
 * kip::string will start out working on the deprecated python string library
 *
 */

#ifndef KIPSTRING_H
#define	KIPSTRING_H
#include <string>
#include <vector>

using namespace std;
namespace kip {
  namespace string {

    /* Will list standard library alternatives when they're there. */
    /* for string::atof use std::stod in C++11 <string> */
    /* for string::atoi use std::stoi in C++11 <string> */
    /* for string::atol use std::stol in C++11 <string> */
    // kip::string::capitalize
    //Return a copy of word with only its first character capitalized.
    std::string capitalize(std::string word);
    bool in(std::string query, std::string target);
    std::string join(std::string joiner, vector<std::string> items);
    std::vector<std::string> split(std::string line, char splitChar);
  }

}

#endif	/* KIPSTRING_H */

