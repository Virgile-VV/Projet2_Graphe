// Projet2_Graphe_V0.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cgraphe.h"
#include "Carc.h"
#include "Csommet.h"
using namespace std;


int main()
{

	std::cout << "Hello Virgile!\n";

	/*
	Carc ArcS2VersS1(1);
	Carc IIeArcS2VersS1(1);
	Carc ArcS2VersS3(3);

	Csommet Sommet1(1);
	Csommet Sommet2(2);
	Csommet Sommet3(3);

	if (Sommet2.SOMAjouteArcPartant(ArcS2VersS3)) {
		Sommet3.SOMAjouteArcArrivant(ArcS2VersS3);
	}


	if (Sommet2.SOMAjouteArcPartant(ArcS2VersS1)) {
		Sommet1.SOMAjouteArcArrivant(ArcS2VersS1);
	}

	if (Sommet2.SOMAjouteArcPartant(IIeArcS2VersS1)) {
		Sommet1.SOMAjouteArcArrivant(IIeArcS2VersS1);
	}


	cout << "Le sommet " << Sommet1.SOMLireSommet() << " pointe les sommets : ";
	Sommet1.SOMAfficherPartant();
	cout << "Le sommet " << Sommet1.SOMLireSommet() << " est pointe par  : ";
	Sommet1.SOMAfficherNbArrivant();
	cout << " sommet(s)" << endl;
	cout << endl;

	cout << "Le sommet " << Sommet2.SOMLireSommet() << " pointe les sommets : ";
	Sommet2.SOMAfficherPartant();
	cout << "Le sommet " << Sommet2.SOMLireSommet() << " est pointe par  : ";
	Sommet2.SOMAfficherNbArrivant();
	cout << " sommet(s)" << endl;
	cout << endl;


	cout << "Le sommet " << Sommet3.SOMLireSommet() << " pointe les sommets : ";
	Sommet3.SOMAfficherPartant();
	cout << "Le sommet " << Sommet3.SOMLireSommet() << " est pointe par  : ";
	Sommet3.SOMAfficherNbArrivant();
	cout << " sommet(s)" << endl;
	cout << endl;

	*/

	Cgraphe graphe1;
	Csommet SOMdepart(10);
	Csommet SOMarrive(20);
	Csommet SOMarrive2(30);

	graphe1.GRAAjouterSommet(SOMdepart);
	graphe1.GRAAjouterSommet(SOMarrive);
	graphe1.GRAAjouterSommet(SOMarrive2);

	graphe1.GRAAjouterArc(SOMdepart, SOMarrive);
	graphe1.GRAAjouterArc(SOMdepart, SOMarrive2);

	cout << endl;

	cout << "afficher graphe :" << endl;
	graphe1.GRAAfficherGraphe();
	/*
	cout << "Le sommet " << SOMdep.SOMLireSommet() << " pointe les sommets : ";
	(graphe1.GRALireTableauSommet(0))->SOMAfficherPartant();
	cout << "Le sommet " << SOMdep.SOMLireSommet() << " est pointe par  : ";
	SOMdep.SOMAfficherNbArrivant();
	cout << " sommet(s)" << endl;
	cout << endl;

	cout << "Le sommet " << SOMarr.SOMLireSommet() << " pointe les sommets : ";
	SOMarr.SOMAfficherPartant();
	cout << "Le sommet " << SOMarr.SOMLireSommet() << " est pointe par  : ";
	SOMarr.SOMAfficherNbArrivant();
	cout << " sommet(s)" << endl;
	cout << endl;
	*/

}
