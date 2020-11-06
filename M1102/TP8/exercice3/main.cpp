/*
 Programme :moyenne des valeurs d'un tableau de nombres
 But :determiner la moyenne des valeurs d'un tableau tab de dimension taille
 Date de dernière modification :27/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

double moyTab (const unsigned int tab [], unsigned int taille)
{
    unsigned  int somme = 0;
    double moyenne;
    for (unsigned int i = 0; i <= taille - 1; i++)
    {
        somme = somme + tab[i];
    }
    moyenne = (double) somme / taille;
    return moyenne;
}

int main (void)
{
    // VARIABLES
    unsigned int nbCases = 3;
    const unsigned int notes [nbCases] = {10, 12, 12};

    // TRAITEMENTS
    cout << "La moyenne des valeurs du tableau est " << moyTab (notes, nbCases);

    return 0;
}
