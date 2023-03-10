#include <iostream>
#include <fstream>

int main() {
  std::fstream fichier("monFichier.txt", std::ios::out | std::ios::binary);

  if (fichier.is_open()) {
    fichier << "Bienvenu au cours de c/c++ " <<std::endl;
    fichier << "La réponse est : " << 42 << std::endl;
    fichier.close();
  } else {
    // Le fichier n'a pas pu être ouvert
    // Afficher un message d'erreur
  }

  fichier.open("monFichier.txt", std::ios::app | std::ios::binary);
  if(fichier){
    fichier << "😉"<<std::endl;
  }

  fichier.close();

  std::string content{};

  fichier.open("monFichier.txt", std::ios::in | std::ios::binary);
    while ( fichier ) {
      // lettre par lettre 
    content += fichier.get();
  }
  std::cout<<content<<std::endl;
  fichier.close();

  content="";
  fichier.open("monFichier.txt", std::ios::in | std::ios::binary);
  if (fichier){
    while (true) {
      // Mot par Mot 
      if(fichier.eof()){break;}
			fichier >> content;
			std::cout << content <<std::endl;
		}
  }
  fichier.close();

  content="";

  fichier.open("monFichier.txt", std::ios::in | std::ios::binary);
  if (fichier){
    //ligne par ligne
    while (getline(fichier, content)) {             
      std::cout << content << std::endl; 
    }
  }
  fichier.close();

  return 0;
}
