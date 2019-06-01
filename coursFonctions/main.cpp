#include <iostream>
#include "math.h"
using namespace std;
/*
int main()
{
    int a(2),b(2);
    cout << "Valeur de a : " << a <<endl;
    cout << "Valeur de b : " << b <<endl;
    b = ajouteDeux(b);
    cout << "Valeur de a : " << a <<endl;
    cout << "Valeur de b : " << b <<endl;
    return 0;
}*/

/*double carre(double a)
{
    double valeur(a*a);
    return valeur;
}
int main()
{
   for(int i(1); i<=20;i++)
    cout << "Le carre de " << i << " est " << carre(i) << endl;
    return 0;
}*/
#include <iostream>

using namespace std;

// Prototype de la fonction
int nombreDeSecondes(int heures, int minutes=0, int secondes=0);

// Main
int main()
{
    cout << nombreDeSecondes(95) << endl;

    return 0;
}

// Définition de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
