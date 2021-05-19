#pragma once
//FICHIER HEADER DE LA CLASSE FICHIER 
#ifndef _CFICHIER_H_
#define _CFICHIER_H_ 4


/**
* Classe permettant de creer un graphe a aprtir d'un fichier texte
*/
class Cfichier 
{

public:

	
	bool FICLireNbSomArc(char cNomFichier[256], unsigned int *uiNbArc, unsigned int *uiNbSommet);
	bool FICLireNumeroSommet(char cNomFichier[256], unsigned int *puiTabNumeroSommet, unsigned int * uiNbArc, unsigned int *uiNbSommet);
	bool FICLireDestinationArc(char NomFichier[256], unsigned int **puiTabDestinationArc, unsigned int * uiNbArc, unsigned int *uiNbSommet);
};

#endif // !_CFICHIER_H_
