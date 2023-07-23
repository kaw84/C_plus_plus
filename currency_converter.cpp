#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;

  double dollars;

  std::cout << "Enter number of Colombian Pesos:\n";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;

  dollars = 0.059 * pesos + 0.21 * reais + 0.28 * soles;

  std::cout << "US Dollars = " << dollars << "\n";


  
  
}