#include <iostream>

int main() {
   try {
      int age = 15;
      if (age < 18) {
         throw "Vous devez avoir 18 ans ou plus pour accéder à ce contenu.";
      }
      std::cout << "Bienvenue sur notre site réservé aux adultes." << std::endl;
   }
   catch (const char* message) {
      std::cerr << "Erreur : " << message << std::endl;
   }
   return 0;
}
