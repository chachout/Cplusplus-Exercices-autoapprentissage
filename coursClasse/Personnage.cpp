#include <string>
#include "Personnage.h"

using namespace std;

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enl�ve le nombre de d�g�ts re�us � la vie du personnage

    if (m_vie < 0) //Pour �viter d'avoir une vie n�gative
    {
        m_vie = 0; //On met la vie � 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    //On inflige � la cible les d�g�ts que cause notre arme
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de d�passer 100 de vie
    {
        m_vie = 100;
    }
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}
bool Personnage::estVivant() const
{
    return m_vie > 0; //Renvoie true si m_vie > 0 et false sinon.
}
/*Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "�p�e rouill�e";
    m_degatsArme = 10;
}*/
Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("�p�e rouill�e"), m_degatsArme(10)
{
    //Rien � mettre dans le corps du constructeur, tout a d�j� �t� fait !
}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{

}
Personnage::Personnage(int vie, int mana, string nomArme, int degatsArme) : m_vie(vie), m_mana(mana),m_nomArme(nomArme), m_degatsArme(degatsArme)
{

}
Personnage::~Personnage()
{
    /* Rien � mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer � quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres v�rifications si n�cessaire avant la destruction de l'objet. */
}
