#pragma once
#include <iostream>
#include "../classes/client.h"
#include <string>
#include <fstream>
#include <vector>

// Ouvrir client.csv et le parser
std::vector<Client> generer(std::string nom_fichier)
{
    std::vector<Client> liste_client;
    std::ifstream fichier(nom_fichier, std::ios::in | std::ios::binary);
    std::string ligne;
    std::string id;
    std::string nom;
    std::string adresse;
    std::string telephone;
    std::string email;
    int i = 0;
    while (std::getline(fichier, ligne))
    {
        if (i != 0)
        {
            id = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            nom = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            ligne = ligne.substr(ligne.find(",") + 1);
            adresse = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            ligne = ligne.substr(ligne.find(",") + 1);
            ligne = ligne.substr(ligne.find(",") + 1);
            telephone = ligne.substr(0, ligne.find(","));
            ligne = ligne.substr(ligne.find(",") + 1);
            email = ligne.substr(0, ligne.find(","));
            liste_client.push_back(Client(id, nom, adresse, telephone, email));
        }
        i++;
    }
    return liste_client;
}
