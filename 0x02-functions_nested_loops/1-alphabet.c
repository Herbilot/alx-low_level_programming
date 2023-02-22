#include <stdio.h>
void print_alphabet(void);
/**
 * print_alphabet - print the alphabet
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c='a'; c <= 'z')
	{
		putchar(c);
	}
	putchar('\n');
}
