/*
 Programme :recherche de voyelle dans une chaine de caractères
 But :trouver le première voyelle dans une chaine de caractère
 Date de dernière modification :13/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    unsigned int nombreCaracteres;//le nombre de caractères de la chaine de caractères
    char caractereCourant = 0; //le caractère actuelle
    string chaineCaractere;
    bool trouve;

    // TRAITEMENTS
    //clavier >> initialiserChaineDeCaractère >> tableau
    cout << "entrez la chaine de caractère à examiner" << endl;
    cin >> chaineCaractere;
    cout << endl;

    //clavier >> saisirValeur >> trouvé
    for (caractereCourant = 0; caractereCourant <= nombreCaracteres - 1 || trouve = true; caractereCourant++)
    {
        switch (caractereCourant)
        {
        case 'a' :
            trouve = true;
        case 'e' :
            trouve = true;
        case 'i' :
            trouve = true;
        case 'o' :
            trouve = true;
        case 'u' :
            trouve = true;
        case 'y' :
            trouve = true;
        default :
        }
    }

    return 0;
}
