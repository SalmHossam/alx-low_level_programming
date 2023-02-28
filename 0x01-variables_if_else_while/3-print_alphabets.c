#include<stdio.h>

/**
 * main -  Prints the alphabet in lowercase and uppercase,followed by new line
 * @l: The letter variable
 * Return: void
 */
int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
	_putchar (l);
	for (l = 'A'; l <= 'Z'; l++)
	_putchar (l);

	_putchar ('\n');
}
