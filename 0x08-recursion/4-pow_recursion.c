#include "main.h"
/**
 * _pow_recursion - Calculates the power of two integers
 * @x: Base integer
 * @y: Power base integer is raised to
 *
 * Return: True or false based on output
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
