/*#include <iostream>

using namespace std;

int main()
{
    cout << "Comment allez-vous ? Bonjour Gérard" << endl; //affiche un message
    cout << "\"" << endl; //test commentaire
    cout << "\\" << endl;
    /*Permet d'écrire des commentaires
    sur plusieurs lignes */
    /*return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nom("Einstein"), prenom("Albert");
    int ageUtilisateur(16);
    int nombreAmis(432);  //Le nombre d'amis de l'utilisateur
    string nomJoueur;
    int nombreJoueurs;
    bool aGagne; //Le joueur a-t-il gagné ?
    double pi(3.141592653898);
    int& maVariable(ageUtilisateur); //Déclaration d'une référence maVariable accrochée à la variable ageUtilisateur

    bool estMonAmi(true); //Cet utilisateur est il mon ami ?

    char lettre('a');
    /*cout << "Votre age est : ";
    cout << ageUtilisateur;*/
    /*cout << "Votre age est : " << ageUtilisateur << " et votre nom est : " << nom << endl;


    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    /*cout << "Quel age avez-vous ?" << endl;

    int ageUtilisateur; //On prepare une case mémoire pour stocker un entier

    cin >> ageUtilisateur; //On fait entrer un nombre dans cette case

    cout << "Vous avez " << ageUtilisateur << " ans !" <<  endl; //Et on l'affiche


    cout << "Quel est votre prenom ?" << endl;
    string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenirune chaine de caractères
    //cin >> nomUtilisateur; //On remplit cette case avec ce qu'écrit l'utilisateur
    getline(cin, nomUtilisateur); //On remplit cette case avec toutela ligne que l'utilisateur a écrit
    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.); //On crée une case mémoire pour stocker un nombre réel
    cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur

    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pivaut " << piUtilisateur << "." << endl;
    */
    int a(5), b(8), resultat; //Déclaration de deux variables

    //a = b; //Affectation de la valeur de 'b' à 'a'.
    resultat=a+b;
    int const h(5);
    h++;
    cout << h <<endl;
    cout << "Le resultat est : " << resultat <<endl;
    return 0;
}
