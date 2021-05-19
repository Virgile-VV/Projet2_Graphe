#include <cstdlib>
#include <iostream>
#include "Csommet.h"
using namespace std;

/**
* Constructeur par défaut
*/
Csommet::Csommet() {
	uiSOMNbPartant = 0;
	uiSOMNbArrivant = 0;
}


/**
* Constructeur
*/
Csommet::Csommet(unsigned int uiNumeroSommet) {
	uiSOMNumero = uiNumeroSommet;
	uiSOMNbPartant = 0;
	uiSOMNbArrivant = 0;
}


/**
* Ajout d'un élément au tableau des arcs partant
*
* renvoie un booléen
*	true : si l'arc a été ajouté
*	false : si l'arc n'a pas été ajouté
*/
bool Csommet::SOMAjouteArcPartant(Carc &ARCPartant)
{
	//d'abord on parcours le tableau 
	int iDeuxArcMemeDestination = 0;

	for (int iCpt = 0; iCpt < uiSOMNbPartant; iCpt++) {
		if (ppARCSOMPartant[iCpt]->ARCLireDestination() == ARCPartant.ARCLireDestination()) {
			iDeuxArcMemeDestination = 1;

			cerr << "L'arc poitant vers " << ppARCSOMPartant[iCpt]->ARCLireDestination() << " dans la table des arc partant du sommet" << SOMLireSommet();
			cerr << "n'a pas pu être ajouté car un arc pointe deja vers cette destination" << endl;
		}
	}
	if (iDeuxArcMemeDestination == 0) {
		//incrementation du nombre d'arc partant
		uiSOMNbPartant++;

		//reallocation du tableau
		ppARCSOMPartant = (Carc**)realloc(ppARCSOMPartant, uiSOMNbPartant * sizeof(Carc));

		//ajout de l'élément dans la case (somme de tous les partant - 1) puisque le tab commence a 0
		ppARCSOMPartant[uiSOMNbPartant - 1] = &ARCPartant;
		//cout << ppARCSOMPartant[0];
		return true;
	}
	return false;

}


/**
* Ajout d'un élément au tableau des arcs arrivant
*/
void Csommet::SOMAjouteArcArrivant(Carc &ARCArrivant)
{
	//incrementation du nombre d'arc partant
	uiSOMNbArrivant++;

	//faie un malloc si pArcSomarrivant == nullptr
	//reallocation du tableau
	ppARCSOMArrivant = (Carc**)realloc(ppARCSOMArrivant, uiSOMNbArrivant * sizeof(Carc));

	//ajout de l'élément dans la case (somme de tous les partant - 1) puisque le tab commence a 0
	ppARCSOMArrivant[uiSOMNbArrivant - 1] = &ARCArrivant;
	//cout << ppARCSOMPartant[0];
}


/**
* Renvoie un unigned int
*	Le numero du sommet qui appelle la méthode
*/
unsigned int Csommet::SOMLireSommet()
{
	return uiSOMNumero;
}


/**
* Affiche dans la console les arcs partants
*/
void Csommet::SOMAfficherPartant(void)
{
	for (unsigned int uiCpt = 0; uiCpt < uiSOMNbPartant; uiCpt++) {
		cout << ppARCSOMPartant[uiCpt]->ARCLireDestination() << ", ";
	}
	cout << endl;
}

void Csommet::SOMAfficherNbArrivant(void)
{
	cout << uiSOMNbArrivant;
}



