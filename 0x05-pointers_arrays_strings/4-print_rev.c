#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_rev - This function print the reverse of string
 * @s: Parameter string of function
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

