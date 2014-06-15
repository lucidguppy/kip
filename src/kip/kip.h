/* 
 * File:   kip.h
 * Author: matt
 *
 * Created on June 8, 2014, 3:43 PM
 */

#ifndef KIP_H
#define	KIP_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

namespace kip {
  vector<int> range(int stop);
  vector<string> readlines(string filename);
  string read(string filename);

  template <class T>
  void print(T item) {
    cout << item << endl;
  }

  template <class T>
  T abs(T item) {
    if(item >= 0) {
	return item;
    } else {
	return -1 * item;
    }
  }

  template <class T>
  T sum(vector<T> container) {
    T sumValue = 0.0;
    for (auto itemValue : container) {
	sumValue+= itemValue;
    }
    return sumValue;
  }

  template <class T>
  bool any(vector<T> container) {
    for (auto item : container) {
	if (item) {
	    return true;
	}
    }
    return false;
  }

  template <class T>
  bool all(vector<T> container) {
    for (auto item : container) {
	if (!item) {
	    return false;
	}
    }
    return true;
  }

}


#endif	/* KIP_H */

