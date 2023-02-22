#include <stdio.h>
#include<ctype.h>
/**
 * islower - check whether a char is lower or not
 *
 * parmater c - int
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	int retval;

	if (c >= 'a' && c <= 'Z')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}

	return (retval);
}

