/*
 Programme :mannipulation de tableaux
 But :échanger la valeur de deux cases d'un tableau
 Date de dernière modification :20/10/17
 Auteur :Q.Dhersin
 Remarques :la premiere case du tableau est 0 / exercice à terminer
*/

#include <iostream>
using namespace std;

void echangerValeursTab (int tab [], unsigned int indiceCase1, unsigned int indiceCase2)
{
    int mem;
    mem = tab [indiceCase1];
    tab [indiceCase1] = tab [indiceCase2];
    tab [indiceCase2] = mem;
}

int main (void)
{
    // VARIABLES
    int tableau [8];
    unsigned int case1 = 2;
    unsigned int case2 = 6;

    // TRAITEMENTS
    for ( unsigned short int caseCourante = 0; caseCourante < 8; caseCourante++)
    {
        cout << "indiquer la valeur à entrer dans la case" << caseCourante + 1 << ":" << endl;
        cin >> tableau [caseCourante];
        cout << endl;
    }
    echangerValeursTab(tableau, case1, case2);
    cout << tableau [6] << endl;

    return 0;
}
