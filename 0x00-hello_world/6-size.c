#include <stdio.h>

/**
 * main - another function
 *
 * Return: 0 on successfull
 */

int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
