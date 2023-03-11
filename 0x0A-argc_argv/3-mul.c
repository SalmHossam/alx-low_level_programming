#include "main.h"
#include<stdio.h>

/**
 * main - Prints it's name
 * @argc: argument count
 *@argv: arguments vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
        int n1 = 0, n2 = 0;

	if(argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(srgv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Erorr\n");
		return (1);
	}
        

        return (0);
