#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 *
 * @a: pointer for the first value
 * @b: pointer for the second value
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
