/*
 Programme : max de deux nombres
 But :  afficher le nombre le plus grand entre deux nombres saisis
 Date de derni�re modification : 22/09/17
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
    bool egalite; //v�rifier que les deux nombres ne sont pas �gaux

    // TRAITEMENTS
    // clavier >> saisirNombre1 >> nombre1
    cout << "saisir le premier nombre" << endl;
    cin >> nombre1;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    //clavier >> saisirNombre2 >> nombre2
    cout << "saisir le deuxi�me nombre" << endl;
    cin >> nombre2;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

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
        cout << "les deux nombres sont �gaux" << endl;
    }
    else
    {
        cout << "le nombre le plus grand est " << plusGrandNombre;
    }

    return 0;
}
