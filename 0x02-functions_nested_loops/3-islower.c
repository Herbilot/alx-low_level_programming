#include <stdio.h>
#include<ctype.h>
/**
 * islower - check whether a char is lower or not
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	int retval;

	if (c >= 'a' && c <= 'z')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}

	return (retval);
}

