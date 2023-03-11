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
        (void) argv;
        printf("%d\n", argc - 1);

        return (0);
}
