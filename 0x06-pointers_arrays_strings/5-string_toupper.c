#include <stdio.h>
/**
 * string_toupper - transforms all lowercase to uppercase
 * @s: string to transform
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
