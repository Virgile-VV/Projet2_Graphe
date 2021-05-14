#include "Cgraphe.h"
#include "Carc.h"

#include <cstdlib>
#include <iostream>
using namespace std;


Cgraphe::Cgraphe()
{
	iGRANbSommet = 0;
}

//Methode permettant d'ajouter un sommet au graphe
Csommet* Cgraphe::GRAAjouterSommet(Csommet & SOMNouveauSommet) {
	//on incremente le nombre de sommet dans le graphe
	iGRANbSommet++;
	//on rajoute une case dans le tableau
	ppSOMGRATableauSommets = (Csommet**)realloc(ppSOMGRATableauSommets, iGRANbSommet * sizeof(Csommet));
	//on cree le pointeur vers le sommet que nous allons ajouter dan le tableau

	ppSOMGRATableauSommets[iGRANbSommet - 1] = &SOMNouveauSommet;
	return &SOMNouveauSommet;
}



void Cgraphe::GRAAjouterArc(Csommet & SOMSommetDepart, Csommet & SOMSommetDestination) {
	//cout << SOMSommetDestination.SOMLireSommet();

	Carc * NouvelArc;
	NouvelArc = new Carc(SOMSommetDestination.SOMLireSommet());

	if (SOMSommetDepart.SOMAjouteArcPartant(*NouvelArc)) {
		SOMSommetDestination.SOMAjouteArcArrivant(*NouvelArc);
	}
}



void Cgraphe::GRAAfficherGraphe() {

	for (int iCpt = 0; iCpt < iGRANbSommet; iCpt++) {
		cout << ppSOMGRATableauSommets[iCpt]->SOMLireSommet() << ", " << endl;

		cout << "Le sommet " << (ppSOMGRATableauSommets[iCpt])->SOMLireSommet() << " pointe les sommets : ";
		(ppSOMGRATableauSommets[iCpt])->SOMAfficherPartant();
		cout << "Le sommet " << (ppSOMGRATableauSommets[iCpt])->SOMLireSommet() << " est pointe par  : ";
		(ppSOMGRATableauSommets[iCpt])->SOMAfficherNbArrivant();
		cout << " sommet(s)" << endl;
		cout << endl;
	}

	//cout << "destination de l'arc : " << endl;
	//(*ppSOMGRATableauSommets[0]).SOMAfficherPartant();

}



Csommet * Cgraphe::GRALireTableauSommet(unsigned int uiPosition)
{
	//cout << "oui" << (ppSOMGRATableauSommets[0])->SOMLireSommet() << endl;
	return ((ppSOMGRATableauSommets[0]));
}

