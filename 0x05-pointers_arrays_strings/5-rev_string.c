#include <stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer to an string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
