#include "joueur.hpp"
#include "unite.hpp"
#include "roboy.hpp"
#include <iostream>

int main(int argc, char* argv[]){
    Joueur j1;    
    Joueur j2(110, 100);
    
    std::cout << "Initialisation : " << std::endl;
    std::cout << "Vie:" << j1.getVie() << " Pieces:" << j1.getCoins() << std::endl;
    std::cout << "Vie:" << j2.getVie() << " Pieces:" << j2.getCoins() << std::endl;
    std::cout << std::endl;

    Roboy r1 = Roboy(1);
    r1.attaquerBase(j1);
    j2.spendCoins(r1.getCost());
    j1.addCoins(10);


    std::cout << "j2 achete un soldat et attaque j1 qui a gagné 10 coins : " << std::endl;
    std::cout << "Vie:" << j1.getVie() << " Pieces:" << j1.getCoins() << std::endl;
    std::cout << "Vie:" << j2.getVie() << " Pieces:" << j2.getCoins() << std::endl;
    std::cout << "Arme:" << r1.getDegats() << std::endl;

    std::cout << std::endl;

    
    return 0;
}