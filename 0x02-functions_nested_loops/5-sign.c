#include <stdio.h>
/** 
 * print_sign - print the sign of an giving int
 * 
 * @n: argument passed
 *
 * Return: 1 (if positive), 0 (if egal to 0), -1 (if negative)
 */
int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		retval = 1;
		putchar('+');
		return (retval);
	}
	else if (n == 0)
	{	
		retval = 0;
		putchar('0');
		return retval; 
	}
	else
	{
		retval = -1;
		putchar('-');
		return (retval);
	}

}
