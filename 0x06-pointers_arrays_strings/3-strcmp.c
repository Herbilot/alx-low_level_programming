#include <stdio.h>
/**
 * _strcmp - compares two array pointed
 * @s1: first argument
 * @s2: second argument
 *
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
