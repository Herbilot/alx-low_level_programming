#include <stdio.h>
/**
 * rev_string - print a string in reverse
 * @s: pointer to an string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char tmp;
	int i;
	int j;
	int k;
	
	j = 0;
	k = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	k = j - 1;
	for(i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k] = tmp;
		k--;
	}
}

