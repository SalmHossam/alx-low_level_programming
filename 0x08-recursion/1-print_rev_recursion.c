#include <stdio.h>

/**
 * _print_rev_recursion - Function reverse string using recursion
 *
 * @s: Pointer to the string to be measured.
 */

void _print_rev_recursion(char *s)
{
    if (*s == '\0') 
    {
    return ;
    }
    _print_rev_recursion(s + 1);
    putchar(*s);
}
