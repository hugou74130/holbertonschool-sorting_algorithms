// Inclure la bibliothèque d'entrée/sortie standard pour la fonction printf
#include <stdio.h>
// Inclure le fichier d'en-tête sort avec la définition de la structure listint_t
#include "sort.h"

/**
 * print_list - Affiche une liste d'entiers
 *
 * @list: La liste à afficher
 */
// Fonction pour afficher tous les nœuds d'une liste chaînée doublement
void print_list(const listint_t *list)
{
	// Variable compteur de boucle
	int i;

	// Initialiser le compteur de boucle à 0
	i = 0;
	// Boucler à travers la liste tant que le nœud courant n'est pas NULL
	while (list)
	{
		// Afficher une virgule et un espace entre les éléments (sauf avant le premier)
		if (i > 0)
			printf(", ");
		// Afficher la valeur du nœud courant (entier)
		printf("%d", list->n);
		// Incrémenter le compteur de boucle
		++i;
		// Passer au nœud suivant de la liste
		list = list->next;
	}
	// Afficher une nouvelle ligne à la fin
	printf("\n");
	// Fin de la fonction print_list
}
