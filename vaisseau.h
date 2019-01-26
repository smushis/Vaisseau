#ifndef vaisseauu
#define vaisseauu
#include <string>

using namespace std;
class vaisseau

{
	protected: // on d�finit en protected et non private pour pouvoir utiliser les attributs dans les autres Vaisseaux filles "federation" et "kestrel"
	string m_ID; // nom du vaisseau
	int m_PV;  // d�finition du nombre de pdv
	int m_degat; // d�finition du nombre de dmg basic
	string m_type; // d�finition du type
	

	public:
	vaisseau(); // constructeur pour appel des attributs par d�faut
	vaisseau(string, int, int); //constructeur avec choix des attributs
	vaisseau::~vaisseau(); // destructeur
	void afficher(); // d�finition fonction Afficher
	
	void subir_degats(int degat);  //d�finition fonction subir_degats
	void attack_basic(vaisseau *cible); //d�finition attaque base
	void attack_special(vaisseau *cible); //d�finition attaque spe
	
	int Donne_Pv(); //d�finition retour pdv
	bool etat(); //d�finition etat 
	void affecter();//d�finition affecter
	


};
#endif




