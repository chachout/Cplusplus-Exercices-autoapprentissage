#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED


#include <iostream>

class ZFraction
{
    public:
    ZFraction(int numerateur=0, int denominateur=1);
    ZFraction& operator+=(ZFraction const& a);
    ZFraction& operator*=(ZFraction const& a);
    void afficher(std::ostream &flux) const;
    bool estEgal(ZFraction const& autre) const;
    bool estPlusPetitQue(ZFraction const& autre) const;

    private:
    int m_numerateur;
    int m_denominateur;


};
int pgcd(int a, int b);
ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);
bool operator>=(ZFraction const& a, ZFraction const& b);
bool operator<=(ZFraction const& a, ZFraction const& b);
bool operator>(ZFraction const& a, ZFraction const& b);
bool operator<(ZFraction const& a, ZFraction const& b);
bool operator==(ZFraction const& a, ZFraction const& b);
bool operator!=(ZFraction const& a, ZFraction const& b);
std::ostream& operator<<(std::ostream &flux, ZFraction const& duree);
#endif // ZFRACTION_H_INCLUDED
