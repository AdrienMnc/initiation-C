#include <fstream>

int main() {
  std::fstream fichier("monFichier.txt", std::ios::in | std::ios::binary);

  if (fichier.is_open()) {
    // Le fichier a été ouvert avec succès
    // Traiter le contenu du fichier
    fichier.close();
  } else {
    // Le fichier n'a pas pu être ouvert
    // Afficher un message d'erreur
  }

  fichier.open("autrefichier.txt", std::ios::out | std::ios::binary);
  
  if (fichier){}

  return 0;
}
