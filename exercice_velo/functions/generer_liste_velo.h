#pragma once
#include <iostream>
#include "../classes/velo.h"
#include <string>
#include <fstream>
#include <vector>

// Ouvrir velo.csv et le parser
std::vector<Velo> generer(std::string nom_fichier)
{
    std::vector<Velo> liste_velo;
    std::ifstream fichier(nom_fichier, std::ios::in | std::ios::binary);
    std::string ligne;
    std::string id;
    std::string nom;
    std::string marque;
    std::string modele;
    std::string type;
    std::string taille;
    std::string couleur;
    std::string prix;
    int i = 0;
    while (std::getline(fichier, ligne))
    {
        if (i != 0)
        {
            id = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            nom = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            marque = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            modele = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            type = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            taille = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            couleur = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            prix = ligne.substr(0, ligne.find(","));
            liste_velo.push_back(Velo(id, nom, marque, modele, type, std::stoi(taille), couleur, std::stof(prix)));
        }
        i++;
    }
    return liste_velo;
}
