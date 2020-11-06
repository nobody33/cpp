/*
 Programme : prix r�duit
 But : afficher � l'�cran le prix r�duit d'un produit
 Date de derni�re modification : 20/10/17
 Auteur : Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

void afficherPrix (double prixInit, unsigned short int reduc, double & prixReduit)
    {
    prixReduit = prixInit * ( 1 - (double) reduc / 100 );
    }

int main (void)
{
    // VARIABLES
    double prix = 15.5;
    unsigned short int reduction = 10;
    double resultat;

    // TRAITEMENTS
    afficherPrix (prix, reduction, resultat);
    cout << resultat << endl;

    return 0;
}
