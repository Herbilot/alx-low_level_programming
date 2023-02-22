#include <stdio.h>
#include<ctype.h>
/**
 * isalpha - check whether a char is alpha or not
 *
 * c - int parameter
 *
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	int retval;

	if (c >= 'A' && c <= 'z')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}

	return (retval);
}

