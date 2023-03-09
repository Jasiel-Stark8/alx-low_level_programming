#include "main.h"
/**
 * factorial - Calculates the factorial of an integer
 * @n: Integer to be calculated
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
