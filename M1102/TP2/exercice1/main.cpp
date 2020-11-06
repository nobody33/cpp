/*
 Programme : Profitons des soldes
 But :  calcule et affiche à l'écran le prix réduit d'un produit soldé
 Date de dernière modification : 13/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>

using namespace std;

int main (void)

{
    // VARIABLES
    float prixInitial; //c'est le prix initial du produit
    int pourcentageDeReduction; //c'est le pourcentage de réduction du produit
    float reduction; //c'est le montant de la réduction sur le produit
    float prixFinal; //c'est le prix final du produit que le client doit payer

    // TRAITEMENTS

    // (clavier) >> saisirPrixInitial >> prixInitial
    cout << "saisir le prix initial du produit ( en euros )" << endl;
    cin >> prixInitial;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    // (clavier) >> saisirPourcentage >> pourcentageDeReduction
    cout << "saisir le pourcentage de réduction du produit ( en % )" << endl;
    cin >> pourcentageDeReduction;

    cout << endl; //cette ligne de code sert à sauter une ligne dans l'affichage

    // prixInitial; pourcentage >> calculerPrixReduit >> prixFinal
    reduction = (prixInitial * pourcentageDeReduction) / 100;
    prixFinal = prixInitial - reduction;

    // prixFinal >> afficherPrixReduit >> (écran)
    cout << "le prix est de " << (prixFinal) << " €";

    return 0;
}
