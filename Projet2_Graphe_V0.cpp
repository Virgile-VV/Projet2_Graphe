// Projet2_Graphe_V0.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Carc.h"
#include "Csommet.h"
using namespace std;


int main()
{
    std::cout << "Hello World!\n";
	Carc ArcVersS1(1);
	Carc Arc2VersS1(1);
	Carc Arc3VersS3(3);

	Csommet Sommet1(1);
	Csommet Sommet2(2);
	Csommet Sommet3(3);

	Sommet2.SOMAjouteArcPartant(Arc3VersS3);
	Sommet3.SOMAjouteArcArrivant(Arc3VersS3);

	Sommet2.SOMAjouteArcPartant(ArcVersS1);
	Sommet2.SOMAjouteArcPartant(Arc2VersS1);

	cout << endl;
	cout << "Le sommet " << Sommet2.SOMLireSommet() << " pointe les sommets : " ;
	Sommet2.SOMAfficherPartant();
	cout << "Le sommet " << Sommet3.SOMLireSommet() << " est pointe par  : ";
	Sommet3.SOMAfficherNbArrivant();
	cout << " sommet(s)"<<endl; 
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
