#include <iostream>
#include "stdlib.h"
#include "jeuDeCartes.h"
#include "file.h"

using namespace std;

unsigned int pointsCarte (UneCarte c) ;
// retourne le nombre de points apport�s par la carte c

void afficherTapis (UneFile& t);
// affiche les cartes du joueur, les plus anciennement arriv�es � gauche
// les plus nouvellement rajout�es � droite


int main()
{
   // DICTIONNAIRE des ELEMENTS
   enum UneFinDuJeuDu51 {abandon, gagne, perduPlusDeCartes, perduPlusDe51 };

   UneFinDuJeuDu51 finDePartie;    /* indique la mani�re dont la partie se termine :
                                        - perdu pour cause de paquet �puis� (plus de cartes)
                                        - perdu car le score est > 51 points
                                        - perdu par abandon du joueur
                                        - gagn� avec un score = 51 */

   unsigned int score ;    // score du joueur
   char choixJoueur ;      /* choix de l'action du joueur :  (a/A) abandon de la partie ;
                                                             (g/G) garder la carte de gauche
                                                             (r/R) retirer la carte de gauche */

   UneCarte  carteCourante ;  /* carte courante manipul�e par le joueur :
                                    - soit pioch�e du paquet, et ajout�e � droite du tapis
                                    - soit retir�e � gauche du tapis */

   UneFile tapis;              // cartes du joueur d�pos�es sur le tapis

   UneCarte ancienneCarte; //carte que l'on enl�ve
   // ACTIONS

   // Initialisation du jeu >> tapis, score (et un nouveau paquet de cartes)
    initialiser(tapis);
    score = 0;
    nouveauPaquet();

   // tapis, score >> Jouer >> finDePartie
   while (true)
      {
      /* tapis, score >> JOUER UN COUP >> finDePartie */


         // piocher une carte >>  carteCourante
         try
            {
               carteCourante = nouvelleCarte();
            }
         catch (string const& chaine)
            {
               finDePartie = perduPlusDeCartes;
               break;
            }

         // poser la carte sur le tapis
         /* � compl�ter*/

         // carteCourante, score >> mise � jour du score >> score
         score = score + pointsCarte(carteCourante);

         // score, tapis >> afficher le jeu (tapis et score)>> (�cran)
         afficherTapis(tapis);
         cout << endl << endl << endl << "    score = " << score << endl;

         // score >> Analyse du score >> finDePartie
         if (score > 51)
         {
            finDePartie = perduPlusDe51;
         }

         // saisie-verif >> choixJoueur
         cout << endl << endl <<  "    <G>arder carte de gauche   <R>ejeter carte de gauche   <A>bandonner   : " ;
         cin >> choixJoueur;

         // choix >> traiter choix du joueur
         switch (choixJoueur)
         {
     case 'a' :
     case 'A' :
        finDePartie = abandon;
        break;

     case 'R' :
     case 'r' :
        defiler(tapis, ancienneCarte);
        score = score - pointsCarte(ancienneCarte);
        break;

     default :
        break;
         }
         if (finDePartie=abandon)
         {
             break;
         }

      }

   // finDePartie >> Terminer la partie >> --
   switch(finDePartie)
      {
      case abandon :
         cout << endl << endl  << "    perdu, par abandon " << endl << endl;
         break;
      case perduPlusDeCartes :
         cout << endl << endl  << "    perdu, plus de cartes dans le paquet " << endl << endl;
         break;
      case perduPlusDe51 :
         cout << endl << endl  << "    perdu, votre score  = " << score << " est > 51 points " << endl << endl;
         break;
      case gagne :
         cout << endl << endl  << "    bravo, gagne. Votre score = " << score << " points." << endl << endl;
         break;
      default :
         break;
      }

   return 0;
}


unsigned int pointsCarte (UneCarte c)
{
    pointsCarte(carteCourante) = carteCourante.valeur;

   if (carteCourante.valeur > 10)
   {
       pointsCarte(carteCourante) = 10;
   }
   return 0;
}


void afficherTapis (UneFile& t)
{
   UneCarte carteCourante;

   // effacer �cran
   system("cls"); //  avec #include "stdlib.h" // system("clear"); pour Linux
   cout << endl << endl << endl << "    ";

   // affichage du contenu du tapis :
   /*� compl�ter*/
   // mise en page � respecter : afficher toutes les cartes sur la m�me ligne, PAS de saut de ligne � la fin (ce sera fait dans le main)
}
