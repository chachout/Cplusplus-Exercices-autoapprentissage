#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>
#include "Arme.h"

class Personnage
{
    public:

    Personnage(); //Constructeur
    Personnage(std::string nomArme, int degatsArme);
    Personnage(Personnage const& personnageACopier);
    //Le prototype du constructeur de copie
    Personnage(int vie, int mana, std::string nomArme, int degatsArme);
    Personnage& operator=(Personnage const& personnageACopier);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme; //Notre Personnage possède une Arme
};


#endif // PERSONNAGE_H_INCLUDED

