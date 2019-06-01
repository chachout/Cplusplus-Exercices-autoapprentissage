#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "melangeMot.h"
#include "motDico.h"
#include "testMot.h"
using namespace std;

int main()
{
    int compteurPartie(0);//Permet de compter le nombre de partie
    int compteurVictoire(0);//Permet de compter le nombre de victoire
    bool victoire; //Permet de savoir si une partie est gagné ou perdue
    cout << "Bonjour, bienvenue dans le jeu \"Le Mot Mystere\"" << endl;
    cout << "Pour jouer, merci de n'ecrire qu'en majuscule" << endl;
    cout << endl;
    string nouvellePartie("OUI");
    do
    {
        compteurPartie++;
        //Demande du mot de départ
        string motDepart;
        motDepart=motDico();
        cout << motDepart << endl; //Permet d'afficher le mot de depart pour les test

        //mélange du mot
        string motMelange;
        motMelange=melangeMot(motDepart);
        cout << motMelange << endl;
        cout << endl;

        //Demande à l'utilisateur le mot mystère
        victoire=testMot(motDepart,motMelange);
        if (victoire==true)
        {
            compteurVictoire++;
        }
        //Demande nouvelle partie
        cout << endl;
        cout << "Voulez-vous refaire une partie, OUI ou NON ?"<< endl;
        cin >> nouvellePartie;
        cout << endl;
    }while (nouvellePartie=="OUI"); //Si la reponse n'est pas OUI en majuscule la partie se termine
     cout << "Vous avez gagne "<< compteurVictoire << " parties sur " << compteurPartie << " parties jouees" << endl;

    return 0;
}
