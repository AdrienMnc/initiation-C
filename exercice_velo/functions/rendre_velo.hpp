#pragma once
#include <iostream>
#include "../classes/velo.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_velo.h"

// Rendre un vélo

void rendre_velo()
{
    std::vector<Velo> liste_velo = generer("velo.csv");
    std::vector<Velo> velos_loues = generer("location.csv");

    std::cout << "Pour clôturer la location d'un velo, donner son nom" << std::endl;
    std::string nom_du_velo_a_rendre;
    std::cin >> nom_du_velo_a_rendre;

    std::string id_du_velo_a_rendre;

    // Verifier si le velo existe dans la liste de tous les velos avec binary_search et récupérer son id
    if (std::binary_search(liste_velo.begin(), liste_velo.end(), nom_du_velo_a_rendre))
    {
        for (int i = 0; i < liste_velo.size(); i++)
        {
            if (liste_velo[i].get_nom() == nom_du_velo_a_rendre)
            {
                id_du_velo_a_rendre = liste_velo[i].get_id();

                // Verifier si le velo est loue
                if (std::binary_search(velos_loues.begin(), velos_loues.end(), nom_du_velo_a_rendre))
                {
                    // Supprimer le velo du fichier location.csv
                    velos_loues.erase(velos_loues.begin() + i);
                    std::ofstream fichier("location.csv");
                    fichier << "id,nom,marque,modele,type,taille,couleur,prix" << std::endl;
                    // Remplir le fichier avec le nouveau contenu du vecteur, grâce à la méthode ecrire_ligne_csv
                    for (int i = 0; i < velos_loues.size(); i++)
                    {
                        velos_loues[i].ecrire_ligne_csv();
                    }
                }
                else
                {
                    std::cout << "Erreur: le velo n'est pas loué" << std::endl;
                    return;
                }
            }
        }
    }
    else
    {
        std::cout << "Erreur: le velo n'existe pas" << std::endl;
        return;
    }
}