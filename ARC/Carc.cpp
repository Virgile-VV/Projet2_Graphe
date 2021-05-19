#include <iostream>
#include "Carc.h"

using namespace std;

Carc::Carc()
{
	uiARCDestination = 0;
}


Carc::Carc(unsigned int uiDestination)
{
	uiARCDestination = uiDestination;
}


//Carc::~Carc()
//{
//}


unsigned int Carc::ARCLireDestination()
{
	return uiARCDestination;
}



void Carc::ARCModifierDestination(unsigned int uiDestination)
{
	uiARCDestination = uiDestination;
}