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
	int i;
	char lastN = str % 10;

	while (str[len] != 0)
	{
		len++;
	}
	i = len / 2;
	while (i < len)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	if (len % 2 = !0)
	{
		printf("%c\n", lastN)
	}
}
