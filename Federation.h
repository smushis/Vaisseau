#ifndef vaisseauuu_h
#define vaisseauuu_h

#include "vaisseau.h"
#include <iostream>
using namespace std;
class Federation_Cruiser : public vaisseau //Référence au jeu Faster Than Light
{
public:
	void attack_special(vaisseau *cible); //définition attack spe
	void afficher(); //définition Afficher
	Federation_Cruiser::~Federation_Cruiser(); //définition destructeur
	Federation_Cruiser::Federation_Cruiser(); //définition constructeur
	void affecter(); // définition affecter 
private:
	int nb_special; // attribut pour nb attaque spe
	int dmg_spe; // dmg att spe
};
#endif