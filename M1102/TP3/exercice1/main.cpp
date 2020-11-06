/*
 Programme : Validation d'un module d'enseignement
 But :  savoir si un �l�ve � valid� son module grace � la saisie de deux notes
 Date de derni�re modification : 22/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    float noteOral; //la note d'oral
    float noteEcrit; //la note � l'�crit
    float resultat; //la moyenne sur le module

    // TRAITEMENTS
    //clavier >> saisirNoteOral >> noteOral
    cout << "saisir la note obtenu � l'oral" << endl;
    cin >> noteOral;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    //clavier >> saisirNoteEcrit >> noteEcrit
    cout << "saisir le note obtenu � l'�crit" << endl;
    cin >> noteEcrit;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    //noteEcrit; noteOral >> calculer la moyenne >> resultat
    resultat = 2*noteEcrit + noteOral;

    //resultat >> afficherResultat >> �cran
    if (resultat < 30)
    {
        cout << "non re�u";
    }
    else
    {
        cout << "re�u";
    }

    return 0;
}
