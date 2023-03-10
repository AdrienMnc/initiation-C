#include <iostream>

class DivisionError : public std::exception{ 
  public: 
    const char * what() const throw() { 
      return "Division par zero!\n"; 
    } 
}; 

double division(int a, int b) {
  if( b == 0 ) {
    throw DivisionError();
  }
  return (a/b);
}

int main(){
  int a=5,b=0,res;
  try{
    res=division(a,b);
    std::cout<<"résultat de a/b = "<<std::endl;
  }catch(DivisionError& e){
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
