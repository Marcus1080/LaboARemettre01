//But : �crire un programme qui lit un entier et qui d�termine et affiche s'il s'agit d'un entier impair. 
//Date : 2020-09-13
//Nom : Marcus Asfaw


#include <iostream>; //Pour inclure la biblioth�que qui nous permet d'utiliser Cin, Cout...

using namespace std; // Pour pas �tre obliger de mettre std:: partout

int main() //La porte d'entr�e du programme 
{


	setlocale(LC_ALL, "");	//Permet de bien voir les caract�re accentu�s


	int nombre1; //D�f�nir le premier chiffre que l'utilisateur doit rentrer 



	cout << "Bonjour! Veuillez entrer un nombre entier: "; // Le premier cout la premi�re chose que l'utilisateur voit qui lui indique
	//															d'entrer un nombre entier
	cin >> nombre1; //Ici on indique que notre variable nombre1 donne le chiffre que l'utilisateure entre

	if (nombre1%2==0) //Ici on a la formule pour trouver si est chiffre est pair ou non le chiffre modulo 2 doit �galer a 0 pour �tre pair
	{
		cout << nombre1 << " est un chiffre pair !"; // Si c'est le cas on lui affiche ce cout qui lui indique que le chiffre entrer est en effet pair

	}
	else //Sinon
	{
		cout << nombre1 << " est un chiffre impair !"; // On affiche ce message qui indique que le chiffre entrer est impair.
	}


	return 0;
}


/*  chiffre				Pair ou Impair				R�sulat							Vrai ou Faux
	51					Impair						est un chiffre impair !			Vrai
	12					Pair						est un chiffre pair !			Vrai
	32					Pair						est un chiffre pair !			Vrai
	5793				Impair						est un chiffre impair !			Vrai


																			*/