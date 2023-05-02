#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur{
public:
    Joueur(); // constructeur
    Joueur(int coins, int base); // constructeur

    void loseVie(int damage); // perd des points de vie
    int getVie() const; // retourne les points de vie

    void addCoins(int nb_coins); // ajoute des coins (quand tués des unités)
    void spendCoins(int nb_coins); // enleve des coins (quand achète des unités)
    int getCoins() const; // retourne les coins
    
private:
    int coins; // nombre de pièces
    int base; // points de vie de la base

};


#endif