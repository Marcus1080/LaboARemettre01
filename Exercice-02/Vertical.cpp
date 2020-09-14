//But : �crire un programme qui prend comme un entr�e un nombre de cinq chiffres le programme v�rifie qu'il a bien cinq chiffres
				//dans le nombre. Puis il affiche le nombre verticalement le premier chiffre sur la premi�re ligne,
//				le deuxi�me sur la deuxi�me ligne ainsi de suite
//Date : 2020-09-13
//Auteur : Marcus Asfaw

#include <iostream>;		//Pour inclure la biblioth�que qui nous permet d'utiliser les cout et les cin ...

using namespace std;	//Pour pas �tre obliger d'�crire std:: a chaque cout et cin ...

int main() //La porte d'entr�e du programme 
{


	setlocale(LC_ALL, ""); //Permet de bien voir les caract�res accentu�s

	 

	int nombre2; //D�f�nir la variable pour le nombre  a cinq chiffres

	

	cout << "Veuillez entrer un nombre a cinq chiffres:  "; //Le premier message que l�utilisateur voit a l'�cran
	cin >> nombre2; //La variable qui va �tre le nombre a cinq chiffres


	if (nombre2 > 99999)//Ici on indique que si le no,mbre a plus de cinq chiffre 
	{
		cout << nombre2 << " ce nombre ne contient pas cinq chiffres. " << endl;//On affiche ce message 
		system("PAUSE");//Prend une pause pour que l'utilisateur puisse lire le message
	}
	if (nombre2 < 10000) // Ici on indique que si l'utilisateur entre un nombre a moins de cinq chiffres
	{
		cout << nombre2 << " Ce nombre ne contient pas cinq chiffres. " << endl; // On affiche alors ce message a l'�cran
		system("PAUSE");
	} 
	else //Sinon ....
	{
	 
		cout <<" 1. " << nombre2 / 10000<< endl; //On affiche les chiffres 1 a 5 pour tout num�rot�s
		nombre2 = nombre2 % 10000; // On rajoute ceci pour pas voir les chiffres avant le num�ro qu'on veux
		cout <<" 2. " << nombre2 / 1000 << endl;//On descend en allant de 10000 jusqu'a 1
		nombre2 = nombre2 % 1000; // R�p�te la m�me commande pour chaque ligne mais en enlevant un 0 a chaque fois
		cout <<" 3. " << nombre2 / 100 << endl;// 100..
		nombre2 = nombre2 % 100; // descend encore
		cout << " 4. " << nombre2 / 10 << endl; //10..
		nombre2 = nombre2 % 10; // descend encore
		cout << " 5. " << nombre2 / 1 << endl; //Jusqu'au dernier qui est 1 
		nombre2 = nombre2 % 1; // et la m�me commande une derni�re fois

	}



}



/*	Chiffre :				R�sultat qu'on devrait obtenir :						R�sulat obtenue	:					Vrai/Faux :

	12345					1. 1, 2. 2, 3. 3, 4. 4, 5. 5							1. 1, 2. 2, 3. 3, 4. 4, 5. 5			Vrai
							
	1234567					Ce nombre ne contient pas cinq chiffres				Ce nombre ne contient pas cinq chiffres		Vrai

	56						Ce nombre ne contient pas cinq chiffres				Ce nombre ne contient pas cinq chiffres		Vrai

	45454					1. 4, 2. 5, 3. 4, 4. 5, 5. 4						1. 4, 2. 5, 3. 4, 4. 5, 5. 4				Vrai




																																		*/