#pragma once
#include <iostream>
#include "../classes/velo.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_velo.h"

// 3. Supprimer un vélo de la liste des vélos
void supprimer_velo()
{
    std::vector<Velo> liste_velo = generer("velo.csv");

    std::cout << "Pour supprimer un velo, donner son nom" << std::endl;
    std::string nom_du_velo_a_supprimer;
    std::cin >> nom_du_velo_a_supprimer;

    // Verifier si le velo existe
    for (int i = 0; i < liste_velo.size(); i++)
    {
        if (liste_velo[i].get_nom() == nom_du_velo_a_supprimer)
        {
            // Supprimer le velo du vecteur et remplacer le contenu du csv
            liste_velo.erase(liste_velo.begin() + i);
            std::ofstream fichier("velo.csv");
            fichier << "id,nom,marque,modele,type,taille,couleur,prix" << std::endl;
            // Remplir le fichier avec le nouveau contenu du vecteur, grâce à la méthode ecrire_ligne_csv
            for (int i = 0; i < liste_velo.size(); i++)
            {
                liste_velo[i].ecrire_ligne_csv();
            }
        }
    }
}
