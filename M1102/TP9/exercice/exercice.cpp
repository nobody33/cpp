#include "exercice.h"
#include <iostream>

using namespace std;

void remplacerCarac (string & chaine, char carDepart, char carFin)
{
    for (unsigned int i = 0; i <= chaine.size()-1; i++)
    {
        if (chaine [i] == carDepart)
        {
            chaine[i] = carFin;
        }
    }
    cout << chaine << endl;
}

void nbMot (string & chaine, char separateur)
{
    unsigned int compteur = 1;

    for (unsigned int i = 0; i <= chaine.size()-1; i++)
    {
        if (chaine [i] == separateur)
        {
            compteur = compteur + 1;
        }
    }
    cout << "la phrase contient " << compteur << " mot(s)" << endl;
}
