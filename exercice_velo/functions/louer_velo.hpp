#pragma once
#include <iostream>
#include "../classes/velo.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_velo.h"

// Louer un vélo
void louer_velo()
{
    std::vector<Velo> liste_velo = generer("velo.csv");
    std::vector<Velo> velos_loues = generer("location.csv");

    std::cout << "Pour louer un velo, donner son nom" << std::endl;
    std::string nom_du_velo_a_louer;
    std::cin >> nom_du_velo_a_louer;

    // Verifier si le velo existe dans la liste des velos avec binary_search
    if (std::binary_search(liste_velo.begin(), liste_velo.end(), nom_du_velo_a_louer))
    {
        // Verifier si le velo n'est pas deja loue
        if (std::binary_search(velos_loues.begin(), velos_loues.end(), nom_du_velo_a_louer))
        {
            std::cout << "Erreur: le velo est deja loué" << std::endl;
            return;
        }
        else
        {
            // Ajouter le velo au fichier location.csv
            std::ofstream fichier("location.csv", std::ios::app);
            fichier << nom_du_velo_a_louer << std::endl;
            fichier.close();
        }
    }
    else
    {
        std::cout << "Erreur: le velo n'existe pas" << std::endl;
        return;
    }
}