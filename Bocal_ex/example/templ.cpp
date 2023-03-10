#include <iostream>
#include <example/templ.hpp>

int main(){
  double pi(3.14);
  double e(2.71);
  std::cout<< maximum<double>(pi,e) << std::endl; //Utilise la "version double"de la fonction

  int cave(-1);
  int dernierEtage(12);
  std::cout << maximum<int>(cave,dernierEtage) << std::endl; //Utilise la "version int" de la fonction

  unsigned int a(43);
  unsigned int b(87);

  std::cout << maximum(a,b) << std::endl; //Utilise la "version unsigned int" de la fonction.

  std::cout << "Le plus grand est: " << maximum<std::string>("elephant","souris") << std::endl;

  return 0;
}