#include "Utilisateur.hpp"

#include<iostream>

int Utilisateur::nbUtilisateursConnectes = 0 ;

Utilisateur::Utilisateur(std::string n ,std::string role):nom(n), role(role){

	nbUtilisateursConnectes++;

}

Utilisateur::~Utilisateur(){

	nbUtilisateursConnectes--;
}

int Utilisateur::getNbUtilisteursConnectes(){
	return nbUtilisateursConnectes;
}

void Utilisateur::afficherInfo()const{

	std::cout<<" Utilisateur : "<<nom<<", role : "<< role <<std::endl;
}
