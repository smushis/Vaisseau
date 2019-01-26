#ifndef vaisseauu
#define vaisseauu
#include <string>

using namespace std;
class vaisseau

{
	protected: // on définit en protected et non private pour pouvoir utiliser les attributs dans les autres Vaisseaux filles "federation" et "kestrel"
	string m_ID; // nom du vaisseau
	int m_PV;  // définition du nombre de pdv
	int m_degat; // définition du nombre de dmg basic
	string m_type; // définition du type
	

	public:
	vaisseau(); // constructeur pour appel des attributs par défaut
	vaisseau(string, int, int); //constructeur avec choix des attributs
	vaisseau::~vaisseau(); // destructeur
	void afficher(); // définition fonction Afficher
	
	void subir_degats(int degat);  //définition fonction subir_degats
	void attack_basic(vaisseau *cible); //définition attaque base
	void attack_special(vaisseau *cible); //définition attaque spe
	
	int Donne_Pv(); //définition retour pdv
	bool etat(); //définition etat 
	void affecter();//définition affecter
	


};
#endif




