#ifndef vaisseauuu_h
#define vaisseauuu_h

#include "vaisseau.h"
#include <iostream>
using namespace std;
class Federation_Cruiser : public vaisseau //R�f�rence au jeu Faster Than Light
{
public:
	void attack_special(vaisseau *cible); //d�finition attack spe
	void afficher(); //d�finition Afficher
	Federation_Cruiser::~Federation_Cruiser(); //d�finition destructeur
	Federation_Cruiser::Federation_Cruiser(); //d�finition constructeur
	void affecter(); // d�finition affecter 
private:
	int nb_special; // attribut pour nb attaque spe
	int dmg_spe; // dmg att spe
};
#endif