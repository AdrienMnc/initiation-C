#pragma once
#include <iostream>
#include <vector>
// #include "../classes/velo.h"
#include <string>
#include <fstream>

// 2. Ajouter un vélo à la liste des vélos
void ajouter_velo()
{

    std::cout << "Pour ajouter un velo, donner ses paramètres séparé par une virgule: id, nom, marque, modele, type, taille, couleur, prix" << std::endl;
    std::string saisie_utilisateur;
    std::cin >> saisie_utilisateur;
    // Verifier si le nombre de parametre est bien egal a 8 ni plus ni moins
    if (std::count(saisie_utilisateur.begin(), saisie_utilisateur.end(), ',') != 7)
    {
        std::cout << "Erreur: le nombre de parametre est incorrect" << std::endl;
        return;
    }
    else
    {
        // Ouvrir le fichier.csv et ajouter un velo
        std::ofstream fichier("velo.csv", std::ios::app);
        fichier << saisie_utilisateur << std::endl;
        fichier.close();
    }
}
