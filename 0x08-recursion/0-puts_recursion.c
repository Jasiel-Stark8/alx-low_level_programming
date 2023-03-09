#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints recursion string followed by a new line
 * @s: string to be printed
 * Return: Always 0.
 */
void _puts_recursion(char *s);
{
  if (*s == '\0')
    {
      puts(*s);
      _puts_recursion(s + 1);
    }
  else
    {
      _putchar('\n');
    }
}
