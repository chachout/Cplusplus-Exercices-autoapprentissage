#include "Magicien.h"
#include "Personnage.h"

Magicien::Magicien() : Personnage(), m_mana(100)
{

}
Magicien::Magicien(string nom) : Personnage(nom), m_mana(100)
{

}
