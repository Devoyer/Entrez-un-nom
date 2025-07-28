#include <iostream>

using namespace std;

int main() //Initialise la fonction principale
{
	string nom; //Initialise la variable "nom"
	int age_du_nom; //Initialise la variable "age_du_nom"
	int age_autre_personne; //Initialise la variable "age_autre_personne

	cout << "Entrez un nom : "; //Demande un nom

	cin >> nom; //Entrée pour que l'utilisateur puisse écrire un nom

	if (nom == "Augustin" || nom == "Djulian") { //Vérifie si le nom correspond à "Augustin"
		cout << "Le nom est celui d'une petite pute" << endl; //Si c'est le cas écrire ça
	}
	else {
		cout << "Le nom est : " << nom << endl; //Sinon écrire normalement
	}

	cout << "Entrez un age :";

	cin >> age_du_nom;

	cout << "Entrez un age d une autre personne : ";

	cin >> age_autre_personne;

	if (nom == "Augustin" || age_du_nom - age_autre_personne <=18) {
		cout << "L age est parfait pour Augustin" << endl;
	}
	else {
		cout << "Le nom mit n est pas associe a une personne bizarre alors l age ne sert a rien";
	}

	cout << "Appuyez sur une touche pour continuer..." << endl;

	cin.ignore();
	cin.get();
}

