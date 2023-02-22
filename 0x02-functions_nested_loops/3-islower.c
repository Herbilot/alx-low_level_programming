#include <stdio.h>
#include<ctype.h>
/**
 * _islower - check whether a char is lower or not
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (islower(c) == 2)
	{
		putchar('0' + 1);
		putchar('\n');
	}
	else
	{
		putchar('0' + 0);
		putchar('\n');
	}
	return (0);
}

