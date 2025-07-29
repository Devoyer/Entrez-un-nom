#include <iostream>

using namespace std;

int main() //Initialise la fonction principale
{
	string nom; //Initialise la variable "nom"
	int age_du_nom; //Initialise la variable "age_du_nom"
	int age_autre_personne; //Initialise la variable "age_autre_personne
	bool nom_non_normal_deja_affiche = false;
	bool phrase_age_divers = false;
	int intelligence;
	bool phrase_intelligence_divers = false;
	string nom_de_famille;

	cout << "Entrez un nom : "; //Demande un nom

	cin >> nom; //Entrée pour que l'utilisateur puisse écrire un nom

	if (nom == "Augustin") { //Vérifie si le nom correspond à "Augustin"
		cout << "Le nom est celui d'une petite pute" << endl; //Si c'est le cas écrire ça
		nom_non_normal_deja_affiche = true;
	}

	if (nom == "Jakob") {
		cout << "Bravo, tu as presque participe a l'extermination d'une population religieuses mon khouya" << endl;
		nom_non_normal_deja_affiche = true;
	}

	if (nom == "Joseph") {
		cout << "Evite d'etre russe stp" << endl;
		nom_non_normal_deja_affiche = true;
	}

	if (!nom_non_normal_deja_affiche) {
		cout << "Le nom est : " << nom << endl;
	}

	cout << "Entrez un nom de famille : ";

	cin >> nom_de_famille;

	cout << "Entrez un age : ";

	cin >> age_du_nom;

	cout << "Entrez un age d'une autre personne : ";

	cin >> age_autre_personne;

	if (nom == "Augustin" && age_du_nom - age_autre_personne <=18) {
		cout << "L'age est parfait pour Augustin " << nom_de_famille << endl;
		phrase_age_divers = true;
	}

	if (nom == "Jakob" && age_autre_personne == 89 && age_du_nom == 18) {
		cout << "Virus injecte ;)" << endl;
		phrase_age_divers = true;
	}

	if (nom == "Joseph" && age_du_nom == 19 && age_autre_personne == 53) {
		cout << "Si tu es russe, tu as surement ecrase des gens maintenant" << endl;
		phrase_age_divers = true;
	}

	if (!phrase_age_divers) {
		cout <<  nom << " " << nom_de_famille << " n'est pas quelqu'un de bizarre alors l'age ne sert a rien " << endl;
	}

	cout << "Entrez une estimation de l'intelligence du nom choisi : ";

	cin >> intelligence;

	if (nom == "Augustin" && intelligence >= 5) {
		cout << "Tu mens" << endl;
		phrase_intelligence_divers = true;
	}

	if (nom == "Jakob" && intelligence >= 1) {
		cout << "Alors, soit tu sais de qui on parle et tu fais peur, soit on est desole" << endl;
		phrase_intelligence_divers = true;
	}

	if (nom == "Djulian" && intelligence == 3945) {
		cout << "Houla" << endl;
		phrase_intelligence_divers = true;
	}

	if (!phrase_intelligence_divers) {
		cout << "C'est peut-etre vrai, peut-etre faux, dans tous les cas on s'en fout" << endl;
	}
	cout << "Appuyez sur une touche pour continuer..." << endl;

	cin.ignore();
	cin.get();
}

