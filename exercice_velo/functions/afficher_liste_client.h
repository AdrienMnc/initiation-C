#pragma once
#include <iostream>
#include "../classes/client.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_clients.h"

// Afficher la liste des clients
void afficher_clients(std::string nom_fichier)
{
    std::vector<Client> liste_client = generer(nom_fichier);
    for (int i = 0; i < liste_client.size(); i++)
    {
        std::cout << liste_client[i].afficher_client() << std::endl;
    }
}