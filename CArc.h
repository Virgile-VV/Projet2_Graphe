#ifndef CARC_H
#define CARC_H



#include "CException.h"
#pragma once
class CArc
{
private:
	unsigned int uiARCDestination;      // le numero de sommet associe avec l' arc
public:

	CArc();

	CArc(unsigned int uiDestination);

	~CArc();

	unsigned int ARCLireDestination();

	void ARCModifierDestination(unsigned int uiDestination);
};

#endif // !CARC_H