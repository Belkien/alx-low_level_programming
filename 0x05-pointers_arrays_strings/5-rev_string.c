#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char store[1000];

	while (*(s + len))
	{
		*(store + len) = *(s + len);
		len++;
	}

	len--;

	while (len >= 0)
	{
		*(s + i) = *(store + len);
		i++;
		len--;
	}
}
