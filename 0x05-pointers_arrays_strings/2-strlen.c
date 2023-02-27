#include <stdio.h>
/**
 * _strlen - compute the length of an array
 *
 * @s: pointer to an array
 *
 * Return: the length of the array
 */
int _strlen(char *s)
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
	return (len);
}
