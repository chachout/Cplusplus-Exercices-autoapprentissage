#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
    Duree duree1, duree2(1, 58, 59), duree3(4,666,6666);
    Duree resultat;
/*
    if (duree1 <= duree2)
        cout << "La premiere duree est plus petite";
    else
        cout << "La premiere duree n'est pas plus petite";*/
    duree1.afficher();
    cout << " et " << endl;
    duree2.afficher();
    cout << " et " << endl;
    duree3.afficher();

    resultat=duree1+duree2+duree3;

    cout << " donne " << endl;
    resultat.afficher();
    cout << duree1 << " et " << duree2 << endl;


    return 0;
}
