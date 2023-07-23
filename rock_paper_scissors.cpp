#include <iostream>
#include <stdlib.h>

int main(){

  srand (time(NULL));
  int computer = rand() % 3 +1;
  int user = 0;

  std::cout << "Rock, paper, scissors!\n";
  std::cout << "1. Rock\n";
  std::cout << "2. Paper\n";
  std::cout << "3. Scissors\n";
  std::cin >> user;
  std::cout << computer << "\n";

  if ((computer == 1 && user == 1) || (computer == 2 && user == 2) || (computer == 3 && user == 3)) {
    std::cout << "Draw!\n";
  }
  else if ((computer == 1 && user == 2) || (computer == 2 && user == 3) || (computer == 3 && user == 1)) {
    std::cout << "You won!\n";
  }
  else if ((computer == 2 && user == 1) || (computer == 3 && user == 2) || (computer == 1 && user == 3)) {
    std::cout << "You lost!\n";
  }



}