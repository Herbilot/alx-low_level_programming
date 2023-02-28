#include <stdio.h>
/**
 * _strcpy - copies a pointer to another
 * @dest: destination param
 * @src: orign pointer
 *
 * Return: value to pointet
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
