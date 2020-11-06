/*
 Programme : CalculAireCercle
 But :  Calculer l'aire d'un cercle avec son rayon
 Date de derni�re modification : 13/09/17
 Auteur : Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double rayon; // La valeur en centim�tre du rayon du cercle dont on veut connaitre l'aire.
    double aire; // La valeur en centim�tre r�sultant du calcul de l'aire du cercle.
    const float PI = 3.14; // La valeur de PI choisit pour calculer l'aire du cercle.

    // TRAITEMENTS
    // clavier >> saisirRayon >> rayon
     cout << "Entrez la longueur en centim�tre du rayon du cercle dont on veut calculer l'aire :  " << endl;
     cin >> rayon;

    // rayon, PI >> calculerAire >> aire
    aire = PI * rayon * rayon;

    // aire >> afficherAire >> �cran
    cout << "L'aire du cercle est egale a " << aire << " cm" << endl;

    return 0;
}
