#include "main.h"

/**
 * _strcpy - function that copies the string pointed by src
 * @dest: destination details
 * @src: source value
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
