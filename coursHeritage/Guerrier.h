#ifndef GUERRIER_H_INCLUDED
#define GUERRIER_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en hériter !

class Guerrier : public Personnage
//Signifie : créer une classe Guerrier qui hérite de la classe Personnage
{
     public:
        void frapperCommeUnSourdAvecUnMarteau() const;
        //Méthode qui ne concerne que les guerriers
};

#endif // GUERRIER_H_INCLUDED
