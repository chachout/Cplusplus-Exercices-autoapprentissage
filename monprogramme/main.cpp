/*#include <iostream>

using namespace std;

int main()
{
    cout << "Comment allez-vous ? Bonjour G�rard" << endl; //affiche un message
    cout << "\"" << endl; //test commentaire
    cout << "\\" << endl;
    /*Permet d'�crire des commentaires
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
    bool aGagne; //Le joueur a-t-il gagn� ?
    double pi(3.141592653898);
    int& maVariable(ageUtilisateur); //D�claration d'une r�f�rence maVariable accroch�e � la variable ageUtilisateur

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

    int ageUtilisateur; //On prepare une case m�moire pour stocker un entier

    cin >> ageUtilisateur; //On fait entrer un nombre dans cette case

    cout << "Vous avez " << ageUtilisateur << " ans !" <<  endl; //Et on l'affiche


    cout << "Quel est votre prenom ?" << endl;
    string nomUtilisateur("Sans nom"); //On cr�e une case m�moire pour contenirune chaine de caract�res
    //cin >> nomUtilisateur; //On remplit cette case avec ce qu'�crit l'utilisateur
    getline(cin, nomUtilisateur); //On remplit cette case avec toutela ligne que l'utilisateur a �crit
    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.); //On cr�e une case m�moire pour stocker un nombre r�el
    cin >> piUtilisateur; //Et on remplit cette case avec ce qu'�critl'utilisateur

    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pivaut " << piUtilisateur << "." << endl;
    */
    int a(5), b(8), resultat; //D�claration de deux variables

    //a = b; //Affectation de la valeur de 'b' � 'a'.
    resultat=a+b;
    int const h(5);
    h++;
    cout << h <<endl;
    cout << "Le resultat est : " << resultat <<endl;
    return 0;
}
