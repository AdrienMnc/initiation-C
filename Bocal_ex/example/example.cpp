#include <iostream>

int main(){
  int x = 5; 

  if (x > 0 ){
    std::cout<<"x est positif "<<std::endl;
  }else if (x < 0){ 
    std::cout<<"x est negatif "<<std::endl;
  }
  else{
    std::cout<<"x est nul"<<std::endl;
  }
  
  return 0;
}


