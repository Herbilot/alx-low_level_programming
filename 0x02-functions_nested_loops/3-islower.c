#include <stdio.h>
#include<ctype.h>
/**
 * _islower - check whether a char is lower or not
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	int retval;

	if (c >= 'A' && c <= 'Z')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}

	return retval;
}

