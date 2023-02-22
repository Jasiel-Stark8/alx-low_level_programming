#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: an integer
 * Return: the last digit of the number
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
if (num < 0)
{
num = -num;
}
_putchar(num + '0');
return last_digit;
}
