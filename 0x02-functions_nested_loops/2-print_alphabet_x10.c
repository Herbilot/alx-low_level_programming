#include <stdio.h>
/**
 * print_alphabet_x10 print the alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			putchar(c);
		}
		putchar('\n');
		++i;
	}
}
