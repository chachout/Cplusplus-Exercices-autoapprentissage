#include <iostream>

using namespace std;

int main()
{
    double a, b, resultat;
    cout << "Entrer le premier nombre : " ;
    cin >> a;
    cout << "Entrer le second nombre : " ;
    cin >> b;
    resultat = a+b;
    cout << a << " + " << b <<" = " << resultat << endl;
    resultat = a*b;
    cout << a << " * " << b <<" = " << resultat << endl;
    double c;
    cout << "Entrer un troisième nombre : " ;
    cin >> c;
    resultat = a*b+c;
    cout << a << " * " << b << " + " << c <<" = " << resultat << endl;

    int d,e,quotient,reste;
    cout << "Entrer le premier nombre entier : " ;
    cin >> d;
    cout << "Entrer le second nombre entier : " ;
    cin >> e;
    quotient=d/e;
    reste=d%e;
    cout << "Le quotient de " << d << "/" << e << " est de : " << quotient << " et le reste est de : " << reste <<endl;

    return 0;
}
