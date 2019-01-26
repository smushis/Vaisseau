#ifndef jeuu_h
#define jeuu_h

#include "vaisseau.h"
#include "Kestrel.h"
#include "Federation.h"
#include <iostream>
using namespace std;

class jeu
{
protected:  // on définit dans notre jeu les deux vaisseaux en tant qu'attribut que l'on utilisera
	Kestrel_Cruiser Kestrel;
	Federation_Cruiser Federation;

public: 
	int init(); // fonction permettant l'affectation / affichage des vaisseaux
	int lancer(); // fonction permettant le lancement du combat ! 
};









#endif