#include <iostream>

int main(){
  int i = 1;
  while(i <= 10) {
    std::cout << i << std::endl;
    i++;
  }

  int nombre;
  do {
    std::cout << "Entrez un nombre entre 1 et 10: ";
    std::cin >> nombre;
  } while(nombre < 1 || nombre > 10);

}