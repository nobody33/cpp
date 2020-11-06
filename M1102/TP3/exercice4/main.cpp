/*
 Programme : max de deux nombres
 But :  afficher le nombre le plus grand entre deux nombres saisis
 Date de dernière modification : 22/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double plusGrandNombre; //il s'agit du plus grand nombre des deux
    double nombre1; //le premier nombre saisi
    double nombre2; //le deuxieme nombre saisi
    bool egalite; //vérifier que les deux nombres ne sont pas égaux

    // TRAITEMENTS
    // clavier >> saisirNombre1 >> nombre1
    cout << "saisir le premier nombre" << endl;
    cin >> nombre1;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //clavier >> saisirNombre2 >> nombre2
    cout << "saisir le deuxième nombre" << endl;
    cin >> nombre2;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //determiner le nombre le plus grand
    if (nombre1 == nombre2)
    {
        egalite = true;
    }
    else
    {
        if (nombre1 < nombre2)
        {
            egalite = false;
            plusGrandNombre = nombre2;
        }
        else
        {
            egalite = false;
            plusGrandNombre = nombre1;
        }
    }

    //afficher plusGraandNommbre
    if (egalite)
    {
        cout << "les deux nombres sont égaux" << endl;
    }
    else
    {
        cout << "le nombre le plus grand est " << plusGrandNombre;
    }

    return 0;
}
