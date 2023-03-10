#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - rversed a string
 * @s: argument passed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		printf("%c", s[len - 1]);
		len--;
	}
}
