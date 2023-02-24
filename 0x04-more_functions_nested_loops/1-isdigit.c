#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the digit is a digit or not
 *@c: The number to be checked
 * Return: 1 for uppercase else Return: 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
        return (0);
}
