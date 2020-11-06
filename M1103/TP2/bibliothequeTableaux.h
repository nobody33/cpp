#ifndef BIBLIOTHEQUETABLEAUX_H
#define BIBLIOTHEQUETABLEAUX_H
#include "definitionsTypes.h"

/** afficherTableau ------------------------------------------*/
//  plusieurs sous-programmes SURCHARG�S qui diff�rent par le type des
//  �l�ments du tableau
//  --------------
void afficherTableau  (const int tab[],
                       unsigned int nbTab);
// But : affiche � l'�cran le contenu d'un tableau tab contenant nbTab > 0 �l�ments
//       si nbTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')

/** triParSelectionPlace---------------------------------------*/
    void triParSelectionPlace (int tab [], int nbTab);
    //tri des nbTab (>0) �l�ments de tab (avec d'�ventuels doublons)
    //par ordre croissant de valeur par la m�thode de tri de m�me nom
//=============================================================*/


/** triParInsertion -------------------------------------------*/
    // � compl�ter
//=============================================================*/

#endif        // BIBLIOTHEQUETABLEAUX_H
