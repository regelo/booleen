#include "booleen.hpp"

Booleen::Booleen(int valeur) {

    if (valeur == 0) this->contenu = false;
    else this->contenu = true;
}

bool Booleen::getContenu() {
    return this->contenu;
}