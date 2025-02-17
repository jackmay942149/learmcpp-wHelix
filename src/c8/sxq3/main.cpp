#include <iostream>
#include "Random.h"

int getRandom();
int guess(int);
bool replay();

int main(){
  std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

  int number {getRandom()};
  int nGuesses {0};
  
  while (true){
    int g = guess(++nGuesses);

    if (g < number){
      std::cout << "Your guess is too low.\n";
    }
    else if (g > number){
      std::cout << "Your guess is too high\n";
    }
    else {
      std::cout << "Correct! You win!\n";
      std::cout << "Would you like to play again (y/n)? ";

      if (replay()){
        nGuesses = 0;
        number = {getRandom()};
      }
      else {
        break;
      }
    }

    if (nGuesses >= 7){
      std::cout << "Sorry you lose. The correct number was " << number << ".\n";
      std::cout << "Would you like to play again (y/n)? ";

      if (replay()){
        nGuesses = 0;
        number = {getRandom()};
      }
      else {
        break;
      }
    }
  }

  std::cout << "Thanks for playing.";
}

bool replay(){
  while(true){
    char input{};
    std::cin >> input;

    if (input == 'y'){
      return true;
    }
    else if (input == 'n'){
      return false;
    }
    else {
      std::cout << "Would you like to play again (y/n)? ";
      continue;
    }
  }
}

int getRandom(){
  return Random::get(1, 100);
}

int guess(int noOfGuesses){
  int x{};
  std::cout << "Guess #" << noOfGuesses << ": ";
  std::cin >> x;
  return x;
}




