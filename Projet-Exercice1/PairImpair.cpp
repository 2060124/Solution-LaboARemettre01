// But : Écrire un programme qui lit un entier et qui determine s'il s'agit d'un nombre pair ou d'un nombre impair
// Auteur : Zogo John Michel
// Date :




#include <iostream>

int premierNombre;



void main()
{
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> premierNombre;
	std::cout << premierNombre << "\n";

	if (premierNombre % 2 != 0)
	{
		std::cout << premierNombre << "est un nombre impair";
		
	}
	else
	{
		std::cout << premierNombre << "est un nombre pair";
	}

	// un nombre pair est un nombre qui diviser par deux donne un nombre entier
	// si un nombre impair est diviser par deux il y aura un reste
	// alors j'ai utiliser le modulo(%) pour dire si le nombre inserer modulo 2 est different de 0 alors c'est un nombre impair
	// par exemple si j'entre le nombre 7 alors le programme fera 7%2 qui me donne 1 alors mon programme doit afficher que c'est un nombre impair
	// si j'entre 8 mon programme fera 8%2 ce qui donne 1 donc il affichera que le nombre est pair
	// de la même facon si j'entre -3 il devrait afficher que c'est un nombre impair
	
	


















}