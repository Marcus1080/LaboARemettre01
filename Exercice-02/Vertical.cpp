//But : Écrire un programme qui prend comme un entrée un nombre de cinq chiffres le programme vérifie qu'il a bien cinq chiffres
				//dans le nombre. Puis il affiche le nombre verticalement le premier chiffre sur la première ligne,
//				le deuxième sur la deuxième ligne ainsi de suite
//Date : 2020-09-13
//Auteur : Marcus Asfaw

#include <iostream>;		//Pour inclure la bibliothèque qui nous permet d'utiliser les cout et les cin ...

using namespace std;	//FR : Pour pas être obliger d'écrire std:: a chaque cout et cin ...

int main() //La porte d'entrée du programme 
{


	setlocale(LC_ALL, ""); //Permet de bien voir les caractères accentués

	 

	int nombre2; //FR : Défénir la variable pour le nombre  a cinq chiffres

	

	cout << "Veuillez entrer un nombre a cinq chiffres:  "; //FR : Le premier message que lÈutilisateur voit a l'écran
	cin >> nombre2; //La variable qui va être le nombre a cinq chiffres


	if (nombre2 > 99999)//Ici on indique que si le no,mbre a plus de cinq chiffre 
	{
		cout << nombre2 << " ce nombre ne contient pas cinq chiffres. " << endl;//On affiche ce message 
		system("PAUSE");//Prend une pause pour que l'utilisateur puisse lire le message
	}
	// KM : Il manque un else ici
	if (nombre2 < 10000) // Ici on indique que si l'utilisateur entre un nombre a moins de cinq chiffres
	{
		cout << nombre2 << " Ce nombre ne contient pas cinq chiffres. " << endl; // On affiche alors ce message a l'écran
		system("PAUSE");
	} 
	else //Sinon ....
	{
	 
		cout <<" 1. " << nombre2 / 10000<< endl; // FR : On affiche les chiffres 1 a 5 pour tout numérotés
		nombre2 = nombre2 % 10000; // FR : On rajoute ceci pour pas voir les chiffres avant le numéro qu'on veux
		cout <<" 2. " << nombre2 / 1000 << endl;//On descend en allant de 10000 jusqu'a 1
		nombre2 = nombre2 % 1000; // Répète la même commande pour chaque ligne mais en enlevant un 0 a chaque fois
		cout <<" 3. " << nombre2 / 100 << endl;// 100..
		nombre2 = nombre2 % 100; // descend encore
		cout << " 4. " << nombre2 / 10 << endl; //10..
		nombre2 = nombre2 % 10; // descend encore
		cout << " 5. " << nombre2 / 1 << endl; //Jusqu'au dernier qui est 1 
		nombre2 = nombre2 % 1; // et la même commande une dernière fois

	}



}



/*	Chiffre :				Résultat qu'on devrait obtenir :						Résulat obtenue	:					Vrai/Faux :

	12345					1. 1, 2. 2, 3. 3, 4. 4, 5. 5							1. 1, 2. 2, 3. 3, 4. 4, 5. 5			Vrai
							
	1234567					Ce nombre ne contient pas cinq chiffres				Ce nombre ne contient pas cinq chiffres		Vrai

	56						Ce nombre ne contient pas cinq chiffres				Ce nombre ne contient pas cinq chiffres		Vrai

	45454					1. 4, 2. 5, 3. 4, 4. 5, 5. 4						1. 4, 2. 5, 3. 4, 4. 5, 5. 4				Vrai




																																		*/
