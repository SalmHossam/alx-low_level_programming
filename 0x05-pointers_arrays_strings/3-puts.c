#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * _puts - Prints a string
 * @str: the string
 * Return:void
 */
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
        _putchar(*str);
	}
	_putchar('\n');	
}

