#include "Cgraphe.h"
#include "Carc.h"
#include "Cfichier.h"

#include <cstdlib>
#include <iostream>
using namespace std;


Cgraphe::Cgraphe()
{
	iGRANbSommet = 0;
}


/**
* Créer un graphe a partir d'un nom de fichier
*/
Cgraphe::Cgraphe(char cNomFichier[256])
{
	unsigned int *uiNbArc = new unsigned int();
	unsigned int *uiNbSommet = new unsigned int();
	unsigned int * puiTabNumeroSommet;//; = new unsigned int[3];
	unsigned int ** ppuiTabDestinationArc;
	Cfichier FICFichier1;

	//lire le nb d'arcs et de sommets dans le fichier
	FICFichier1.FICLireNbSomArc(cNomFichier, uiNbArc, uiNbSommet);

	//Allocation tableau des numeros des sommets
	puiTabNumeroSommet = new unsigned int[*uiNbSommet];

	//Allocation tableau des destination des arcs
	ppuiTabDestinationArc = new unsigned int*[*uiNbArc];
	for (unsigned int uiCpt = 0; uiCpt < *uiNbArc; uiCpt++)
	{
		ppuiTabDestinationArc[uiCpt] = new unsigned int[2];
	}

	FICFichier1.FICLireNumeroSommet(cNomFichier, puiTabNumeroSommet, uiNbArc, uiNbSommet);
	FICFichier1.FICLireDestinationArc(cNomFichier, ppuiTabDestinationArc, uiNbArc, uiNbSommet);

	Csommet *SOMNouveauSommet;
	for (unsigned int uiCpt = 0; uiCpt < *uiNbSommet; uiCpt++) 
	{
		iGRANbSommet++;
		ppSOMGRATableauSommets = (Csommet**)realloc(ppSOMGRATableauSommets, iGRANbSommet * sizeof(Csommet));

		SOMNouveauSommet = new Csommet(puiTabNumeroSommet[uiCpt]);
		ppSOMGRATableauSommets[uiCpt] = SOMNouveauSommet;
	}

	// ppuiTabDestinationArc
	int indexDep;
	int indexArr;
	unsigned int i;

	for (unsigned int uiCptLigne = 0; uiCptLigne < *uiNbArc; uiCptLigne++) 
	{
		indexDep = -1;
		indexArr = -1;
		for (unsigned int uiCptCol = 0; uiCptCol < 2; uiCptCol++) 
		{
			for (i = 0; i < iGRANbSommet; i++) 
			{
				if (ppSOMGRATableauSommets[i]->SOMLireSommet() == ppuiTabDestinationArc[uiCptLigne][uiCptCol]) {
					if (indexDep == -1) {
						indexDep = i;
					}
					else {
						indexArr = i;
					}
				}
			}
		}
		// On ajoute l'arc
		if ((indexDep != -1) && (indexArr != -1)) {
			this->GRAAjouterArc(*ppSOMGRATableauSommets[indexDep], *ppSOMGRATableauSommets[indexArr]);
		}
	}

}


/**
* Methode permettant d'ajouter un sommet au graphe
*/
void Cgraphe::GRAAjouterSommet(Csommet & SOMNouveauSommet) {
	//on incremente le nombre de sommet dans le graphe
	iGRANbSommet++;
	//on rajoute une case dans le tableau
	ppSOMGRATableauSommets = (Csommet**)realloc(ppSOMGRATableauSommets, iGRANbSommet * sizeof(Csommet));
	//on cree le pointeur vers le sommet que nous allons ajouter dan le tableau

	ppSOMGRATableauSommets[iGRANbSommet - 1] = &SOMNouveauSommet;
	//return &SOMNouveauSommet;
}


/**
* 
*/
void Cgraphe::GRAAjouterArc(Csommet & SOMSommetDepart, Csommet & SOMSommetDestination) 
{
	//cout << SOMSommetDestination.SOMLireSommet();

	Carc * NouvelArc;
	NouvelArc = new Carc(SOMSommetDestination.SOMLireSommet());

	if (SOMSommetDepart.SOMAjouteArcPartant(*NouvelArc)) {
		SOMSommetDestination.SOMAjouteArcArrivant(*NouvelArc);
	}
}


/**
* Afficher le graphe dans la console
*/
void Cgraphe::GRAAfficherGraphe() 
{
	for (int iCpt = 0; iCpt < iGRANbSommet; iCpt++) {
		//cout << ppSOMGRATableauSommets[iCpt]->SOMLireSommet() << ", " << endl;

		cout << "Le sommet " << (ppSOMGRATableauSommets[iCpt])->SOMLireSommet() << " pointe les sommets : ";
		(ppSOMGRATableauSommets[iCpt])->SOMAfficherPartant();
		cout << "Le sommet " << (ppSOMGRATableauSommets[iCpt])->SOMLireSommet() << " est pointe par  : ";
		(ppSOMGRATableauSommets[iCpt])->SOMAfficherNbArrivant();
		cout << " sommet(s)" << endl;
		cout << endl;
	}

}


/**
* Retourne le tableau a la position donnée
*/
Csommet * Cgraphe::GRALireTableauSommet(unsigned int uiPosition)
{
	return ((ppSOMGRATableauSommets[0]));
}

