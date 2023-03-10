#include <iostream>
#include <example/classe.hpp>

int main(){
  chat snake{"snake", "europeen", 3, 10};
  snake.manger();
  faire_manger(&snake);

  chien sanji{"sanji", "beagle", 12, 8};
  faire_manger(&sanji);  

  baleine* Laboon = new baleine("Laboon", "bleu", 130000);
  faire_manger(Laboon);  
}


/* chien sanji{"sanji", "beagle", 12, 8};
  sanji.aboyer();
  sanji.est_il_feroce(0);
  sanji.manger();

  Animal* Baleine = new Animal("Bobo", 130000, false);
  Baleine->crier();
  Baleine->manger();
  delete Baleine;
  return 0;*/