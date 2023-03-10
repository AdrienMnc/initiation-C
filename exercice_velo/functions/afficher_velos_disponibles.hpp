#pragma once
#include <iostream>
#include "../classes/velo.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_velo.h"

// Fonction d'affichage de la liste des vélos qui ne sont pas en location grâce à leur id :
void afficher_velos_disponibles()
{
    std::vector<Velo> liste_velo = generer("velo.csv");
    std::vector<Velo> velos_loues = generer("location.csv");
    std::vector<Velo> velos_disponibles;

    // Parcourir la liste des velos et verifier si le vélo n'est pas loué
    for (int i = 0; i < liste_velo.size(); i++)
    {
        if (!std::binary_search(velos_loues.begin(), velos_loues.end(), liste_velo[i].get_id()))
        {
            velos_disponibles.push_back(liste_velo[i]);
        }
    }

    // Afficher la liste des vélos disponibles
    for (int i = 0; i < velos_disponibles.size(); i++)
    {
        std::cout << velos_disponibles[i].afficher_velo() << std::endl;
    }
}
