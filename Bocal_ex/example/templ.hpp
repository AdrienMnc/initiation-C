#include <iostream>

template <typename T>
T maximum(const T& a, const T& b){
  if(a>b){
    return a;
  } else {
    return b;
  }   
}

template <>
std::string maximum<std::string>(const std::string& a, const std::string& b){
  if(a.size()>b.size()){
    return a;
  } else {
    return b;
  }
}


template <typename T,typename U>
class Rectangle{
public:
    Rectangle(T largeur, T longeur, U couleur){
      this->largeur = largeur;
      this->longeur = longeur;
      this->couleur = couleur;
    }
  T aire() const{
      return largeur*longeur;
   }

private:
   T largeur;
   T longeur;
   U couleur;
};

enum Couleur {
  Rouge = 0xFF0000,
  Vert = 0x00FF00,
  Bleu = 0x0000FF
};

enum Options {
  options1 = 1,
  options2 = 2,
  options3 = 4,
  options4 = 8
};


