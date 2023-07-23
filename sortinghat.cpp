#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "Sorting Hat Quiz\n";

  std::cout << "Q1 When I'm dead, I want people to remember me as:\n";
  std::cout << "1. The good\n";
  std::cout << "2. The great\n";
  std::cout << "3. The wise\n";
  std::cout << "4. The bold\n";
  std::cin >> answer1;

  if (answer1 == 1) {
    hufflepuff += 1;
  }
  else if (answer1 == 2) {
    slytherin += 1;
  }
  else if (answer1 == 3) {
    ravenclaw += 1;
  }
  else if (answer1 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q2 Dawn or dusk\n";
  std::cout << "1. Dawn\n";
  std::cout << "2. Dusk\n";
  std::cin >> answer2;

  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;

  }
  else if (answer2 == 2) {
    slytherin += 1;
    hufflepuff += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q3 Which kind of instrument most pleases your ear?\n";
  std::cout << "1. The violin\n";
  std::cout << "2. The trumpet\n";
  std::cout << "3. The piano\n";
  std::cout << "4. The drum\n";
  std::cin >> answer3;

  if (answer3 == 1) {
    slytherin +=1;
  }
  else if (answer3 == 2) {
    hufflepuff += 1;
  }
  else if (answer3 == 3) {
    ravenclaw += 1;
  }
  else if (answer3 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q4 Which road tempts you most\n";
  std::cout << "1. Wide, sunny, grass\n";
  std::cout << "2. Narrow, dark, lantern-lit\n";
  std::cout << "3. Twisting, through the woods\n";
  std::cout << "4. Ancient\n";
  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff += 1;
  }
  else if (answer4 == 2) {
    slytherin += 1;
  }
  else if (answer4 == 3) {
    gryffindor += 1;
  }
  else if (answer4 == 4) {
    ravenclaw += 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::string house;
  int max = 0;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";



}