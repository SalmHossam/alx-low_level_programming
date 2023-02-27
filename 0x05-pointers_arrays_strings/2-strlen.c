#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * int _strlen - The _strlen function return the length of string
 * @s: Parameter string
 * Return: length of string
 */

int _strlen(char *s)
{

	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
