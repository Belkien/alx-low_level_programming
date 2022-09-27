#include "main.h"

/**
 * _strchr - prints first occurence of c
 * @s: string to search
 * @c: character to find
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
