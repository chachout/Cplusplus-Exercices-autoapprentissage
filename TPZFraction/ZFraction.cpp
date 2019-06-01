#include "ZFraction.h"
#include <iostream>

using namespace std;

//Méthodes
ZFraction::ZFraction(int numerateur,int denominateur)
{
    int PGCD=pgcd(numerateur,denominateur);
    m_numerateur=numerateur/PGCD;
    m_denominateur=denominateur/PGCD;
}
ZFraction& ZFraction::operator+=(const ZFraction& a)
{
    m_numerateur*=a.m_denominateur;
    m_numerateur+=a.m_numerateur*m_denominateur;
    m_denominateur*=a.m_denominateur;
    int PGCD = pgcd(m_numerateur,m_denominateur);
    m_numerateur/=PGCD;
    m_denominateur/=PGCD;
    return *this;
}
ZFraction& ZFraction::operator*=(const ZFraction& a)
{
    m_numerateur*=a.m_numerateur;
    m_denominateur*=a.m_denominateur;
    int PGCD = pgcd(m_numerateur,m_denominateur);
    m_numerateur/=PGCD;
    m_denominateur/=PGCD;
    return *this;
}
void ZFraction::afficher(ostream &flux) const
{
    if(m_denominateur == 1)
    {
        flux << m_numerateur;
    }
    else
    {
        flux << m_numerateur << '/' << m_denominateur;
    }
}
bool ZFraction::estEgal(ZFraction const& autre) const
{
    return (m_numerateur == autre.m_numerateur && m_denominateur == autre.m_denominateur);
}
bool ZFraction::estPlusPetitQue(ZFraction const& autre) const
{
    if(m_numerateur * autre.m_denominateur < m_denominateur * autre.m_numerateur)
        return true;
    else
        return false;
}
//Fonctions
int pgcd(int a, int b)
{
    while (b != 0)
    {
        const int t = b;
        b = a%b;
        a=t;
    }
    return a;
}
ostream &operator<<( ostream &flux, ZFraction const& fraction )
{
    //Affichage des attributs
    fraction.afficher(flux);
    return flux;
}
ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a); //On utilise le constructeur de copie de la classe ZFraction
    copie+=b;
    return copie;
}
ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a); //On utilise le constructeur de copie de la classe ZFraction
    copie*=b;
    return copie;
}
bool operator==(ZFraction const& a, ZFraction const& b)
{
   return a.estEgal(b);
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
   return !(a.estEgal(b));   //Souvenez-vous du ! qui veut dire "NON"
}
bool operator<(ZFraction const& a, ZFraction const& b) //Vrai si a<b donc si a est plus petit que b
{
    return a.estPlusPetitQue(b);
}

bool operator>(ZFraction const& a, ZFraction const& b) //Vrai si a>b donc si b est plus petit que a
{
    return b.estPlusPetitQue(a);
}

bool operator<=(ZFraction const& a, ZFraction const& b) //Vrai si a<=b donc si b n'est pas plus petit que a
{
    return !(b.estPlusPetitQue(a));
}

bool operator>=(ZFraction const& a, ZFraction const& b) //Vrai si a>=b donc si a n'est pas plus petit que b
{
    return !(a.estPlusPetitQue(b));
}
