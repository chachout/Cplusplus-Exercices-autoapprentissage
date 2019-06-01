#include <string>
#include "Personnage.h"
#include <iostream>
#include "Arme.h"

using namespace std;

void Personnage::afficherEtat() const
{
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme->afficher();
}



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
    cible.recevoirDegats(m_arme->getDegats());
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
   m_arme->changer(nomNouvelleArme,degatsNouvelleArme);
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

Personnage::Personnage() : m_arme(0), m_vie(100), m_mana(100)
{
    m_arme = new Arme();
}
Personnage::Personnage(string nomArme, int degatsArme) : m_arme(0), m_vie(100), m_mana(100)
{
    m_arme = new Arme(nomArme, degatsArme);
}

Personnage::~Personnage()
{
     delete m_arme;
}
Personnage::Personnage(Personnage const& personnageACopier)
   : m_vie(personnageACopier.m_vie), m_mana(personnageACopier.m_mana), m_arme(0)
{
    m_arme = new Arme(*(personnageACopier.m_arme));
}
Personnage& Personnage::operator=(Personnage const& personnageACopier)
{
    if(this != &personnageACopier)
    //On v�rifie que l'objet n'est pas le m�me que celui re�u en argument
    {
        m_vie = personnageACopier.m_vie; //On copie tous les champs
        m_mana = personnageACopier.m_mana;
	delete m_arme;
        m_arme = new Arme(*(personnageACopier.m_arme));
    }
    return *this; //On renvoie l'objet lui-m�me
}
