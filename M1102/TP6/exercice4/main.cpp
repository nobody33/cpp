/*
 Programme :
 But :
 Date de dernière modification :
 Auteur :
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nombreDeCase;//le nombre de case du tableau
    int valeur;//la valeur a introduire dans la case
    unsigned int caseCourante = 0; //la case actuelle
    int somme = 0;//la somme des valeurs du tableau
    float moyenne; //la moyenne des valeurs du tableau

    // TRAITEMENTS
    //clavier >> initialiserTableau >> tableau
    cout << "entrez le nombre de valeur à remplir dans le tableau" << endl;
    cin >> nombreDeCase;
    cout << endl;
    int tableau [nombreDeCase] ;//déclaration du tableau

    //clavier >> saisirValeur >> valeur
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "indiquer la valeur à entrer dans la case" << caseCourante + 1 << ":" << endl;
        cin >> valeur;
        cout << endl;
        tableau [caseCourante] = valeur;
    }

    //tableau >> sommeDesValeurs >> somme
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        somme = somme + tableau [caseCourante];
    }

    //somme >> calculerMoyenne >> moyenne
    moyenne = somme / nombreDeCase;

    //tableau >> afficherTableau >> ecran
    for (caseCourante = 0; caseCourante <= nombreDeCase - 1; caseCourante++)
    {
        cout << "la case " << caseCourante + 1 << " contient la valeur : " << tableau [caseCourante] << endl;
        cout << endl;
    }

    cout << "la moyenne des valeurs du tableau est d'environs : " << moyenne << endl;
    return 0;
}
