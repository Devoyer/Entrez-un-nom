#include <iostream>

using namespace std;

int main() //Initialise la fonction principale
{
	string nom; //Initialise la variable "nom"

	cout << "Entrez un nom : "; //Demande un nom

	cin >> nom; //Entrée pour que l'utilisateur puisse écrire un nom

	if (nom == "Augustin" || nom == "Djulian") { //Vérifie si le nom correspond à "Augustin"
		cout << "Le nom est celui d'une petite pute" << endl; //Si c'est le cas écrire ça
	}
	else {
		cout << "Le nom est : " << nom << endl; //Sinon écrire normalement
	}
	cout << "Appuyez sur une touche pour continuer..." << endl;

	cin.ignore();
	cin.get();
}

