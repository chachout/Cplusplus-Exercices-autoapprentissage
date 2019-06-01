#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>

class Personnage
{
    public:

    Personnage(); //Constructeur
    Personnage(std::string nomArme, int degatsArme);
    Personnage(int vie, int mana, std::string nomArme, int degatsArme);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;

    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettrestd:: devant string
    int m_degatsArme;

};


#endif // PERSONNAGE_H_INCLUDED

