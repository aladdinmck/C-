#include <iostream>
#include <boost/algorithm/string.hpp>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  string userInput;
  string delimiter = ";";
  getline(cin, userInput);

  size_t pos = 0;
  int nCat = 1;
  string token = userInput.substr(0, userInput.find(delimiter));
  while ((pos = userInput.find(delimiter)) != string::npos) {
    token = userInput.substr(0, pos);
    boost::trim(token);
    if (nCat == 1) {
      cout << "Type: \t\t";
      string upperCase = token.substr(5, token.length() - 1);
      string newUpper = boost::to_upper_copy(upperCase);   
      cout << newUpper << endl;
    } else if (nCat == 2) {
      cout << "Detail: \t";
      cout << token.substr(5, token.length() - 1) << endl;
    } else if (nCat == 3) {
      cout << "Location: \t";
      cout << token.substr(5, token.length() - 1) << endl;
    } else if (nCat == 4) {
      cout << "Latitude: \t";
      cout << token.substr(5, token.length() - 1) << endl;
    } else {
      cout << "Longitude: \t";
      cout << token.substr(5, token.length() - 1) << endl;
    }

    userInput.erase(0, pos + delimiter.length()); 
    nCat++;
  }
  
  return 0;
} 
