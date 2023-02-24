#include <main.h>

/**
 * _isupper - function that checks uppercase caracter
 * @c: paramter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c <= 98 && c >= 65)
	{
		return (1);
	}
	return (0);
}
