#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"

using namespace std;

int main()
{
    Vehicule v;
    v.affiche();    //Affiche "Ceci est un vehicule."

    Moto m;
    m.affiche();    //Affiche "Ceci est une moto."

    return 0;
}
