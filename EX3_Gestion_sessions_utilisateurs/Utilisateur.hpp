
#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <iostream>
#include <string>


class Utilisateur{
private :
	std::string nom;
	std::string role;

	static int nbUtilisateursConnectes;

public:

	Utilisateur(std::string n , std::string role);
	~Utilisateur();

	static int getNbUtilisteursConnectes();

	void afficherInfo()const;

};

#endif
