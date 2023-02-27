#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n element
 * @a: array of interger
 * @n: number of element
 * Return: 0
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
