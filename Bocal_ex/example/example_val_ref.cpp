#include <iostream>
#include <example/function_val_ref.hpp>

int main (){
  int number = 3;
  //number = 9 dans la fonction mais toujours 3 dans le main
  fois2_val(number);
  
  //number = 9 dans la fonction et 9 dans le main
  fois2_ref(number);
}