#include "bibliothequeTableaux.h"
#include <iostream>
using namespace std;

// -----------------------------------------------------------------------------
/** ZONE 1. - DéCLARATIONS des SOUS-PROGRAMMES utilisés dans la bibliothèque    */
//  les corps se trouvent en bas de ce fichier
//-------------------------------------------------------------------------------

void echanger (int& x, int& y);
// echange le contenur de deux entiers x et y

void echanger (UnePersonne& x, UnePersonne& y);
// echange le contenur de deux enregistrements x et y

/** FIN des DéCLARATIONS des SOUS-PROGRAMMES utilisés dans la bibliothèque */

//-------------------------------------------------------------------------
/** ZONE 2.- DéFINITIONS des SOUS-PROGRAMMES DE la bibliothèque            */
//-------------------------------------------------------------------------

/** afficherTableau ------------------------------------------*/
void afficherTableau  (const int tab[],
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

//============================================================*/
/** triParSelectionPlace---------------------------------------*/
//=============================================================*/

void triParSelectionDePlace (int tab [], int nbTab)
{
    //déclaration des variables
    unsigned int borneDeb = 0;
    unsigned int borneFin = nbTab - 1;
    unsigned int ici;

    //déclaration des actions
    for (a compléter)
    {
        unsigned int compteur = 0;

        for (unsigned int i = 0; i <= nbTab - 1; i++)
        {
            if (tab [i] > tab [ici])
            {
                compteur = compteur + 1;
            }
        }
    }
}

/** triParInsertion -------------------------------------------*/
//=============================================================*/

/** FIN DES DéFINITIONS des SOUS-PROGRAMMES DE la bibliothèque  */



//--------------------------------------------------------------------------
/** ZONE 3.- DéFINITIONS des SOUS-PROGRAMMES utilisés dans la bibliothèque */
//--------------------------------------------------------------------------
void echanger (int& x, int& y)
// echange le contenur de deux entiers x et y
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void echanger (UnePersonne& x, UnePersonne& y)
// echange le contenur de deux enregistrements x et y
// echange le contenur de deux entiers x et y
{
    UnePersonne temp;
    temp = x;
    x = y;
    y = temp;
}

