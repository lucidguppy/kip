#include <string>
#include <vector>
#include <iostream>
#include <locale>
#include "kipstring.h"

namespace kip {
  namespace string {

    //regular functions
    std::string capitalize (std::string word) {
      if (word.length() > 0) {
	  word[0] = std::toupper(word[0]);
      }
      return word;
    }

    bool in(std::string query, std::string target) {
      const size_t position = target.find(query);
      if (position != std::string::npos) {
	  return true;
      } else {
	  return false;
      }
    }
    // split a line up using the splitchar
    std::vector<std::string> split(std::string line, char splitChar) {
      std::vector<std::string> result {};
      int charsToCopy = 0;
      int lastSplitId = -1;
      int charId = 0;
      // looping through the string incrementing charId
      for (auto currentChar : line) {
	  if(currentChar == splitChar) {
	      //if the split char is found - push a string from lastSplitId
	      // to charId and push it onto the return vector
	      std::string colString= line.substr(lastSplitId + 1,charsToCopy);
	      result.push_back(colString);
	      // set lastSplitId to the charId
	      lastSplitId = charId;
	      charsToCopy = 0;
	  } else {
	      charsToCopy += 1;
	  }
	  ++charId;
      }
      // if there are any charsToCopy left - push that string onto the vector
      if (charsToCopy > 0) {
	  std::string colString = line.substr(lastSplitId+1,charsToCopy);
	  result.push_back(colString);
      } else if (line[charId-1]==splitChar) {
	  // if the last character was a split character - put another
	  // empty string into the list
	  std::string colString = "";
	  result.push_back(colString);
      }
      return result;
    }

    std::string join(std::string joiner, std::vector<std::string> items)
    {
      std::string retstring {""};
      for (auto atom = items.begin(); atom!=items.end(); ++atom)
	{
	  retstring.append(*atom);
	  if(atom < (items.end() - 1))
	    {
	      retstring.append(joiner);
	    }
	}
      return retstring;
    }
  }
}
