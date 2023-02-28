#include <stdio.h>
/**
 * puts2 - print the other caractere
 * @str: parameter
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		printf("%c\n", str[i]);
		i = i + 2;
	}
	printf("\n");
}
