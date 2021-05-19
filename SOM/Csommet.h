#pragma once
//FICHIER HEADER DE LA CLASSE ARC
#ifndef _CSOMMET_H_
#define _CSOMMET_H_ 2

#include "Carc.h"


/**
* Classe permettant de gérer des arcs
*/
class Csommet
{

private:
	unsigned int uiSOMNumero;
	Carc ** ppARCSOMArrivant;
	Carc ** ppARCSOMPartant;
	unsigned int uiSOMNbPartant;
	unsigned int uiSOMNbArrivant;

public:
	Csommet(); //ne fait rien
	Csommet(unsigned int uiNumeroSommet);
	//~Csommet();

	//methodes
	bool SOMAjouteArcPartant(Carc &ARCPartant);
	void SOMAjouteArcArrivant(Carc &ARCArrivant);
	unsigned int SOMLireSommet();
	void SOMAfficherPartant(void);
	void SOMAfficherNbArrivant(void);
};

#endif // !_CSOMMET_H_