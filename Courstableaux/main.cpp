#include <iostream>

using namespace std;

double calculMoyenne (double notes[], int nombreNotes)
{
    double moyenne(0);
    for(int i=0;i<nombreNotes;i++)
    {
        moyenne+=notes[i];
    }
    moyenne/=nombreNotes;
    return moyenne;
}


int main()
{/*
    int const nombreMeilleursScores(5);           //La taille du tableau
    int meilleursScores[nombreMeilleursScores];   //D�claration du tableau

    meilleursScores[0] = 118218;  //Remplissage de la premi�re case
    meilleursScores[1] = 100432;  //Remplissage de la deuxi�me case
    meilleursScores[2] = 87347;   //Remplissage de la troisi�me case
    meilleursScores[3] = 64523;   //Remplissage de la quatri�me case
    meilleursScores[4] = 31415;   //Remplissage de la cinqui�me case

    for(int i(0); i<nombreMeilleursScores; ++i)
    {
        cout << meilleursScores[i] << endl;
    }*/
    int nombreNotes(6);
    double notes[nombreNotes];

    notes[0] = 12.5;
    notes[1] = 19.5;
    notes[2] = 6.;
    notes[3] = 12;
    notes[4] = 14.5;
    notes[5] = 15;
    double moyenne(0);
    for(int i=0;i<nombreNotes;i++)
    {
        moyenne+=notes[i];
    }
    moyenne/=nombreNotes;
    moyenne=calculMoyenne(notes,nombreNotes);
    cout << "La moyenne est de " << moyenne << "/20" <<endl;

    return 0;
}

