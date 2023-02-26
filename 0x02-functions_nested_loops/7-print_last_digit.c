#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a given integer
 *
 * @n: argument passed
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n >= 0)
	{
		lastDigit = n % 10;
		_putchar('0' + lastDigit);
	}
	else
	{
		lastDigit = n % 10 * -1;
		_putchar('0' + lastDigit);

	return (lastDigit);
}
