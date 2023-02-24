#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the digit id upper case or not
 *@c: The number to be checked
 * Return: 1 for uppercase else Return: 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
