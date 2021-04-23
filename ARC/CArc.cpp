
#include <iostream>
#include "Carc.h"

using namespace std;

CArc::CArc()
{
	uiARCDestination = 0;
}


CArc::CArc(unsigned int uiDestination)
{
	uiARCDestination = uiDestination;
}

CArc::~CArc()
{
}

unsigned int CArc::ARCLireDestination()
{
	return uiARCDestination;
}

void CArc::ARCModifierDestination(unsigned int uiDestination)
{
	uiARCDestination = uiDestination;
}
