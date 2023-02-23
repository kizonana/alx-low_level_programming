#include "main.h"

/**
 *positive_or_negative - function that checks positive or negative number
 *
 *@i: number checked
 *Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
