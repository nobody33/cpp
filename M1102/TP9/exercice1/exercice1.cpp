#include "exercice1.h"
#include <iostream>

using namespace std;

void afficher (fraction frac)
{
    cout << frac.num;
    if (frac.den !=1)
    {
        cout << '/' << frac.den;
    }
}
