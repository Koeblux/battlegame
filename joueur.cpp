#include "joueur.hpp"

Joueur::Joueur(){
    this->coins = 0;
    this->base = 100;
}

Joueur::Joueur(int coins, int base){
    this->coins = coins;
    this->base = base;
}

void Joueur::loseVie(int damage){
    this->base -= damage;
}

int Joueur::getVie() const{
    return this->base;
}

void Joueur::addCoins(int nb_coins){
    this->coins += nb_coins;
}

void Joueur::spendCoins(int nb_coins){
    this->coins -= nb_coins;
}

int Joueur::getCoins() const{
    return this->coins;
}

