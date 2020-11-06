/*
 Programme : max de trois nombres
 But :  afficher le nombre le plus grand entre trois nombres saisis
 Date de dernière modification : 27/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nombre1;//le premier nombre saisi
    double nombre2;//le deuxieme nombre saisi
    double nombre3;//le troisieme nombre saisi
    double nombreMax;//le max des trois nombres saisi

    // TRAITEMENTS
    //clavier >> saisirNombre1 >> nombre1
    cout << "saisir le premier nombre" << endl;
    cin >> nombre1;

    //clavier >> saisirNombre2 >> nombre1
    cout << "saisir le deuxieme nombre" << endl;
    cin >> nombre2;

    //clavier >> saisirNombre3 >> nombre1
    cout << "saisir le troisieme nombre" << endl;
    cin >> nombre3;

    //nombre1, nombre2, nombre3 >> determinerMax >> nombreMax
    if ((nombre1 > nombre2) && (nombre1 > nombre3))
    {
        nombreMax = nombre1;
    }
    else
    {
        if ((nombre2 > nombre1) && (nombre2 > nombre3))
        {
            nombreMax = nombre2;
        }
        else
        {
            if ((nombre3 > nombre1) && (nombre3 > nombre2))
            {
                nombreMax = nombre3;
            }
        }
    }

    //nombreMax >> afficherMax >> écran
    cout << "le nombre le plus grand est " << nombreMax << endl;

    return 0;
}
