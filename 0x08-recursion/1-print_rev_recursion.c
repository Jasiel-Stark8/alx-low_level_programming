#include "main.h"
/**
 *  _print_rev_recursion - Prints recursive reverse string
 * @s: String to be reversed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
