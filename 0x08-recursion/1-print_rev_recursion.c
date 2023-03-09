#include "main.h"
/**
 * 
 *
 *
 */
void _print_rev_recursion(char *s)
{
  if (*s)
    {
      _putchar(*s);
      _putchar_rev_recursion(s - 1);
    }
  else
    {
      _putchar('\n');
    }
}
