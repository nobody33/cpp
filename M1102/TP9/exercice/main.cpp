/*
 Programme :
 But :
 Date de derni�re modification : 09/11/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include "exercice.h"
#include <iostream>

using namespace std;

int main (void)
{
    // VARIABLES
    string phrase = "il poss�de une voiture";

    // TRAITEMENTS
    remplacerCarac (phrase,'e','a');
    nbMot (phrase, ' ');

    return 0;
}
