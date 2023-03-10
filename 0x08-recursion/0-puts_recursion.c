#include <unistd.h>
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: parameter passed
 *
 * Return: void
 *
 */
void _puts_recursion(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
}

