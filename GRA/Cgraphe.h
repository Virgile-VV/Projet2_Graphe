#pragma once


#ifndef _CGRAPHE_H_
#define _CGRAPHE_H_

#include "Csommet.h"

class Cgraphe {
private:
	int iGRANbSommet;
	//tableau qui contient des pointeurs vers des Sommets
	Csommet** ppSOMGRATableauSommets;


public:

	Cgraphe();

	void GRAAjouterArc(Csommet & SOMSommetDestination, Csommet & SOMSommetDepart);
	void GRAAjouterSommet(Csommet & SOMNouveauSommet);
	
	void GRASupprimerSommet(Csommet* pSOMSommet); 

	void GRAAfficherGraphe();
	Csommet* GRALireTableauSommet(unsigned int uiPosition);


};

#endif // !_CGRAPHE_H_
