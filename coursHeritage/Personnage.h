#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <iostream>
#include <string>

class Personnage
{
    public:
        Personnage(std::string nom);
        void recevoirDegats(int degats);
        void coupDePoing(Personnage &cible) const;

    protected:
        int m_vie;
        std::string m_nom;
};


#endif // PERSONNAGE_H_INCLUDED
