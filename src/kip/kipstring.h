/* 
 * File:   kipstring.h
 * Author: matt
 *
 * Created on June 8, 2014, 7:57 PM
 */

#ifndef KIPSTRING_H
#define	KIPSTRING_H
#include <string>
#include <vector>

using namespace std;
namespace kip {
        namespace string {
                bool in(std::string query, std::string target);
                std::string join(std::string joiner, vector<std::string> items);
                std::vector<std::string> split(std::string line, char splitChar);
        }

}

#endif	/* KIPSTRING_H */

