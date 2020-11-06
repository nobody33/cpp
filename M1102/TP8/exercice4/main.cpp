/*
 Programme :PGCD
 But :determiner le PGCD de deux nombres nb1 et nb2
 Date de dernière modification :27/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

unsigned int pgcd (int nb1, int nb2)
{
    int resultat;
    while (nb1 != 0 || nb2 != 0)
    {
        resultat = nb1 % nb2;
        nb1 = nb2;
        nb2 = resultat;
        if (nb2 == 0)
        {
            break;
        }
    }
    return nb1;
}

int main (void)
{
    // VARIABLES
    int val1;
    int val2;

    // TRAITEMENTS
    cout << "Saisir le premier nombre" << endl;
    cin >> val1;

    cout << endl;

    cout << "Saisir le deuxième nombre" << endl;
    cin >> val2;

    cout << endl;

    cout << "Le PGCD vaut " << pgcd(val1, val2) << endl;

    return 0;
}
