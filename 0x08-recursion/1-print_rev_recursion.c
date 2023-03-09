#include "main.h"
/**
 *  _print_rev_recursion - prints recursive reverse string followed by a new line
 * @s: string to be reversed
 * Returns: Always True
 */
void _print_rev_recursion(char *s)
{
  if (*s)
    {
      _putchar(*s);
      _print_rev_recursion(s + 1);
    }
  else
      _putchar('\n');
}
