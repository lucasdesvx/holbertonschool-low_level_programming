#include "function_pointers.h"

/**
 * int_index - searches for an integer using a comparison function
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function pointer to compare values
 *
 * Return: index of the first element for which cmp does not return 0,
 *         -1 if no match is found or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* Déclaration d'un compteur pour parcourir le tableau */

	/* Vérifie si le tableau ou la fonction sont NULL, ou si la taille est invalide */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1); /* Cas d'erreur : retourne -1 */

	/* Parcours du tableau */
	for (i = 0; i < size; i++)
	{
		/* Si la fonction cmp retourne vrai pour cet élément, on retourne son index */
		if (cmp(array[i]))
			return (i);
	}

	/* Aucun élément ne correspond, retourne -1 */
	return (-1);
}
