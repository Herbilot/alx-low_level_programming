#include <stdio.h>
/**
 * puts_half - prints the half string
 * @str: parameter passed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int n;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		n = len / 2 + 1;
	}
	else
	{
		n = len / 2;
	}
	for (i = n; i < x; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
