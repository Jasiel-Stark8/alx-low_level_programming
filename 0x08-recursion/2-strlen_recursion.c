#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: String to be counted
 */
int _strlen_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_strlen_recursion(s + 1);
}
}
