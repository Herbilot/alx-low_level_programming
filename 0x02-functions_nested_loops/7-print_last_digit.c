#include <stdio.h>
/**
 * print_last_digit - print the last digit of a given integer
 *
 * @n: argument passed
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	
	_putchar('0' + lastDigit);

	return (lastDigit);
}
