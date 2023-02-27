#include"main.h"
#include<stdio.h>

/**
 * swap_int - Swap two integers by pointers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}

