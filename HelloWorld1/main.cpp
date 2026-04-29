//Biblioteque iostream permet d'afficher du texte sans ça cpp ne connais pas cout.
#include <iostream>


//une directive qui permet d'utiliser les éléments de la bibliothèque standard comme cout, cin ou string.
using namespace std;

//le commencement du programme tout les programmes commencent par la fonction main.
int main()
{
	//variable avec nom et valeur
	string nomUtilisateur = "";
	int ageUtilisateur = 0;
	
	//permet d'afficher du texte 
	cout << "comment appeler vous ?" << endl;

	//cin permet à l'utilisateur de mentionner son nom d'utilisateur
	cin >> nomUtilisateur;

	cout << "Votre age ?" << endl;
	//permet à l'utilisateur de mentionner son âge
	cin >> ageUtilisateur;

	//ensuite, sur cette ligne, le programme récupère ce que l'utilisateur a mentionné : son nom et son âge 
	cout << "Heureux de vous rencontrer " << nomUtilisateur << " vous avez " << ageUtilisateur << " ans" << endl;

	return 0;
}
