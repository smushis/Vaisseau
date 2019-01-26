#ifndef vaisseauu_h
#define vaisseauu_h

#include "vaisseau.h"
#include <iostream>
using namespace std;
class Kestrel_Cruiser : public vaisseau //Référence au jeu Faster Than Light
{
public:
	void attack_special(vaisseau *cible); //
	void afficher();
	Kestrel_Cruiser::~Kestrel_Cruiser();
	Kestrel_Cruiser::Kestrel_Cruiser();
	void affecter(); //donner valeur vaisseau
private:
	int nb_special; // attribut pour nb attaque spe
	int dmg_spe;  // dmg att spe
};
#endif