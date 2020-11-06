/*
 Programme :le jeu du lièvre et de la tortue
 But :simuler une course
 Date de dernière modification :27/10/17
 Auteur :Q.Dhersin
 Remarques :déclaration des sous programmes à faire + erreur nombre de course different de nombre de victoire totale
*/

#include <iostream>
#include <cstdlib> // pour la fonction rand
#include <time.h> // pour réinitialiser rand via time
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES
int random (int min, int max);
// renvoie un entier aleatoire dans l'intervalle [min,max[

//            COMPLETER

int main (void)
{
  // Dictionnaire des variables (A COMPLETER SI NECESSAIRE)
  unsigned short int tortue = 0;
  unsigned short int de;
  unsigned short int nbLance = 0;
  long int nbCoursesASimuler; // Le nombre de courses à simuler.
  unsigned long int nbVictoiresTortue = 0; // Nombre total de victoires de la tortue
  unsigned long int nbVictoiresLievre = 0; // Nombre total de victoires du lièvre

  // Traitements

  // Initialisation de la fonction rand()
  srand(time(NULL)); // Laisser cette instruction, elle est nécessaire pour générer correctement les nombres aléatoires

  // clavier >> Choisir le nombre de courses à simuler >> nbCoursesASimuler
  cout << "Entrer le nombre de courses a simuler : ";
  cin >> nbCoursesASimuler;

  for (int i =0; i <= nbCoursesASimuler; i++)
  {
      do
      {
          de = (rand () % 6) + 1;
          if (de == 6)
          {
              nbVictoiresLievre = nbVictoiresLievre + 1;
              break;
          }
          else
          {
              tortue = tortue + 1;
          }
          if (tortue == 6)
          {
              nbVictoiresTortue = nbVictoiresTortue + 1;
          }
      } while (nbLance != 6);
  }

  // nbVictoiresTortue, nbVictoiresLievre >> Afficher le résultat final >> écran
  cout << "Sur " << nbCoursesASimuler << " courses les resultats sont les suivants :" << endl;
  cout << "Nombre de victoires du lievre : " << nbVictoiresLievre << endl;
  cout << "Nombre de victoires de la tortue : " << nbVictoiresTortue << endl;

  return 0;
}

int random(int min, int max)
{
  return rand() % (max-min) + min;
}
