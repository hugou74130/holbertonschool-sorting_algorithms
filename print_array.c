// Inclure la bibliothèque d'entrée/sortie standard pour la fonction printf
#include <stdio.h>
// Inclure la bibliothèque standard pour les fonctions de gestion de la mémoire
#include <stdlib.h>

/**
 * print_array - Affiche un tableau d'entiers
 * @array: Le tableau à afficher
 * @size: Nombre d'éléments dans @array
 */
// Fonction pour afficher tous les éléments d'un tableau d'entiers
void print_array(const int *array, size_t size)
{
	// Variable compteur de boucle
	size_t i;

	// Initialiser le compteur de boucle à 0
	i = 0;
	// Boucler à travers le tableau tant qu'il n'est pas NULL et qu'on n'a pas atteint la fin
	while (array && i < size)
	{
		// Afficher une virgule et un espace entre les éléments (sauf avant le premier)
		if (i > 0)
			printf(", ");
		// Afficher l'élément courant comme un entier
		printf("%d", array[i]);
		// Incrémenter le compteur de boucle
		++i;
	}
	// Afficher une nouvelle ligne à la fin
	printf("\n");
	// Fin de la fonction print_array
}
