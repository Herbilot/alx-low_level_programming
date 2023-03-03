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
	char l337[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == l337[j] || s[i] - 32 == l337[j])
			{
				s[i] = j + '0';
			}
		}
		i++;
	}

	return (s);
}
