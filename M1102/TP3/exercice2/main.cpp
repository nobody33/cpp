/*
 Programme : signe d'un nombre
 But : d�finir le signe d'un nombre donn�
 Date de derni�re modification : 22/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nombre; //il s'agit du nombre que l'utilisateur va entrer
    string signe; //il s'agit de la variable qui affichera le signe du nombre saisie

    // TRAITEMENTS
    // clavier >> saisirUnNombre >> nombre
    cout << "entrez un nombre" << endl;
    cin >> nombre;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    // nombre >> determinerLeSigne >> signe
    if (nombre < 0)
    {
        signe = "n�gatif";
    }
    else
    {
        /*if (nombre ==  0)
        {
            signe = "nul";
        }
        else
        {
            signe = "positif";
        }
        */
        (nombre == 0 ? signe = "nul" : signe = "positif");
    }

    cout << "le nombre est " << signe << endl;

    return 0;
}
