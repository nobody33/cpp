/*
 Programme :recherche de voyelle dans une chaine de caract�res
 But :trouver le premi�re voyelle dans une chaine de caract�re
 Date de derni�re modification :13/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    unsigned int nombreCaracteres;//le nombre de caract�res de la chaine de caract�res
    char caractereCourant = 0; //le caract�re actuelle
    string chaineCaractere;
    bool trouve;

    // TRAITEMENTS
    //clavier >> initialiserChaineDeCaract�re >> tableau
    cout << "entrez la chaine de caract�re � examiner" << endl;
    cin >> chaineCaractere;
    cout << endl;

    //clavier >> saisirValeur >> trouv�
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
