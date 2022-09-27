#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @dest: the address to copy to
 * @src: content to copy
 * @n: index to start copying from
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
