#include "bibliothequeTableaux.h"
#include <iostream>
using namespace std;

// -----------------------------------------------------------------------------
/** ZONE 1. - D�CLARATIONS des SOUS-PROGRAMMES utilis�s dans la biblioth�que    */
//  les corps se trouvent en bas de ce fichier
//-------------------------------------------------------------------------------

void echanger (int& x, int& y);
// echange le contenur de deux entiers x et y

void echanger (UnePersonne& x, UnePersonne& y);
// echange le contenur de deux enregistrements x et y

/** FIN des D�CLARATIONS des SOUS-PROGRAMMES utilis�s dans la biblioth�que */

//-------------------------------------------------------------------------
/** ZONE 2.- D�FINITIONS des SOUS-PROGRAMMES DE la biblioth�que            */
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
    //d�claration des variables
    unsigned int borneDeb = 0;
    unsigned int borneFin = nbTab - 1;
    unsigned int ici;

    //d�claration des actions
    for (a compl�ter)
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

/** FIN DES D�FINITIONS des SOUS-PROGRAMMES DE la biblioth�que  */



//--------------------------------------------------------------------------
/** ZONE 3.- D�FINITIONS des SOUS-PROGRAMMES utilis�s dans la biblioth�que */
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

