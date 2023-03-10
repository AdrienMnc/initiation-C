#include <iostream> 

void myFunction() {
  std::cout << "Hello world!" << std::endl;
}

void (*ptr)() = &myFunction; // pointeur vers une fonction


int main(){
  int *mon_pointeur;
  int ma_variable = 42;

  mon_pointeur = &ma_variable;

  std::cout << *mon_pointeur << std::endl; // Affiche 42
  std::cout<< mon_pointeur <<std::endl; // Affiche l adresse memoire de ma_variable (0x7ff7b6ac73c4)
  ptr(); // affiche hello world
}