#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of element to reverse
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int k = n - 1;
	int tmp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
		k--;
	}
}
