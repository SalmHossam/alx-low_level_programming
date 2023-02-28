#include<stdio.h>

/**
 * main - prints single digit of numbers of base 10 from 0 to 10
 *
 * Return: 0
 */
int main(void)
{

	int n;

	for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
