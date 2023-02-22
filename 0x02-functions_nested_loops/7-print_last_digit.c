#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: an integer
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
return last_digit;
}
