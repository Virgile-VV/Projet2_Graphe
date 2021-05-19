#pragma once
//FICHIER HEADER DE LA CLASSE ARC
#ifndef _CARC_H_
#define _CARC_H_ 3


/**
* Un arc ne peut pas exister sans sommet
* Un arc est orient� vers un seul sommet,
* si on veut aller de S1 � S2 et de S2 � S1 on devra donc cr�er 2 arcs.
*/
class Carc
{

private:

	unsigned int uiARCDestination;      // le numero de sommet associe avec l' arc

public:

	Carc();
	Carc(unsigned int uiDestination);
	//~Carc();

	unsigned int ARCLireDestination();
	void ARCModifierDestination(unsigned int uiDestination);
};


#endif // !_CARC_H_
