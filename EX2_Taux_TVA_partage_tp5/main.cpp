#include <iostream>

#include "Produit.hpp"

int main() {

    // Création de produits
    Produit p1("Stylo", 2.0f);
    Produit p2("Cahier", 5.0f);
    Produit p3("Sac à dos", 30.0f);

    std::cout << "<<< PRIX AVEC TVA INITIALE (20%) >>>" << std::endl;
    std::cout << "Stylo TTC : " << p1.getPrixTTC() << " DH " << std::endl;
    std::cout << "Cahier TTC : " << p2.getPrixTTC() << " DH " << std::endl;
    std::cout << "Sac a dos TTC : " << p3.getPrixTTC() << " DH " << std::endl;

    // Modification du taux de TVA pour tous les produits à 10%
    Produit::modifierTVA(10.0f);

    std::cout << "\n <<< PRIX APRES MODIFICATION DE LA TVA (10%) >>> " << std::endl;
    std::cout << "Stylo TTC : " << p1.getPrixTTC() << " DH " << std::endl;
    std::cout << "Cahier TTC : " << p2.getPrixTTC() << " DH " << std::endl;
    std::cout << "Sac a dos TTC : " << p3.getPrixTTC() << " DH " << std::endl;

    return 0;
}
