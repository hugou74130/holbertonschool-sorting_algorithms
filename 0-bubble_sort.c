// Inclure le fichier d'en-tête sort avec les déclarations de fonctions et structures
#include "sort.h"

/**
 * bubble_sort - Trie un tableau d'entiers
 * en ordre croissant en utilisant le tri à bulles
 * @array: Pointeur vers le tableau
 * @size: Taille du tableau
 *
 * Description: Utilise l'algorithme de tri à bulles.
 * Affiche le tableau après chaque échange.
 * break
 */
// Fonction principale de tri à bulles qui prend un tableau et sa taille
void bubble_sort(int *array, size_t size)
{
	// Déclarer les variables compteur de boucle et une variable temporaire pour l'échange
	size_t i, j;
	// Variable temporaire pour l'échange d'éléments
	int temp;
	// Drapeau pour suivre si un échange s'est produit lors de la passe courante
	int swapped;

	// Vérifier si le tableau est NULL ou a moins de 2 éléments, retourner si c'est le cas
	if (array == NULL || size < 2)
		return;

	// Boucle externe: itérer à travers chaque élément du premier au second-dernier
	for (i = 0; i < size - 1; i++)
	{
		// Réinitialiser le drapeau swapped au début de chaque passe
		swapped = 0;
		// Boucle interne: comparer les éléments adjacents et échanger si nécessaire
		for (j = 0; j < size - 1 - i; j++)
		{
			// Comparer l'élément courant avec l'élément suivant
			if (array[j] > array[j + 1])
			{
				// Échanger les deux éléments en utilisant la variable temp
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				// Afficher le tableau après chaque échange pour montrer la progression
				print_array(array, size);
				// Marquer qu'un échange s'est produit
				swapped = 1;
			}
		}
		// Si aucun échange ne s'est produit dans cette passe, le tableau est trié, donc quitter
		if (swapped == 0)
			break;
	}
	// Fin de la fonction bubble_sort
}
