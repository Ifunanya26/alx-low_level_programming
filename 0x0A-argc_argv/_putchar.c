#include <unistd.h>
/**
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 * _putchar - writes the character c to stdout
 */
{
	return (write(1, &c, 1));
}
