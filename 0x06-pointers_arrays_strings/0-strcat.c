#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: point to the destination
 * @src: point to the source
 *
 * Retur: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	return (dest);
}
