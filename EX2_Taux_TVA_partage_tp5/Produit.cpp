#include "Produit.hpp"

float Produit::tauxTVA= 20.0f;
Produit::Produit(std::string n,float pHT):nom(n), prixHT(pHT){}

float Produit::getPrixTTC()const{

	return prixHT*(1.0f+(tauxTVA/100.0f));
}

void Produit::modifierTVA(float nouveauTaux){
	tauxTVA=nouveauTaux;

}
