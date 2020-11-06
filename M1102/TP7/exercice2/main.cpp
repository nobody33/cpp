/*
 Programme :échange de deux nombre
 But :echanger deux nombres donnés
 Date de dernière modification :20/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

void echanger (double & val1, double & val2)
{
    double mem;
    mem = val1;
    val1 = val2;
    val2 = mem;
}

int main (void)
{
    // VARIABLES
    double nb1 = 8;
    double nb2 = 6.4;

    // TRAITEMENTS
    echanger (nb1, nb2);
    cout << nb1 << endl;

    return 0;
}
