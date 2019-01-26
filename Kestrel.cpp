#include "vaisseau.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Kestrel.h"
#include "time.h"
using namespace std;

void Kestrel_Cruiser :: attack_special(vaisseau *cible) // fonction attaque spe avec vaisseau cible
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
			cout << "vous avez inflige 50pts de dmg avec votre bombe"<<endl;
		}
		else if (luck == 2) // le vaisseau rate son tir
		{
			cout << "le vaisseau adverse a esquive votre tir"<<endl;
		}

	}
	else // si il n'y a pas d'attaque spécial, on indique au joueur
		cout << "vous n'avez plus d'attaque spécial" << endl;
}

void Kestrel_Cruiser::afficher() // fonction permettant de résumer simplement 
{
	cout << m_ID << ",  voici ton nom " << endl; // affichage nom
	if (m_PV == 0) // test  pour savoir si le vaisseau est mort
		cout << "t'es mouru" << endl;
	else
	{
		cout << m_PV << ",   voici tes pdv" << endl;
		cout << m_degat << ", voici les degats de ton laser basique" << endl;
		cout << "ton vaisseau a comme arme la breach bomb avec " << dmg_spe << "de degats" << endl;
		cout << " vous avez " << nb_special << " bombes" << endl;
	}
}
Kestrel_Cruiser::~Kestrel_Cruiser() //creation du destructeur
{

}
Kestrel_Cruiser::Kestrel_Cruiser() //creation du constructeur avec initialisation
{
	m_ID = "test";
	m_PV = 200;
	m_degat = 25;
	m_type = "Federation";
	nb_special = 3;
	dmg_spe = 75;
}
void Kestrel_Cruiser::affecter() // fonction qui permet de donner les valeurs au vaisseau
{
	string txt;
	int nb_pv, nb_degat, spe;
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