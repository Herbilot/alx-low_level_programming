#include <stdio.h>
#include<ctype.h>
/**
 * _isalpha - check whether a char is alpha or not
 *
 * @c: value passed
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

