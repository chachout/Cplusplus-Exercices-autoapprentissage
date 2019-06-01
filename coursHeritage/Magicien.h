#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en h�riter !

class Magicien : public Personnage
//Signifie : cr�er une classe Magicien qui h�rite de la classe Personnage
{
     public:
        Magicien();
        Magicien(std::string nom);
        void bouleDeFeu() const;
        void bouleDeGlace() const;
        //M�thode qui ne concerne que les magiciens
     private:
        int m_mana;
};

#endif // MAGICIEN_H_INCLUDED
