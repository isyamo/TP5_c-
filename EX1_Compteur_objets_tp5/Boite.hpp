
#ifndef BOITE_HPP
#define BOITE_HPP


#include <iostream>
#include <string>


class Boite{

private :
	double longueur;
	double largeur;
	double hauteur;

	static int nbBoites; // attribut static


public :

	Boite(double l , double larg , double h);

	~Boite();

	static int getNombreBoites();



};

#endif
