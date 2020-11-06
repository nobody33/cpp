/*
 Programme : vérifier une nore
 But :  vérifier qu'une note entrée est bien comprise entre 0 et 20
 Date de dernière modification : 27/09/17
 Auteur :Q.Dhersin
 Remarques :sans message d'erreur
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    float note; //la note à entrer

    // TRAITEMENTS
    //clavier >> saisirNote >> note
    cout << "saisir une note comprise entre 0 et 20" << endl;
    cin >> note;

    //clavier >> saisirNoteTantQue >> note
    while (note < 0 || 20 < note)
    {
        cout << endl;
        cin >> note;
    }

    cout << "merci";

    return 0;
}
