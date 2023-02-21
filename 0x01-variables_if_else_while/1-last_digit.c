#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	
	/**
	 * if else statement
	 */
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than %d and not %d\n", n, lastDigit, 6, 0);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, lastDigit, 0);
	}
	else if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than %d\n", n, lastDigit, 5);
	}
	else
	{
		printf("Last digit of %d is %d and is less than %d\n", n, lastDigit, 0);
	}

	return (0);
}

