/*
 Programme :Conversion en secondes
 But : convertir un durée donnée en heures et en minutes en secondes
 Date de dernière modification : 14/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>

using namespace std;

int main (void)
{
    // VARIABLES
    int heures; // la variable qui indique le temps en heures
    int minutes; //la variable qui indique le temps en minutes
    int secondes;//la variable qui indique le temps en seconde, il s'agit du résultat attendu

    // TRAITEMENTS
    //clavier >> saisirHeures >> heures
    cout << "Saisir le nombre d'heures" << endl;
    cin >> heures;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //clavier >> saisirMinutes >> minutes
    cout << "Saisir le nombre de minutes" << endl;
    cin >> minutes;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //heures; minutes >> convertion >> secondes
    heures = heures * 3600;
    minutes = minutes * 60;
    secondes = heures + minutes;

    //secondes >> afficherSecondes >> écran
    cout << "la durée entré vaut : " << secondes << "secondes";

    return 0;
}
