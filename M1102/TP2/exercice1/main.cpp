/*
 Programme : Profitons des soldes
 But :  calcule et affiche � l'�cran le prix r�duit d'un produit sold�
 Date de derni�re modification : 13/09/17
 Auteur :Q.Dhersin
 Remarques :
*/

#include <iostream>

using namespace std;

int main (void)

{
    // VARIABLES
    float prixInitial; //c'est le prix initial du produit
    int pourcentageDeReduction; //c'est le pourcentage de r�duction du produit
    float reduction; //c'est le montant de la r�duction sur le produit
    float prixFinal; //c'est le prix final du produit que le client doit payer

    // TRAITEMENTS

    // (clavier) >> saisirPrixInitial >> prixInitial
    cout << "saisir le prix initial du produit ( en euros )" << endl;
    cin >> prixInitial;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    // (clavier) >> saisirPourcentage >> pourcentageDeReduction
    cout << "saisir le pourcentage de r�duction du produit ( en % )" << endl;
    cin >> pourcentageDeReduction;

    cout << endl; //cette ligne de code sert � sauter une ligne dans l'affichage

    // prixInitial; pourcentage >> calculerPrixReduit >> prixFinal
    reduction = (prixInitial * pourcentageDeReduction) / 100;
    prixFinal = prixInitial - reduction;

    // prixFinal >> afficherPrixReduit >> (�cran)
    cout << "le prix est de " << (prixFinal) << " �";

    return 0;
}
