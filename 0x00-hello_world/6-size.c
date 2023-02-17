#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*sizeof() return the storge used by a primitif type in the memory*/
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
	return 0;
}
