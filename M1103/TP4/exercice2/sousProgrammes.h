#ifndef SOUSPROGRAMMES_H
#define SOUSPROGRAMMES_H

#include <iostream>
#include "pile.h"

void deplacerPetit (UnePile& t1, UnePile& t2, UnePile& t3, unsigned short int& deplacementPetit);
/*Déplace le petit disque vers une autre tour selon la DIRECTIVE donnée par deplacementPetit
  si deplacementPetit = 12 --> le petit est sur la tour 1 et doit être placé sur la tour 2
  si deplacementPetit = 23 --> le petit est sur la tour 2 et doit être placé sur la tour 3
  si deplacementPetit = 31 --> le petit est sur la tour 3 et doit être placé sur la tour 1
  Met à jour deplacementPetit pour le prochain tour
*/

void deplacerAutre (UnePile& t1, UnePile& t2, UnePile& t3, unsigned short int deplacementPetit);
// déplace un autre disque que le petit dans la tour qui reste

void afficherTour (UnePile p);
// affiche à l'écran le contenu de la pile

//A vous de choisir la version souhaitée
void afficherTour (UnePile& p);
// affiche à l'écran le contenu de la pile

/*

void afficherTour (const UnePile& p);
// affiche à l'écran le contenu de la pile

*/

#endif
