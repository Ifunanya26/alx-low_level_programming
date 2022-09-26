#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrixof integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + i) == 0)
			sum1 += *(s + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a +i);
	}
	printf("%d, %d\n", sum1, sum2);
}
