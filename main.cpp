#include "vaisseau.h"
#include <iostream>
#include <string>
#include "Windows.h"
#include "time.h"
#include <cstdlib>
#include "Kestrel.h"
#include "Federation.h"
#include "Jeu.h"

using namespace std;

int main(void)
{
	jeu gamu; // cr�ation de la variable de classe jeu
	gamu.init(); //appel de la fonction init propre � la classe jeu
	gamu.lancer(); //appel de la fonction lancer propre � la classe jeu
	return 0;
	
}