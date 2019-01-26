

#include "vaisseau.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Kestrel.h"
#include "Federation.h"


using namespace std;

void vaisseau::afficher(void) //permet d'afficher les caractéristiques du vaisseau
{
	
	cout << m_ID << ",  voici ton nom "<<endl;
	if (m_PV == 0)
		cout << "t'es mouru"<< endl;
	else 
		cout << m_PV << ",   voici tes pdv" << endl;
}



void vaisseau::subir_degats(int degat)
{
	
	m_PV -= degat;
	//On enlève le nombre de dégâts reçus à la vie du personnage

	if (m_PV < 0) //Pour éviter d'avoir une vie négative
	{
		m_PV = 0; //On met la vie à 0 (cela veut dire mort)
	}

}

void vaisseau::attack_basic(vaisseau *cible) // fonction attack avec choix du vaisseau cible
{
	cible->subir_degats(m_degat); // (*cible).subir_degats(degat)
	//appel de la fonction subir_degat, avec affectation cible
	
}
void vaisseau::attack_special(vaisseau *cible) // fonction attack avec choix du vaisseau cible
{


}


int vaisseau::Donne_Pv() // cette fonction permet de retourner les pdv du vaisseau qui se situent dans le private de la classe
{
	return m_PV;
}

bool vaisseau::etat() //fonction pour savoir si le vaisseau est mort
{
	bool mort;
	if (m_PV == 0) // si le vaisseau est n'a plus de pdv, on dit qu'il est mort
	{            // la condition nous permet de faire le "while" dans le main pour la boucle pour attaquer
		mort = true;

	}
	else
		mort = false;
	return mort;
}
vaisseau::vaisseau(string txt, int nb_pv, int nb_degat) //creation du constructeur avec surcharge
{
	m_ID= txt;                  // on définit ses caractéristiques avec la fonction affecter
	m_PV= nb_pv;                //nom, pdv, degat de l'arme, type de vaisseau
	m_degat= nb_degat;
	m_type = "Vaisseau";
}
vaisseau::vaisseau() //creation du constructeur avec initialisation
{
	m_ID = "test";
	m_PV =200;
	m_degat = 25;
	m_type = "Vaisseau";
}
vaisseau::~vaisseau() //creation du destructeur
{

}
void vaisseau::affecter() // fonction qui permet de donner les valeurs au vaisseau
{
	string txt;
	int nb_pv, nb_degat;
	cout << "file ton blaze" << endl;
	cin >>  txt;
	cout << "file tes pdv" << endl;
	cin >> nb_pv;
	cout << "file tes degats" << endl;
	cin >> nb_degat;

	m_ID = txt;
	m_PV = nb_pv;
	m_degat = nb_degat;
}
