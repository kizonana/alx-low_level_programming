#include <stdio.h>

/**
 * swap_int - function that swap value into two interger
 * @a: first interger
 * @b: second interger
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swap the value of two interger. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
