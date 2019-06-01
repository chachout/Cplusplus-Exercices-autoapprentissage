#include "Duree.h"
#include <iostream>

using namespace std;

Duree::Duree(int heures, int minutes, int secondes)
{
    m_secondes=secondes%60;
    m_minutes=(minutes+secondes/60)%60;
    m_heures=(heures+(minutes+secondes/60)/60);
}
Duree& Duree::operator+=(const Duree& a)
{
    m_secondes+=a.m_secondes;
    m_minutes+=m_secondes/60;
    m_secondes%=60;
    m_minutes+=a.m_minutes;
    m_heures+=m_minutes/60;
    m_minutes%=60;
    m_heures+=a.m_heures;
    return *this;
}
void Duree::afficher() const
{
    cout << m_heures << "h " << m_minutes << "m " << m_secondes << "s" << endl;
}
void Duree::afficher(ostream &flux) const
{
    cout << m_heures << "h " << m_minutes << "m " << m_secondes << "s" << endl;
}
bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);     //Teste si a.m_heure == b.m_heure etc.
}
bool Duree::estPlusPetitQue(Duree const& b) const
{
    if (m_heures < b.m_heures)   // Si les heures sont différentes
        return true;
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes) //Si elles sont égales, on compare les minutes
        return true;
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes) // Et si elles sont aussi égales, on compare les secondes
        return true;
    else              //Si tout est égal, alors l'objet n'est pas plus petit que b
        return false;
}
bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}
bool operator!=(Duree const& a, Duree const& b)
{
    return !(a==b); //On utilise l'opérateur == qu'on a défini précédemment !
}
bool operator<(Duree const &a, Duree const& b)
{
    return a.estPlusPetitQue(b);
}
bool operator>(Duree const &a, Duree const& b)
{
    return b.estPlusPetitQue(a);
}
bool operator<=(Duree const &a, Duree const& b)
{
    if(a.estPlusPetitQue(b)||a.estEgal(b))
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool operator>=(Duree const &a, Duree const& b)
{
    if(b.estPlusPetitQue(a)||a.estEgal(b))
    {
        return true;
    }
    else
    {
        return false;
    }

}
Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a); //On utilise le constructeur de copie de la classe Duree !
    copie+=b;
    return copie;
}
ostream &operator<<( ostream &flux, Duree const& duree )
{
    //Affichage des attributs
    duree.afficher(flux);
    return flux;
}


