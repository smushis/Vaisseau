#include "vaisseau.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Federation.h"
#include "time.h"
using namespace std;

void Federation_Cruiser::attack_special(vaisseau *cible)
{
	srand(time(NULL)); // ini rand
	int luck = 0;
	luck = rand() % 2 + 1;     // soit 1,soit 2
	
	if (nb_special >= 0) // test pour limiter le nombre d'attaque spécial
	{
		nb_special--; // Décrémentation attack_spe
		if (luck == 1) // test pour le 50/50 ou qui veut gagner des millions
		{
			cible->subir_degats(dmg_spe); // fonction pour infliger dégats
			cout << "vous avez inflige " << dmg_spe<< "pts de dmg avec votre canon" << endl;  // le tir a réussi
		}
		else if (luck == 2) // le vaisseau rate son tir
		{
			cout << "le vaisseau adverse a esquive votre tir" << endl;
		}
	}
	else // si il n'y a pas d'attaque spécial, on indique au joueur
	{
		cout << "vous n'avez plus d'attaque special" << endl;
	}	
}

void Federation_Cruiser::afficher() // fonction permettant de résumer simplement 
{
	cout << m_ID << ",  voici ton nom " << endl; // affichage nom
	if (m_PV == 0) // test  pour savoir si le vaisseau est mort
		cout << "t'es mouru" << endl;
	else //affichage des caractéristiques
	{
		cout <<endl <<  m_PV << ",   voici tes pdv" << endl;
		cout << m_degat << ", voici les degats de ton laser basique" << endl;
		cout << "ton vaisseau a comme arme le Hull Beam qui fait "<<dmg_spe << "de degats" << endl << endl;
		cout << " vous avez " << nb_special << " beams" << endl;
	}
}
Federation_Cruiser::~Federation_Cruiser() //creation du destructeur
{

}

Federation_Cruiser::Federation_Cruiser() //creation du constructeur avec initialisation
{
	m_ID = "test";
	m_PV = 200;
	m_degat = 25;
	m_type = "Federation";
	nb_special = 3;
	dmg_spe = 100;
}
void Federation_Cruiser :: affecter() // fonction qui permet de donner les valeurs au vaisseau
{
	string txt;
	int nb_pv, nb_degat,spe;
	cout << "file ton blaze" << endl;
	cin >> txt;
	cout << "file tes pdv" << endl;
	cin >> nb_pv;
	cout << "file tes degats" << endl;
	cin >> nb_degat;
	cout << "file tes dmg speciaux" << endl;
	cin >> spe;
	m_ID = txt;
	m_PV = nb_pv;
	m_degat = nb_degat;
	dmg_spe = spe;
}
