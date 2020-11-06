#ifndef SOUSPROGRAMMES_H
#define SOUSPROGRAMMES_H

#include <iostream>
#include "pile.h"

void deplacerPetit (UnePile& t1, UnePile& t2, UnePile& t3, unsigned short int& deplacementPetit);
/*D�place le petit disque vers une autre tour selon la DIRECTIVE donn�e par deplacementPetit
  si deplacementPetit = 12 --> le petit est sur la tour 1 et doit �tre plac� sur la tour 2
  si deplacementPetit = 23 --> le petit est sur la tour 2 et doit �tre plac� sur la tour 3
  si deplacementPetit = 31 --> le petit est sur la tour 3 et doit �tre plac� sur la tour 1
  Met � jour deplacementPetit pour le prochain tour
*/

void deplacerAutre (UnePile& t1, UnePile& t2, UnePile& t3, unsigned short int deplacementPetit);
// d�place un autre disque que le petit dans la tour qui reste

void afficherTour (UnePile p);
// affiche � l'�cran le contenu de la pile

//A vous de choisir la version souhait�e
void afficherTour (UnePile& p);
// affiche � l'�cran le contenu de la pile

/*

void afficherTour (const UnePile& p);
// affiche � l'�cran le contenu de la pile

*/

#endif
