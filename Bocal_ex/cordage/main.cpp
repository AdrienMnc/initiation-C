#include <iostream>

int main (){
  // diametre en mm
  int diametre_cordage_1_mm = 55; 
  // longeur en metre 
  short longeur_cordage_1_m = 7;

  // diametre en mm
  int diametre_cordage_2_mm = 90; 
  // longeur en metre 
  short longeur_cordage_2_m = 3;
  const float pi = 3.1415 ;

  // calculer la section du cordage (pi * rayon) 

  float section_1; 

  std::cout<<"la section est de "<<section_1<<" mm2"<<std::endl;

 // Calculer le volume du cordage. Il est exprimé en m3 et égal au produit de la section par la longueur.

 long volume_1;
  std::cout<<"le volume est de "<<volume_1<<" m3"<<std::endl;


//calculer la resitance a la rupture. Elle est exprimée en kg et toujours égale au produit de la section du cordage par le facteur fixe 10 kg/mm.



//Comparer les cordages
  bool cordage_ont_la_meme_resitance;
  bool cordage1_a_une_plus_grande_section;
  bool cordage1_a_un_volume_plus_petit;

  return 0;
}