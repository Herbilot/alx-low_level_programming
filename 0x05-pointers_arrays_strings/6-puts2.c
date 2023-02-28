#include <stdio.h>
/**
 * puts2 - print the other caractere
 * @str: parameter
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len; i += 1)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
