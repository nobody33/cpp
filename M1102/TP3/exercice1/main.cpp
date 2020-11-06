/*
 Programme : Validation d'un module d'enseignement
 But :  savoir si un éléve à validé son module grace à la saisie de deux notes
 Date de dernière modification : 22/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    float noteOral; //la note d'oral
    float noteEcrit; //la note à l'écrit
    float resultat; //la moyenne sur le module

    // TRAITEMENTS
    //clavier >> saisirNoteOral >> noteOral
    cout << "saisir la note obtenu à l'oral" << endl;
    cin >> noteOral;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //clavier >> saisirNoteEcrit >> noteEcrit
    cout << "saisir le note obtenu à l'écrit" << endl;
    cin >> noteEcrit;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //noteEcrit; noteOral >> calculer la moyenne >> resultat
    resultat = 2*noteEcrit + noteOral;

    //resultat >> afficherResultat >> écran
    if (resultat < 30)
    {
        cout << "non reçu";
    }
    else
    {
        cout << "reçu";
    }

    return 0;
}
