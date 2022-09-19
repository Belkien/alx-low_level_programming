#include "main.h"

/**
 * swap_int - swaps a na db
 * @a: pointer to a
 * @b: pointer to b
 * description - swap two variables
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
