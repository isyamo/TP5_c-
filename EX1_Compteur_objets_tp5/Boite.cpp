#include "Boite.hpp"

int Boite::nbBoites = 0;

Boite::Boite(double l, double larg ,double h ): longueur(l),largeur(larg),hauteur(h){

	nbBoites++;
}


Boite::~Boite(){

	nbBoites--;
}

int Boite::getNombreBoites(){

	return nbBoites;
}
