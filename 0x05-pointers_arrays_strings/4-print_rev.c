#include <stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer to an string
 *
 * Return: nothing
 */
void print_rev(char *s)
{	
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
