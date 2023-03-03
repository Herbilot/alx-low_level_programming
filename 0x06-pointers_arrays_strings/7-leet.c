#include <stdio.h>
/**
 * leet - encode string using 1337
 * @s: string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	int len = 0;
	char l337[8];

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == l337[j] || str[i] - 32 == l337[j])
			{
				s[i] = j + '0';
			}
		}
	}
}
