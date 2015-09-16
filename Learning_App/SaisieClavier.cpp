#include <iostream> // Inclut la bibliothèque iostream (affichage de texte)

using namespace std;

void afficherMenu() {
	cout << "Programme de la saisie clavier" << endl;
	cout << "Quel age avez vous?" << endl;
}

int saisirAge() {
	int ageUtilisateur;
	cin >> ageUtilisateur;
	return ageUtilisateur;
}

//int main()
//{
//	afficherMenu();
//	int age = saisirAge();
//	cout << "Vous avez " << age << " ans" << endl;
//	return 0;
//}

