//Biblioteque iostream permet d'afficher du texte sans ça cpp ne connais pas cout.
#include <iostream>
#include <string>

//une directive qui permet d'utiliser les éléments de la bibliothèque standard comme cout, cin ou string.
using namespace std;

//le commencement du programme tout les programmes commencent par la fonction main.
int main()
{
	cout << "Combien vaut pi ?" << endl;
	double piUtilisateur = -1; //On crée une case mémoire pour stocker un nombre réel
	cin >> piUtilisateur; //et on remplit cette case avec ce qu'ecrit l'utilisateur

	cin.ignore();

	cout << "Quel est votre nom ?" << endl;
	string nomUtilisateur = "Sans nom"; //On crée une case memoire pour stocker un nom
	getline(cin, nomUtilisateur); //on remplit cette case avec toute la ligne que l'utilisateur a écrit

	cout << "Vous vous appeler " << nomUtilisateur << " et vous penser que pi vaut " << piUtilisateur << endl;

	return 0;
}
