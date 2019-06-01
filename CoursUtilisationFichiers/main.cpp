#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //ofstream monFlux("C:/Users/Pierre/Desktop/Informatique/C++/Fichiers/scores.txt");

    string const scores("C:/Users/Pierre/Desktop/Informatique/C++/Fichiers/scores.txt");

    ofstream monFlux(scores.c_str());
    //Déclaration d'un flux permettant d'écrire dans un fichier.

    if(monFlux)  //On teste si tout est OK
    {
        //Tout est OK, on peut utiliser le fichier
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    if (monFlux)
    {
        monFlux << "Je s'appelle Groot !!!" << endl;
        monFlux << 3.1415926535898 << endl;
        int age(666);
        monFlux << "J'ai " << age << " ans." << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

    return 0;
}
