/*
 Programme :Un problème de tours de roue
 But : calculer le nombres de tour que fera une roue de vélo sur une distance donnée
 Date de dernière modification : 14/09/17
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
    float nombreDeTourDeRoue; //le nombre de tour que la roue fait sur la distance donnée
    const float PI = 3.14; //la constante PI fixée à 3.14

    // TRAITEMENTS
    // clavier >> saisirRayon >> rayon
    cout << "entrer la longueur du rayon en millimètre" << endl;
    cin >> rayon;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //clavier >> saisirDistance >> distance
    cout << "saisir la distance à parcourir en kilomètre" << endl;
    cin >> distance;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    //distance; rayon; PI >> calculerNombreDeTourDeRoue >> nombreDeTourDeRoue
    rayon = rayon * 2 * PI;//on calcule la circonférence de la roue
    distance = distance * 10 * 10 * 10 * 10 * 10 * 10; // on convertie la distance en millimètre pour avoir les même unitées
    nombreDeTourDeRoue = distance / rayon;

    //nombreDeTourDeRoue >> afficherNombreDeTourDeRoue >> écran
    cout << "La roue à fait " << nombreDeTourDeRoue << "tours sur cette distance.";
    return 0;
}
