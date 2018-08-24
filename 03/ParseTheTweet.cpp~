#include <iostream>

using namespace std;

int main() {
  string userInput;
  string delimiter = ";";
  getline(cin, userInput);

  cout << "You entered: " << userInput << endl;
  
  size_t pos = 0;
  string token;
  while ((pos = userInput.find(delimiter)) != string::npos) {
    token = userInput.substr(0, pos);
    cout << token << endl;
    userInput.erase(0, pos + delimiter.length());
  }
  cout << userInput << endl;
  return 0;
}
