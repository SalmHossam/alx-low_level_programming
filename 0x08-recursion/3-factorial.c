/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
    if (n < 0)
    {
        /* Return -1 to indicate an error */
        return -1;
    }
    else if (n == 0)
    {
        /* Factorial of 0 is 1 */
        return 1;
    }
    else
    {
        /* Calculate factorial recursively */
        return n * factorial(n - 1);
    }
}

