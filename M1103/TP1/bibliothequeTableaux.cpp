#include "bibliothequeTableaux.h"
#include <iostream>
using namespace std;

void afficherTableauEntiers  (const int tab[],
                              unsigned int nbTab)
{
    if (nbTab > 0)
    {
        cout << "{";
        for (unsigned int i = 0; i<nbTab-1; i++)
        {
            cout << tab[i] << ", " ;

        };
        cout << tab[nbTab-1] << "} "<< endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}
