#pragma once
#include <iostream>

class Animal {
  //declaration des methodes
  bool est_il_fuyard;
  std::string etat;

  public :
    std::string name;
    long poids;
    std::string cri;


    Animal(std::string name, long poids,bool fuyard){
      this->name = name;
      this->poids = poids;
      est_il_fuyard = fuyard;
      etat = "vivant";
    }

    ~Animal(){
      etat = "mort";
    }
    //class animal
    virtual void manger() {
        std::cout << name << " mange" << std::endl;
    }

    std::string get_etat(){
     return etat;
    }

    void set_etat(std::string etat){
      this->etat = etat;
    }

    //declaration des methodes
    void crier(){
      std::cout<<cri<<std::endl;
    }

    bool est_il_feroce(int force){
      if (force > 9000){
        return true;
      }
      return false;

    }
};

class chien : public Animal{

  std::string race; 
  int obeissance;
  public :
  chien(std::string name, std::string race, long poids,int obeissance ) : Animal(name,poids,false){
    this->race = race;
    this->obeissance = obeissance;
    Animal::cri =  "woauf woauf";
  }

  void aboyer(){
    crier();
  }

  bool est_il_feroce(int force){
    return false;  
  }

  void manger() override {
    std::cout << name << " mange de la croquette" << std::endl;
  }


  int get_obeissance(){
     return obeissance;
  }

  void set_obeissance(int obeissance){
      this->obeissance = obeissance;
  }

  bool Donne_la_pate(){
    if (obeissance > 5){
      return true;
    }
    return false;
  }

};


class chat : public Animal{

  std::string race; 
  int paresse;
  public :
  chat(std::string name, std::string race, long poids,int paresse ) : Animal(name,poids,true){
    this->race = race;
    this->paresse = paresse;
    Animal::cri =  "mioau mioau";
  }
//class chat
  void manger() override {
        std::cout << name << " mange de la paté" << std::endl;
  }

};

class baleine : public Animal{

  std::string race; 

  public :
  baleine(std::string name, std::string race, long poids ) : Animal(name,poids,true){
    this->race = race;
    Animal::cri =  "brrrr";
  }
  baleine operator+(baleine& autre_baleine) const {
    std::string baleine_nom = name + "-" + autre_baleine.name;
    std::string baleine_race = race + "-" + autre_baleine.race;
    int poids_baleine = poids + autre_baleine.poids;
    return baleine(baleine_nom,baleine_race,poids_baleine);
  }
};


void faire_manger(Animal* animal) {
    animal->manger();
}




