#include <stdio.h>
/**
 * rev_string - print a string in reverse
 * @s: pointer to an string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int j;

	while (s[len] != '\0')
	{
		len++;
	}
	j = len - 1;
	char tmp[len];

	for (int i = 0; i < len; i++)
	{
		tmp[j] = s[i];
		j--;
	}
	for (int i = 0; i < len; i++)
	{
		s[i] = tmp[i];
	}
}
