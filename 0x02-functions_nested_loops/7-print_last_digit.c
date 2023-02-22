#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @num: an integer
 * Return: the last digit of the number
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
if (num < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
return (last_digit);
}
