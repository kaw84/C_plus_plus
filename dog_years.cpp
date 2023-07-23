#include <iostream>

int main() {
  int dog_age = 12;
  int early_years = 21;
  int later_years = 4;
  int human_years;
  
  human_years = early_years + later_years *(dog_age -2);

  std::cout << "My name is Czarus! I am "<< human_years << "years old in human years.\n";
  
}