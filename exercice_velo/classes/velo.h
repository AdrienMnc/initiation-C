#pragma once
#include <iostream>
#include <string>
#include <fstream>

// 1. Lire les informations sur les vélos à partir d'un fichier CSV contenant le nom, la marque, le modèle, le type
//  (route, VTT, etc.), la taille, la couleur et le prix de chaque vélo.
class Velo
{
    // générer l'id en aléatoire
    std::string id = std::to_string(rand() % 1000000);
    std::string nom;
    std::string marque;
    std::string modele;
    std::string type;
    int taille;
    std::string couleur;
    float prix;

    // constructeur
public:
    Velo(std::string id, std::string nom, std::string marque, std::string modele, std::string type, int taille, std::string couleur, float prix)
    {
        this->id = id;
        this->nom = nom;
        this->marque = marque;
        this->modele = modele;
        this->type = type;
        this->taille = taille;
        this->couleur = couleur;
        this->prix = prix;
    }
    // destructeur
    ~Velo(){};

    std::string afficher_velo()
    {
        return this->nom + "," + this->marque + "," + this->modele + "," + this->type + "," + std::to_string(this->taille) + "," + this->couleur + "," + std::to_string(this->prix);
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

    // Ecrire toutes les informations sur le vélo dans le fichier CSV velo.csv
    void ecrire_ligne_csv()
    {
        std::ofstream fichier("velo.csv");
        fichier << this->id << "," << this->nom << "," << this->marque << "," << this->modele << "," << this->type << "," << this->taille << "," << this->couleur << "," << this->prix << std::endl;
    }

    // Ecrire une ligne dans le fichier CSV de location (id_location, id_velo, id_client)
    void ecrire_ligne_csv_location(std::string id_location, std::string id_client)
    {
        std::ofstream fichier("location.csv");
        fichier << id_location << "," << this->id << "," << id_client << std::endl;
    }
};