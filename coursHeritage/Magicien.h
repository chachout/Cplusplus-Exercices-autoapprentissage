#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en hériter !

class Magicien : public Personnage
//Signifie : créer une classe Magicien qui hérite de la classe Personnage
{
     public:
        Magicien();
        Magicien(std::string nom);
        void bouleDeFeu() const;
        void bouleDeGlace() const;
        //Méthode qui ne concerne que les magiciens
     private:
        int m_mana;
};

#endif // MAGICIEN_H_INCLUDED
