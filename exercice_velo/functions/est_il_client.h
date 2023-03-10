#pragma once
#include <iostream>
#include "../classes/client.h"
#include <string>
#include <fstream>
#include <vector>
#include "generer_liste_clients.h"

// Fonction qui prend en paramètre un nom de client et vérifie si le client existe dans la liste des clients
bool est_il_client(std::string nom_client)
{
    std::vector<Client> liste_client = generer("client.csv");
    if (std::binary_search(liste_client.begin(), liste_client.end(), nom_client))
    {
        return true;
    }
    else
    {
        // Proposer à l'utilisateur de créer le client
        std::cout << "Le client n'existe pas, voulez-vous le créer ? (oui/non)" << std::endl;
        std::string reponse;
        std::cin >> reponse;
        if (reponse == "oui")
        {
            // Créer le client
            std::ofstream fichier("client.csv", std::ios::app);
            fichier << nom_client << std::endl;
            fichier.close();
            return true;
        }
        else
        {
            return false;
        }
    }
}