/*
 Programme :triangle de Pascal
 But :afficher un triangle de Pascal de n lignes
 Date de dernière modification :20/10/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

void trianglePascal (unsigned int nbCases, int tab [][])
{
    int tab [nbCases] [nbCases];

    for (int i = 0, i<=nbCases, i++)
    {
        tab [0] [i] = 1;
    }
    for (int i=0, i<=nbcases, i++)
    {

    }
}

int main (void)
{
    // VARIABLES
    unsigned int nombreCases;
    int tableau [nombresCases] [nombreCases];

    // TRAITEMENTS
    cout << "combien de n-uplets ?" << endl;
    cin >> nombreCases;

    trianglePascal (nombrecases, tableau);


    return 0;
}
