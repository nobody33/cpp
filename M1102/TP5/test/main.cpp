/*
  Programme : D�terminer si un nombre est premier
  But : Ce programme d�termine si un nombre saisi est premier.
  Date de cr�ation : 3 novembre 2013
  Date de derni�re modification : 05/10/17
  Auteur : P. Etcheverry
  Remarques : Programme erron�. Utilis� pour illustrer les techniques de d�boggage.
*/

#include <iostream>
using namespace std;

// PROGRAMME PRINCIPAL
int main (void)
{
  long int nbre; // Le nombre qu'on analyse pour d�terminer s'il est premier
  unsigned int nbDiv; // Le nombre de diviseurs de nbre
  unsigned int i; // Diviseur potentiel de nbre
  unsigned int quotient; // Quotient de nbre par i
  unsigned int reste; // Reste de la division enti�re de nbre par i

  // clavier >> Saisie du nombre � analyser >> nombre
  cout << "Entrez un nombre: "; cin >> nbre;

  // nombre >> D�terminer le nombre de diviseurs >> nbDiv
  nbDiv = 0;
  for (int i=nbre ; i>=0 ; i--)
    {
      // V�rifier si i est un diviseur
      quotient = nbre / i; // Attention : division enti�re
      reste = nbre - (quotient*i);

      if (reste == 0) // on a trouv� un diviseur
      {
        nbDiv++;
      }
    }

  // nbDiv >> D�terminer si nbre est premier >> �cran
  cout << nbre << (nbDiv == 2 ? " est premier" : " n'est pas premier") << endl;

  return 0;
}
