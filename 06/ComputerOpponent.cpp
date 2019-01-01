/** 
 * This class gives you the computer's move in Rock, Paper, Scissors.
 */


class ComputerOpponent {
public:
  bool TESTING_MODE = false; 
  int cycler = 0;
  
  string getMove() {
    if (TESTING_MODE) {
      switch (cycler++ % 3) {
      case 0: 
	return "rock";
      case 1: 
	return "paper";
      default: // (case 2) 
	return "scissors";
      }
    } else {
      switch ((int)(Math.random()*3)) {
      case 0: 
	return "rock";
      case 1: 
	return "paper";
      default: // (case 2)
	return "scissors";
      }
    }
  }

};
