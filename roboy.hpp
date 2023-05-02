#ifndef ROBOY_HPP
#define ROBOY_HPP

#include "unite.hpp"

class Roboy : public Unite
{
public:
    Roboy(int camp); // constructeur

    void attaquer(Unite &cible); // attaque une unité
    void attaquerBase(Joueur &cible) override; // attaque la base du joueur cible
    int assignArme(); // assigne une arme

    int getDegats() const; // retourne les degats
    int getArme() const; // retourne degat l'arme

    
    
private:
    int vie; // points de vie
    int degats; // degats par attaque
    int position; // entre 0 et 100
    int prix; // en coins
    int camp; // 1 pour joueur 1, 2 pour joueur 2
    int arme; // dégat de l'arme
};

#endif