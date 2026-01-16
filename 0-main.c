// Inclure la bibliothèque d'entrée/sortie standard pour la fonction printf
#include <stdio.h>
// Inclure la bibliothèque standard pour les fonctions de gestion de la mémoire
#include <stdlib.h>
// Inclure le fichier d'en-tête sort personnalisé
#include "sort.h"

/**
 * main - Point d'entrée
 *
 * Return: Toujours 0
 */
// Fonction principale pour tester l'implémentation du tri à bulles
int main(void)
{
	// Initialiser un tableau d'entiers non triés
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	// Calculer le nombre d'éléments du tableau en utilisant sizeof
	size_t n = sizeof(array) / sizeof(array[0]);

	// Afficher le tableau non trié
	print_array(array, n);
	// Afficher une nouvelle ligne pour le formatage
	printf("\n");
	// Appeler la fonction bubble_sort pour trier le tableau
	bubble_sort(array, n);
	// Afficher une autre nouvelle ligne pour le formatage
	printf("\n");
	// Afficher le tableau trié
	print_array(array, n);
	// Retourner 0 pour indiquer une exécution du programme réussie
	return (0);
	// Fin de la fonction main
}
