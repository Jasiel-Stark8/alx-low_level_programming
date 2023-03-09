#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: String to be counted
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
  len++;
len += _strlen_recursion(s + 1);
}
return(len);
}
