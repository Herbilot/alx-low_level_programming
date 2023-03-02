#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: point to the destination
 * @src: point to the source
 * @n: number of byte to take from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	return (dest);
}
