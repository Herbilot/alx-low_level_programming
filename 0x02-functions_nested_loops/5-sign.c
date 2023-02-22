#include <stdio.h>
/** 
 * print_sign - print the sign of an giving int
 * 
 * Parameters: c (a value which the sign is return)
 *
 * Return: 1 (if positive), 0 (if egal to 0), -1 (if negative)
 */
int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		putchar('+');
		putchar('\n');
		retval = 1;
	}
	else if (n == 0)
	{
		putchar('0' + 0);
		putchar('\n');
		retval = 0;
	}
	else
	{
		putchar('-');
		putchar('\n');
		retval = -1;
	}

	return (retval);
