// Inclure le fichier d'en-tête sort avec les déclarations de fonctions et structures
#include "sort.h"

/**
 * selection_sort - Trie un tableau d'entiers
 * en ordre croissant en utilisant le tri par sélection
 * @array: Pointeur vers le tableau à trier
 * @size: Taille du tableau
 *
 * Description: Utilise l'algorithme de tri par sélection.
 * Affiche le tableau après chaque échange.
 */
// Fonction principale de tri par sélection qui prend un tableau et sa taille
void selection_sort(int *array, size_t size)
{
	// Compteur de boucle pour l'itération externe
	size_t i;
	// Compteur de boucle pour l'itération interne
	size_t j;
	// Variable pour stocker l'index de l'élément minimum
	size_t min_idx;
	// Variable temporaire pour l'échange d'éléments
	int temp;

	// Vérifier si le tableau est NULL ou a moins de 2 éléments, retourner si c'est le cas
	if (array == NULL || size < 2)
		return;

	// Boucle externe: itérer à travers chaque position du premier au second-dernier
	for (i = 0; i < size - 1; i++)
	{
		// Initialiser min_idx comme la position courante
		min_idx = i;

		// Boucle interne: trouver l'élément minimum dans la portion restante non triée
		for (j = i + 1; j < size; j++)
		{
			// Mettre à jour min_idx si nous trouvons un élément plus petit
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		// Vérifier si l'élément minimum n'est pas déjà à la position i
		if (min_idx != i)
		{
			// Échanger l'élément courant avec l'élément minimum
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			// Afficher le tableau après l'échange pour montrer la progression
			print_array(array, size);
		}
	}
	// Fin de la fonction selection_sort
}
