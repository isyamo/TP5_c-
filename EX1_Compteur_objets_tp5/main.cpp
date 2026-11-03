#include "Boite.hpp"
#include <iostream>

int main (){

	std::cout <<"Nombre de boites au depart : "<<Boite::getNombreBoites()<<std::endl;

	Boite b1(10.0,5.0,2.0);
	std::cout << " Apres creation de b1 : "<< Boite::getNombreBoites()<<std::endl;
	Boite b2(12.0,6.0,3.0);
	std::cout << " Apres creation de b2 : "<< Boite::getNombreBoites()<<std::endl;
	Boite b3(14,7,3.5);
	std::cout << " Apres creation de b3 : "<< Boite::getNombreBoites()<<std::endl;


	return 0;

}
