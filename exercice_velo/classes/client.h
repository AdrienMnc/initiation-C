#pragma once
#include <iostream>
#include <string>
#include <fstream>

// Créer une classe client (Id,Nom,Adresse,email,Telephone)
class Client
{
    std::string id = to_string(boost::uuids::random_generator()());
    std::string nom;
    std::string adresse;
    std::string email;
    std::string telephone;

    // constructeur
public:
    Client(std::string id, std::string nom, std::string adresse, std::string email, std::string telephone)
    {
        this->id = id;
        this->nom = nom;
        this->adresse = adresse;
        this->email = email;
        this->telephone = telephone;
    }
    // destructeur
    ~Client(){};

    std::string afficher_client()
    {
        return this->nom + "," + this->adresse + "," + this->email + "," + this->telephone;
    }

    // getters
    std::string get_id()
    {
        return this->id;
    }
    std::string get_nom()
    {
        return this->nom;
    }

    // Ecrire toutes les informations sur le client dans le fichier CSV client.csv
    void ecrire_ligne_csv()
    {
        std::ofstream fichier("client.csv");
        fichier << this->id << "," << this->nom << "," << this->adresse << "," << this->email << "," << this->telephone << std::endl;
    }
};