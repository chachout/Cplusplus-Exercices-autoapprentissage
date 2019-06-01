#include "motDico.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

std::string motDico ()
{
    int nbAleatoire(0);
    srand(time(0));
    std::string motADeviner; //on d�clare le mot � deviner
    std::ifstream dictionnaire("dico.txt");  //On ouvre le dictionnaire
    if (dictionnaire)
    {
    //Tout est OK, on peut utiliser le fichier
    }
    else
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
    }
    int nbLignes(0);
    std::string ligne;
    std::vector<std::string>listeDico;
    while(getline(dictionnaire, ligne)) //Tant qu'on n'est pas � la fin, on lit
    {
        listeDico.push_back(ligne); //on copie le dictionnnaire dans un tableau dynamique
        nbLignes++;
    }
    int nbTestAleatoire (nbLignes/RAND_MAX);
    int resteNbTestAleatoire (nbLignes%RAND_MAX);
    for (int i(1);i<=nbTestAleatoire;i++)
    {
        nbAleatoire +=rand()%RAND_MAX;
    }
    nbAleatoire+=rand()%resteNbTestAleatoire;
    //l'ordinateur choisi un nombre al�atoire entre 0 et le nombre de lignes du dictionnaires -1 mais � cause de la limite de RAND_MAX on est oblig� de faire l'operation 9fois avec RAND_MAX (=32767)et une fois avec le reste de la disvision euclidienne.
    motADeviner=listeDico[nbAleatoire];//l'oridnateur s�lectionne le mot correspondant au nombre al�atoire
    return motADeviner;
}
