#ifndef UNITE_HPP
#define UNITE_HPP

#include <string>
#include "joueur.hpp"

class Unite{
public:
    Unite(int vie, int degats, int prix, int camp); // constructeur

    void loseVie(int damage); // perd des points de vie
    void avancer(); // avance d'une case
    void attaquer(Unite &cible); // attaque une unité
    virtual void attaquerBase(Joueur &cible); // attaque la base du joueur cible

    int getVie() const; // retourne les points de vie
    int getCost() const; // retourne le prix
    virtual int getDegats() const; // retourne les degats

    
    
private:
    int vie; // points de vie
    int degats; // degats par attaque
    int position; // entre 0 et 100
    int prix; // en coins
    int camp; // 1 pour joueur 1, 2 pour joueur 2

};


#endif