#include <iostream> 

int main(){
  int x = 10;
  int &ref = x;
  ref = 20; // modifie la valeur de x également
  std::cout << x << std::endl;

}