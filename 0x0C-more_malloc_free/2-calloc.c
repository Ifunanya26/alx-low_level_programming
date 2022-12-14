#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmedb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmedb, unsigned int size)
{
	void *p;

	if (nmedb == 0 || size == 0)
		return (NULL);
	p = malloc(nmedb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmedb * size));
	return (p);
}
