#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cerrno>
#include <fstream>
#include <stdexcept>

using namespace std;
namespace kip {
    
    vector<int> range(int stop) {
	vector<int> v;
	for(int ii=0; ii<stop; ++ii) {
	    v.push_back(ii);
	}
	return v;
    }
    
    string read(string filename) {
	ifstream in(filename, ios::in | ios::binary);
	if (in) {
	    string contents;
	    in.seekg(0, ios::end);
	    contents.resize(in.tellg());
	    in.seekg(0, ios::beg);
	    in.read(&contents[0], contents.size());
	    in.close();
	    return(contents);
	}
	throw(errno);
    }
    
    
    vector<string> readlines(string filename) {
	ifstream in(filename);
	if (in) {
	    vector<string> contents;
	    for (string line; getline(in, line);) {
		contents.push_back(line);
	    }
	    in.close();
	    return(contents);
	}
	throw(errno);
    }
}
