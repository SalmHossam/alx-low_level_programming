#include<stdio.h>
#include"main.h"

/**
 * _isalpha - checks for alphabetic character.
 * Return: if it's alphabet 1 else 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
