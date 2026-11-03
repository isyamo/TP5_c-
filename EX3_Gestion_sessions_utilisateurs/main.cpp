#include<iostream>
#include"Utilisateur.hpp"

int main(){

	std::cout <<"<<< Etat initial >>>" <<std::endl;
	std::cout << " Utilisateurs connectes : " << Utilisateur::getNbUtilisteursConnectes() <<std::endl;

	std::cout << "\n<<< CONNEXION DES UTILISATEURS >>>" << std::endl;

	// Création du premier utilisateur

	    Utilisateur u1("Alice", "admin");
	    u1.afficherInfo();
	    std::cout << "Connectes apres Alice : " <<Utilisateur::getNbUtilisteursConnectes() <<std::endl;
	// Création d'un deuxième utilisateur
	    Utilisateur u2("Bob", "visiteur");
	    u2.afficherInfo();
	    std::cout << "Connectes apres Bob : " << Utilisateur::getNbUtilisteursConnectes() <<std::endl;

	    // Utilisation d'un bloc (portée) pour simuler une session temporaire
	    {
	        std::cout << "\n <<< Entree dans un sous-bloc (invite)  >>>" << std::endl;

	        Utilisateur u3("Charlie", "visiteur");

	        u3.afficherInfo();

	        std::cout << "Connectes dans le bloc : " << Utilisateur::getNbUtilisteursConnectes()<< std::endl;

	        std::cout << "<<< Sortie du sous-bloc (se deconnecte) >>>" << std::endl;

	    }

	    // Vérification du nombre d'utilisateurs après la fin du bloc
	    std::cout << "\n<<< APRES LA DECONNEXION DE CHARLIE >>>" << std::endl;
	    std::cout << "Utilisateurs connectes : " << Utilisateur::getNbUtilisteursConnectes()<< std::endl;


	    return 0;

}
