#include "main.h"

/**
 * print_most_numbers - function that prints numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
