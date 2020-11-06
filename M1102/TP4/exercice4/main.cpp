/*
 Programme :somme des entiers de 1 à N
 But :afficher la somme des entiers compris entre 1 et N saisi
 Date de dernière modification :27/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nombre;//le nombre saisi
    int total;//le total de la somme des nombres compris entre 1 et nombre

    // TRAITEMENTS
    //clavier >> saisirNombre >> nombre
    cout << "saisir un nombre" << endl;
    cin >> nombre;

    //nombre, total >> calculerLaSommeDesEntiers >> total
    for (int i = 0; i < nombre; i++)
    {
        total = total + i;
    }

    total = total - 1;

    //total >> afficherTotal >> écran
    cout << total << endl;

    return 0;
}
