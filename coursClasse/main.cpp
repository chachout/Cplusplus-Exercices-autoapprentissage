#include <string>
#include <iostream>
#include "Personnage.h"
using namespace std;

/*class Personnage
{
     // Tout ce qui suit est public (accessible depuis l'ext�rieur)
    public:
    //M�thodes
    void recevoirDegats(int nbDegats)
    {

    }
    void attaquer(Personnage &cible)
    {

    }
    void boirePotionDeVie(int quantitePotion)
    {

    }
    void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
    {

    }
    bool estVivant()
    {

    }
    // Tout ce qui suit est priv� (inaccessible depuis l'ext�rieur)
    private:

    //Attributs
    int m_vie; //0 = mort, 100 = toute la vie
    int m_mana;
    string m_nomArme;
    int m_degatsArme;
};*/
int main()
{
    Personnage david, goliath("�p�e aiguis�e", 20);
    //Cr�ation de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david r�cup�re 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath r�attaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);


    return 0;
}

