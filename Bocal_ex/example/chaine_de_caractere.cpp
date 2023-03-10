#include <iostream>
#include <cstring>

int main(){
  char maChaine[] = "Bonjour";
  int longueur = strlen(maChaine);

 for(int i = 0; i < longueur; i++){
    std::cout << maChaine[i] << std::endl;
  }

  char maChaine2[10];
  strcpy(maChaine2, maChaine);
 
  char chaine3[20] = "Bonjour ";
  char chaine3_bis[] = "tout le monde!";
  strcat(chaine3, chaine3_bis);

  char maChaine4[] = "bonjour";
  int resultat = strcmp(maChaine, maChaine4);

  char maChaine5[4];
  strncpy(maChaine5, maChaine, 3);


}