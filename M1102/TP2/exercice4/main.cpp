/*
 Programme :Un probl�me de tours de roue
 But : calculer le nombres de tour que fera une roue de v�lo sur une distance donn�e
 Date de derni�re modification : 14/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    float rayon; //la longueur du rayon en mm
    float distance; //la distance en km
    float nombreDeTourDeRoue; //le nombre de tour que la roue fait sur la distance donn�e
    const float PI = 3.14; //la constante PI fix�e � 3.14

    // TRAITEMENTS
    // clavier >> saisirRayon >> rayon
    cout << "entrer la longueur du rayon en millim�tre" << endl;
    cin >> rayon;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    //clavier >> saisirDistance >> distance
    cout << "saisir la distance � parcourir en kilom�tre" << endl;
    cin >> distance;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    //distance; rayon; PI >> calculerNombreDeTourDeRoue >> nombreDeTourDeRoue
    rayon = rayon * 2 * PI;//on calcule la circonf�rence de la roue
    distance = distance * 10 * 10 * 10 * 10 * 10 * 10; // on convertie la distance en millim�tre pour avoir les m�me unit�es
    nombreDeTourDeRoue = distance / rayon;

    //nombreDeTourDeRoue >> afficherNombreDeTourDeRoue >> �cran
    cout << "La roue � fait " << nombreDeTourDeRoue << "tours sur cette distance.";
    return 0;
}
