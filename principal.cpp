#include <iostream>

#include "booleen.hpp"

void afficher(Booleen b) {
    if (b.getContenu()) std::cout << "Vrai !" << std::endl;
    else std::cout << "Faux ! " << std::endl;
}

int main() {
    Booleen valeur_booleenne = 5;

    afficher(valeur_booleenne);

    afficher(-25);
    afficher(0);
}