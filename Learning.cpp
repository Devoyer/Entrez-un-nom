#include <iostream>

using namespace std;

int main() //Initialise la fonction principale
{
	string nom; //Initialise la variable "nom"

	cout << "Entrez un nom : "; //Demande un nom

	cin >> nom; //Entr�e pour que l'utilisateur puisse �crire un nom

	if (nom == "Augustin" || nom == "Djulian") { //V�rifie si le nom correspond � "Augustin"
		cout << "Le nom est celui d'une petite pute" << endl; //Si c'est le cas �crire �a
	}
	else {
		cout << "Le nom est : " << nom << endl; //Sinon �crire normalement
	}
	cout << "Appuyez sur une touche pour continuer..." << endl;

	cin.ignore();
	cin.get();
}

