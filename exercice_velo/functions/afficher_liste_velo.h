#pragma once
#include <iostream>
#include "../classes/velo.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_velo.h"

// 1. Lire les informations sur les vélos à partir d'un fichier CSV contenant le nom, la marque, le modèle, le type
//  (route, VTT, etc.), la taille, la couleur et le prix de chaque vélo.

void afficher_liste_velo(std::string nom_fichier)
{
    std::vector<Velo> liste_velo = generer(nom_fichier);
    for (int i = 0; i < liste_velo.size(); i++)
    {
        std::cout << liste_velo[i].afficher_velo() << std::endl;
    }
}