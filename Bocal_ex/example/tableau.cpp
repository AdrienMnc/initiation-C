#include <iostream>

int main(int argc, char **argv){

 int monTableau[10] = {1, 2, 3, 4, 5};
 int array_size = sizeof(monTableau) / sizeof(int);

  monTableau[1] = 99;

  for (int i = array_size - 2; i >= 1; i--) {
        monTableau[i + 1] = monTableau[i];
  }
  monTableau[1] = 2;

  

  for(int i = 0; i < array_size; i++){
    std::cout << monTableau[i] << std::endl;
  }
}