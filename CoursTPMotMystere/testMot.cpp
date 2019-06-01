#include "testMot.h"
#include <string>
#include <iostream>

bool testMot(std::string motDepart,std::string motMelange)
{
    bool gagne;
    std::string motEssai;
    int nbEssaiMax(5);
    std::cout << "Il vous reste " << nbEssaiMax << " essai(s)" << std::endl;
    std::cout << std::endl;
    std::cout << "Quel est le mot mysteres ?" << std::endl;
    std::cin >> motEssai;

    for(int compteurEssai(1);compteurEssai<nbEssaiMax;compteurEssai++)
    {
        if (motEssai==motDepart)
        {
            break;
        }
        std::cout << "Ce n'est pas le bon mot, essaie encore" << std::endl;
        std::cout << std::endl;
        std::cout << motMelange << std::endl;
        std::cout << std::endl;
        std::cout << "Il vous reste " << 5-compteurEssai << " essai(s)" << std::endl;
        std::cout << std::endl;
        std::cout << "Quel est le mot mysteres ?" << std::endl;
        std::cin >> motEssai;
    }
    if (motEssai!=motDepart)
    {
        std::cout << std::endl;
        std::cout << "Vous avez perdu, le mot mystere etait " << motDepart << std::endl;
        gagne=false;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "Bravo tu as reussi" << std::endl;
        gagne=true;
    }
return gagne;
}
