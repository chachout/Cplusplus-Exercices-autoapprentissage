#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"

using namespace std;

int main()
{
    Personnage monPersonnage;
    Guerrier monGuerrier;

    monPersonnage.coupDePoing(monGuerrier);
    monGuerrier.coupDePoing(monPersonnage);
    return 0;
}
