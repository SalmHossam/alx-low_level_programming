#include <stdio.h>

/**
 * _puts_recursion - A function print string followed by new line
 * @s: String parameter
 */

void _puts_recursion(char *s)
{

  if (*s == '\0')
  putchar('\n');
  else
  {
  putchar(*s);
  _puts_recursion(s + 1); 
  }
}
