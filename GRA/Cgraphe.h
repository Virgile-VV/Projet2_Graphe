#pragma once
//FICHIER HEADER DE LA CLASSE GRAPHE
#ifndef _CGRAPHE_H_
#define _CGRAPHE_H_ 1

#include "Csommet.h"


/**
* Classe permettant de faire des operations sur un graphe
*/
class Cgraphe {
private:
	int iGRANbSommet;
	//tableau qui contient des pointeurs vers des Sommets
	Csommet** ppSOMGRATableauSommets;


public:

	Cgraphe();
	Cgraphe(char cNomFichier[256]);

	void GRAAjouterArc(Csommet & SOMSommetDestination, Csommet & SOMSommetDepart);
	void GRAAjouterSommet(Csommet & SOMNouveauSommet);
	void GRAAfficherGraphe();
	Csommet* GRALireTableauSommet(unsigned int uiPosition);


};

#endif // !_CGRAPHE_H_
