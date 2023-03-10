#pragma once 
#include <iostream>

int main(){
  int jour = 2;
  switch (jour) {
    case 1:
        std::cout << "Lundi" << std::endl;
        break;
    case 2:
        std::cout << "Mardi" << std::endl;
        break;
    case 3:
        std::cout << "Mercredi" << std::endl;
        break;
    default:
        std::cout << "Jours inconnu" << std::endl;
        break;
  }
}


