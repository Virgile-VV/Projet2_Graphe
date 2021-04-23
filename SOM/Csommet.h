#pragma once

#ifndef _CSOMMET_H_
#define _CSOMMET_H_

#include "Carc.h"

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

	//m�thodes
	void SOMAjouteArcPartant(Carc &ARCPartant);
	void SOMAjouteArcArrivant(Carc &ARCArrivant);
	unsigned int SOMLireSommet();
	void SOMAfficherPartant(void);
};

#endif // !_CSOMMET_H_
