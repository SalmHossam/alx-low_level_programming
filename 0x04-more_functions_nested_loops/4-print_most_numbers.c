#include"main.h"
#include<stdio.h>

/***
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return : numbers from 0 to 9
 */

void print_numbers(void)
{

	int i;
	for (i = 0 ; i <= 9 ; i++)
	{
	if(i != 2 && i != 4)
	{
		_putchar( i + '0');
	}
	}
	_putchar('\n');
}

