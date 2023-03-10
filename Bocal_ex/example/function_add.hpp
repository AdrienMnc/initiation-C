#include <iostream> 

void affiche_valeur(int x){
  std::cout<<x<<std::endl;
}

bool chiffre_positif(int x){
  if (x > 0 ){
    return true ;
  }else { 
    return false
  }
}

int somme( int p1, int p2){
return (p1 + p2);

}

float somme( float p1, float p2){
return (p1 + p2);

}

float somme( float p1, float p2, float p3){
return (p1 + p2 + p3);

}

int somme( float p1, int p2){
return (int(p1) + p2);
}
