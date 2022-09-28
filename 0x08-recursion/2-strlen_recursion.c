#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: pointer to the string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);


}
