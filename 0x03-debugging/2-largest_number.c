#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first no
 * @b: second no
 * @c: thrid no
 * Return: largest no
 */

int largest_number(int a, int b, int c)
{
	int largest_number;

	if (a > b && a > c)
	{
		largest_number = a;
	}
	else if (b > c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}

	return (largest_number);
}
