#include "unite.hpp" // vie, attaque et prix
#include "joueur.hpp"
#include "roboy.hpp"
#include <string>
#include <iostream>
#include <random>

Roboy::Roboy(int camp) : Unite(30, 10, 100, camp){
    this->arme = assignArme();
    std::cout << this->degats << std::endl;
}

void Roboy::attaquer(Unite &cible){
    cible.loseVie(this->getDegats());
}

void Roboy::attaquerBase(Joueur &cible){
    cible.loseVie(this->getDegats());
}

int Roboy::assignArme(){
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> uni(1, 100); // 100 est la total chance
    int id = uni(rng);

    if (id<90) {
        return 0;
    } else if (id>=90 && id<95) {
        return 3;
    } else {
        return 5;
    }
}

int Roboy::getDegats() const{
    return Unite::getDegats() + this->arme;
}

int Roboy::getArme() const{
    return this->arme;
}