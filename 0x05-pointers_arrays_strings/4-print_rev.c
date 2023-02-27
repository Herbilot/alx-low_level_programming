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
	int stop = 0;

	while (stop != 1)
	{
		if (s[i] == '\0')
		{
			stop = 1;
		}
		else
		{
			len++;
			i++;
		}
	}
	for (i = len -1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	
}
