#include "main.h"

/**
 * _islower - function to print lower case
 *
 * @c: the parameter
 *
 * Return: 1 if it is a lower case
 * 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
