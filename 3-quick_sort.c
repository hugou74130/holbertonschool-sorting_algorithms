// Inclure le fichier d'en-tête sort avec les déclarations de fonctions et structures
#include "sort.h"

/**
 * lomuto_partition - Partitionne un tableau en utilisant le schéma de partition Lomuto
 * @array: Tableau à partitionner
 * @low: Index de départ
 * @high: Index de fin
 * @size: Taille du tableau complet (pour l'affichage)
 *
 * Return: Index du pivot après la partition
 */
// Fonction auxiliaire pour partitionner le tableau en utilisant le schéma Lomuto
int lomuto_partition(int *array, int low, int high, size_t size)
{
	// Définir le pivot comme le dernier élément de la partition
	int pivot = array[high];
	// Initialiser i comme une position avant le début (pour le point d'insertion)
	int i = low - 1;
	// Variable compteur de boucle
	int j;
	// Variable temporaire pour l'échange d'éléments
	int temp;

	// Itérer à travers les éléments de low à high-1
	for (j = low; j < high; j++)
	{
		// Si l'élément courant est inférieur au pivot, le déplacer vers la partition gauche
		if (array[j] < pivot)
		{
			// Incrémenter i pour marquer la prochaine position d'insertion
			i++;
			// Vérifier que les indices sont différents pour éviter les opérations inutiles
			if (i != j)
			{
				// Échanger uniquement si les valeurs sont différentes (optimisation)
				if (array[i] != array[j])
				{
					// Échanger les éléments aux positions i et j
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					// Afficher le tableau après l'échange pour montrer la progression
					print_array(array, size);
				}
			}
		}
	}
	// Placer le pivot à sa position correcte uniquement si nécessaire
	if (i + 1 != high)
	{
		// Échanger uniquement si les valeurs sont différentes (optimisation)
		if (array[i + 1] != array[high])
		{
			// Échanger l'élément pivot avec l'élément à la position i+1
			temp = array[i + 1];
			array[i + 1] = array[high];
			array[high] = temp;
			// Afficher le tableau après l'échange final pour montrer la progression
			print_array(array, size);
		}
	}
	// Retourner la position finale du pivot
	return (i + 1);
}

/**
 * quick_sort_recursive - Trie récursivement un tableau
 * @array: Tableau à trier
 * @low: Index de départ
 * @high: Index de fin
 * @size: Taille du tableau complet (pour l'affichage)
 */
// Fonction auxiliaire récursive pour l'algorithme de tri rapide
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	// Cas de base: traiter uniquement si low est inférieur à high (au moins 2 éléments)
	if (low < high)
	{
		// Partitionner le tableau et obtenir la position du pivot
		int pivot = lomuto_partition(array, low, high, size);

		// Trier récursivement la partition gauche (éléments avant le pivot)
		quick_sort_recursive(array, low, pivot - 1, size);
		// Trier récursivement la partition droite (éléments après le pivot)
		quick_sort_recursive(array, pivot + 1, high, size);
	}
	// Fin de la fonction quick_sort_recursive
}

/**
 * quick_sort - Trie un tableau d'entiers en ordre croissant
 * @array: Tableau à trier
 * @size: Taille du tableau
 */
// Fonction principale de tri rapide qui initialise le processus de tri récursif
void quick_sort(int *array, size_t size)
{
	// Vérifier si le tableau est NULL ou a moins de 2 éléments, retourner si c'est le cas
	if (!array || size < 2)
		return;

	// Appeler la fonction récursive avec les limites du tableau complet
	quick_sort_recursive(array, 0, (int)size - 1, size);
	// Fin de la fonction quick_sort
}
