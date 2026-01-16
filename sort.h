// Garde pour éviter l'inclusion multiple de ce fichier d'en-tête
#ifndef SORT_H
// Définir SORT_H pour marquer que ce fichier a été inclus
#define SORT_H

// Inclure les définitions standard pour size_t et NULL
#include <stddef.h>
// Inclure la bibliothèque standard pour les fonctions de gestion de la mémoire
#include <stdlib.h>
// Inclure la bibliothèque d'entrée/sortie standard pour la fonction printf
#include <stdio.h>

/**
 * struct listint_s - Nœud de liste chaînée doublement
 *
 * @n: Entier stocké dans le nœud
 * @prev: Pointeur vers l'élément précédent de la liste
 * @next: Pointeur vers l'élément suivant de la liste
 */
// Définir la structure du nœud de liste chaînée doublement
typedef struct listint_s
{
	// Valeur entière constante stockée dans le nœud
	const int n;
	// Pointeur vers le nœud précédent dans la liste
	struct listint_s *prev;
	// Pointeur vers le nœud suivant dans la liste
	struct listint_s *next;
} listint_t; // Alias typedef pour la structure

/* Tâche 0 - Déclarations de fonction d'algorithme de tri */
// Fonction tri à bulles: trie un tableau en échangeant répétitivement des éléments adjacents
void bubble_sort(int *array, size_t size);
// Fonction tri par insertion: trie une liste chaînée doublement en déplaçant les nœuds
void insertion_sort_list(listint_t **list);
// Fonction tri par sélection: trie un tableau en trouvant les éléments minimum
void selection_sort(int *array, size_t size);
// Fonction tri rapide: trie un tableau en utilisant une approche diviser pour régner
void quick_sort(int *array, size_t size);

/* Fonctions utilitaires d'affichage */
// Fonction d'affichage du tableau: affiche tous les éléments d'un tableau
void print_array(const int *array, size_t size);
// Fonction d'affichage de la liste: affiche tous les nœuds d'une liste chaînée
void print_list(const listint_t *list);

// Fin de la garde de l'en-tête
#endif /* SORT_H */
