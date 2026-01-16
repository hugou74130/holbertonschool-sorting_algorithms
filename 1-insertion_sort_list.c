// Inclure le fichier d'en-tête sort avec les structures et déclarations
#include "sort.h"

/**
 * insertion_sort_list - Trie une liste chaînée doublement en utilisant le tri par insertion
 * @list: Pointeur vers la tête de la liste chaînée doublement
 *
 * Description: Utilise l'algorithme de tri par insertion. Échange les nœuds (pas les valeurs).
 * Affiche la liste après chaque échange.
 */
// Fonction principale pour le tri par insertion sur une liste chaînée doublement
void insertion_sort_list(listint_t **list)
{
	// Pointeur pour parcourir la liste
	listint_t *current;
	// Pointeur vers le nœud clé en cours de tri
	listint_t *key;

	// Vérifier si le pointeur de liste est NULL, la liste est vide, ou la liste n'a qu'un seul nœud
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	// Commencer à partir du deuxième nœud (index 1)
	current = (*list)->next;

	// Boucle externe: itérer à travers chaque nœud en commençant par le deuxième
	while (current != NULL)
	{
		// Définir le nœud courant comme la clé à trier
		key = current;
		// Passer au nœud suivant avant de commencer le décalage
		current = current->next;

		// Boucle interne: déplacer la clé vers l'arrière jusqu'à trouver sa position correcte
		while (key->prev != NULL && key->prev->n > key->n)
		{
			// Si la clé a un nœud suivant, mettre à jour son pointeur prev vers le prev de la clé
			if (key->next != NULL)
				key->next->prev = key->prev;
			// Mettre à jour le pointeur next du nœud prev pour sauter la clé
			key->prev->next = key->next;

			// Déplacer la clé d'une position vers l'arrière (définir son next au nœud précédent)
			key->next = key->prev;
			// Déplacer le pointeur prev de la clé au nœud avant le nœud précédent
			key->prev = key->prev->prev;

			// Si la clé a maintenant un nœud prev, mettre à jour son pointeur next vers la clé
			if (key->prev != NULL)
				key->prev->next = key;
			// Sinon, la clé est maintenant la tête de la liste
			else
				*list = key;

			// Mettre à jour le pointeur prev du nœud suivant pour pointer vers la clé
			key->next->prev = key;

			// Afficher la liste après chaque échange pour montrer la progression
			print_list(*list);
		}
	}
	// Fin de la fonction insertion_sort_list
}
