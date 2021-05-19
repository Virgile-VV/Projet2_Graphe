//FICHIER CPP DE LA CLASSE FICHIER
#include "Cfichier.h"
#include <iostream>
#include "Cgraphe.h"	//1
#include "Csommet.h"	//2
#include "Carc.h"		//3
#include <fstream>		//gestion de fichier lecture/ecriture
using namespace std;

bool Cfichier::FICLireNbSomArc(char cNomFichier[256],unsigned int *uiNbArc, unsigned int *uiNbSommet)
{
	ifstream FichierEnLecture;
	FichierEnLecture.open(cNomFichier);

	if (FichierEnLecture) 
	{
		char cLettre;
		cLettre = '\0';
		
		// Nombre de sommet ------
		while (cLettre != '=') {
			FichierEnLecture.get(cLettre);
		}
		int iNbSommet;
		FichierEnLecture >> *uiNbSommet;
		cout << "nb de sommet " << *uiNbSommet << endl;
		FichierEnLecture.get(cLettre);

		// Nombre d'arc ------
		while (cLettre != '=') {
			FichierEnLecture.get(cLettre);
		}
		FichierEnLecture >> *uiNbArc;
		cout << "nb darc " << *uiNbArc << endl;

		return true;
	}
	else 
	{
		return false;
	}

}


bool Cfichier::FICLireNumeroSommet(char cNomFichier[256], unsigned int *puiTabNumeroSommet, unsigned int * uiNbArc, unsigned int *uiNbSommet)
{
	ifstream FichierEnLecture;
	FichierEnLecture.open(cNomFichier);

	if (FichierEnLecture)
	{ 
		char cLettre;
		cLettre = '\0';

		// Numero des sommets ------

		while (cLettre != '[') {
			FichierEnLecture.get(cLettre);
		}
		for (int iCpt = 0; iCpt < *uiNbSommet; iCpt++) {
			while (cLettre != '=')
			{
				FichierEnLecture.get(cLettre);
			}
			FichierEnLecture >> puiTabNumeroSommet[iCpt];
			FichierEnLecture.get(cLettre); //pour le retour a la ligne
		}

		return true;
	}
	else 
	{
		return false;
	}
}


bool Cfichier::FICLireDestinationArc(char cNomFichier[256], unsigned int **puiTabDestinationArc, unsigned int * uiNbArc, unsigned int *uiNbSommet)
{
	ifstream FichierEnLecture;
	FichierEnLecture.open(cNomFichier);

	if (FichierEnLecture)
	{
		char cLettre;
		cLettre = '\0';


		// Tableau destination des arcs------ 
		while (cLettre != '[') {
			FichierEnLecture.get(cLettre);
		}
		FichierEnLecture.get(cLettre);
		while (cLettre != '[') {
			FichierEnLecture.get(cLettre);
		}
		for (unsigned int uiCptLig = 0; uiCptLig < *uiNbArc; uiCptLig++) {
			for (unsigned int uiCptCol = 0; uiCptCol < 2; uiCptCol++) {
				FichierEnLecture.get(cLettre);
				while (cLettre != '=') {
					FichierEnLecture.get(cLettre);
				}
				//FichierEnLecture.get(cLettre);
				FichierEnLecture >> puiTabDestinationArc[uiCptLig][uiCptCol];
				cout << uiCptLig << uiCptCol  << " : " << puiTabDestinationArc[uiCptLig][uiCptCol] << "  "  ;
				//cout << "cLettre" << cLettre << endl;
			}
			cout << endl;
		}

		return true;
	}
	else
	{
		return false;
	}
}