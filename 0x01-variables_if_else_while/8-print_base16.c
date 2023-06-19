#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (m < 103)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

