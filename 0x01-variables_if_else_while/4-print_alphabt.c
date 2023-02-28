#include<stdio.h>

/**
 * main - Prints letters in lowercase except q & e
 * Return: void
 */

int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	if (l != 'e' && l != 'q')
	{
	putchar (l);
	}
	}
	putchar ('\n');
	return (0);
}
