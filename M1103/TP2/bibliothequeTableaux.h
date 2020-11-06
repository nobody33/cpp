#ifndef BIBLIOTHEQUETABLEAUX_H
#define BIBLIOTHEQUETABLEAUX_H
#include "definitionsTypes.h"

/** afficherTableau ------------------------------------------*/
//  plusieurs sous-programmes SURCHARGéS qui diffèrent par le type des
//  éléments du tableau
//  --------------
void afficherTableau  (const int tab[],
                       unsigned int nbTab);
// But : affiche à l'écran le contenu d'un tableau tab contenant nbTab > 0 éléments
//       si nbTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

/** triParSelectionPlace---------------------------------------*/
    void triParSelectionPlace (int tab [], int nbTab);
    //tri des nbTab (>0) éléments de tab (avec d'éventuels doublons)
    //par ordre croissant de valeur par la méthode de tri de même nom
//=============================================================*/


/** triParInsertion -------------------------------------------*/
    // à compléter
//=============================================================*/

#endif        // BIBLIOTHEQUETABLEAUX_H
