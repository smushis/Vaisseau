#include "vaisseau.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Kestrel.h"
#include "Federation.h"
#include "Jeu.h"
#include "time.h"
using namespace std;

int jeu::init()
{
	/*vaisseau prems("yolo1", 500, 200);
	vaisseau deux("yolo2", 500, 200);*/

	/*Federation_Cruiser *prems; // pointeur sur vaisseau
	Kestrel_Cruiser *deux;

	prems = new(Federation_Cruiser); //creation pointeur vaisseau/federation/Kestrel
	deux = new(Kestrel_Cruiser);*/
	Federation.affecter(); //affectation des données du vaisseau
	Federation.afficher(); //affichage des données du vaisseau
	Kestrel.affecter();
	Kestrel.afficher();
	return 0;
}
int jeu::lancer()
{
	char yes;
	int temps;
	int pv1 = 1;
	int pv2 = 1;
	bool mort = false;
	int attack = 0;
	srand(time(NULL));  //ini timer
	
	temps = (rand() % 6 + 4); // timer 
	Sleep(temps * 1000); //temps d'attente pour bien voir les données
	cout << endl << "vous allez faire le combat ready?" << endl << endl;

	/*	prems.affecter(200," swagy maggy",25);
	deux.affecter(200, " samson", 25);*/


	while (mort == false) //boucle permettant de continuer à attaquer tant qu'un des deux vaisseaux n'est pas mort
	{
		Sleep(temps * 1000); //temps d'attente avant d'attaquer
		cout << endl << "Attackez!!! (m pour vaisseau1, q pour vaisseau2 " << endl;
		cin >> yes; // pour entrer la touche pour attaquer
		if (yes == 'q') // si la touche est 'q' alors 
		{
			cout << "2 pour attack base, 1 pour attack spe" << endl; // choix entre attaque de base et spe
			cin >> attack; // entrer touche
			if (attack == 1) // si variable = 1, alors attaque spe
			{
				Federation.attack_special(&Kestrel);
				//(*deux).afficher();

				pv2 = Kestrel.Donne_Pv();
				cout <<endl <<  "PDV restants pour le Kestrel:" << pv2 << endl;
				mort = Kestrel.etat();
			}
			else if (attack == 2)
			{
				Federation.attack_basic(&Kestrel);
				//(*deux).afficher();

				pv2 = (Kestrel).Donne_Pv();
				cout << endl << "PDV restants pour le Kestrel: " << pv2 << endl;
				mort = (Kestrel).etat();
			}
		}
		else if (yes == 'm')
		{
			cout << "2 pour attack base, 1 pour attack spe" << endl;
			cin >> attack;
			if (attack == 1) // si variable = 1, alors attaque spe
			{
				Kestrel.attack_special(&Federation);
				//(*prems).afficher();
				pv1 = Kestrel.Donne_Pv();
				cout << "PDV restants pour le Federation:" << pv1 << endl;
				mort = Kestrel.etat();
			}
			else if (attack == 2)
			{
				Kestrel.attack_basic(&Federation);
				//(*prems).afficher();
				pv1 = Kestrel.Donne_Pv();
				cout << "PDV restants pour le Federation:" << pv1 << endl;
				mort = Kestrel.etat();
			}
		}


	}



;
	return 0;
}