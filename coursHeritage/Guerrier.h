#ifndef GUERRIER_H_INCLUDED
#define GUERRIER_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en h�riter !

class Guerrier : public Personnage
//Signifie : cr�er une classe Guerrier qui h�rite de la classe Personnage
{
     public:
        void frapperCommeUnSourdAvecUnMarteau() const;
        //M�thode qui ne concerne que les guerriers
};

#endif // GUERRIER_H_INCLUDED
