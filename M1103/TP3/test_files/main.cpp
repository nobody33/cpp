#include <iostream>
#include "file.h"

using namespace std;

int main()
{
    //Déclaration et initialisation de la file
    UneFile maFile;
    initialiser(maFile);

    //Ajout d'éléments dans la file
    enfiler (maFile, 0); enfiler (maFile, 1);
    enfiler (maFile, 2); enfiler (maFile, 3);
    enfiler (maFile, 4); enfiler (maFile, 5);

    const unsigned int TAILLE = 5;
    int monTab[TAILLE] = {10, 20, 30, 40, 50};

    enfiler (maFile, monTab[0]); enfiler (maFile, monTab[1]);
    enfiler (maFile, monTab[2]); enfiler (maFile, monTab[3]);
    enfiler (maFile, monTab[4]);

    //Affichage du contenu de la file
    while (!estVide(maFile))
    {
        cout << premier(maFile) << "... ";
        defiler(maFile);
    }

    return 0;
}
