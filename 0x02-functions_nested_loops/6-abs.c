#include "main.h"

/**
 * _abs - functions that computes absolute value
 *
 * @a: parameters
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
