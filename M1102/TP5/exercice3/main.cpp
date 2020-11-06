/*
 Programme : Représentation et manipulation de cartes à jouer
 But :  comparer deux cartes
 Date de dernière modification : 06/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    enum ValCarte
    {
        deux = 2, trois, quatre, cinq, six, sept, huit, neuf, dix, valet, dame, roi, as
    };//deux=2 pour faciliter les opérations d'affichages
    enum CouleurCarte
    {
        coeur,pique,trefle,carreau
    };

    struct Carte
    {
        ValCarte valCarte;//valeur de la carte
        CouleurCarte couleurCarte;//couleur de la carte
    };

    Carte carte1;
    carte1.valCarte = as;
    carte1.couleurCarte = coeur;

    Carte carte2 = {huit, pique};

    // TRAITEMENTS
    //carte1, carte2 >> comparer les deux cartes >> carteGagnante
    if (carte1.valCarte > carte2.valCarte)
    {
        cout << "la carte 1 est plus forte" << endl;
    }

    else
    {
        if (carte1.valCarte < carte2.valCarte)
        {
            cout << "la carte 2 est plus forte" << endl;
        }
        else
        {
            cout << "les deux cartes sont égales" << endl;
        }
    }

    return 0;
}
