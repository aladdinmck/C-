/** 
 * This class gives you the computer's move in Rock, Paper, Scissors.
 */
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class ComputerOpponent {
  string getMove() {
    
    srand(time(0));
    bool TESTING_MODE = false; 
    int cycler = 0;
    string m;
    
    if (TESTING_MODE) {
      switch (cycler++ % 3) {
      case 0: 
	m = "rock";  
	return m;
      case 1: 
	m = "paper";
	return m;
      default: // (case 2) 
	m = "scissors";
	return m;
      }
    } else {
      switch (rand() % 3) {
      case 0: 
	m = "rock";
	return m;
      case 1: 
	m = "paper";
	return m;
      default: // (case 2)
	m = "scissors";
	return m;
      }
    }
  }
};

int main() {  
  string s = getMove();
  cout << s << endl;
}
