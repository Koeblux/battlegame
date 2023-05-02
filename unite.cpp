#include "unite.hpp"
#include "joueur.hpp"
#include <string>

Unite::Unite(int vie, int degats, int prix, int camp){
    this->vie = vie;
    this->degats = degats;
    this->prix = prix;
    this->camp = camp;

    if (camp == 1){ // position initiale dépend du camp
        this->position = 0;
    }
    else{
        this->position = 100;
    }
}

void Unite::loseVie(int damage){
    this->vie -= damage;
} //if vie = 0 donner argent <<!!!!!!!>>

void Unite::avancer(){
    if (this->camp == 1){ // avance d'une case, le sens dépend du camp
        this->position += 1;
    }
    else{
        this->position -= 1;
    }
}

void Unite::attaquer(Unite &cible){
    cible.loseVie(this->degats);
}

void Unite::attaquerBase(Joueur &cible){
    cible.loseVie(this->degats);
}

int Unite::getVie() const{
    return this->vie;
}

int Unite::getCost() const{
    return this->prix;
}

int Unite::getDegats() const{
    return this->degats;
}