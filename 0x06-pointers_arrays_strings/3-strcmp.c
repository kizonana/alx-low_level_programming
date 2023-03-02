#include "main.h"

/**
 * _strcmp - function that compare two string
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: If str1 < str2, the negative difference
 * If str1 == str2, 0
 * if str1 > str2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
