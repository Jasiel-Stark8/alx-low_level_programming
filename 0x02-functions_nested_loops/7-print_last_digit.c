#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */
int print_last_digit(int num)
{
int last_digit;
if (num < 0)
num = -num;
last_digit = num % 10;
return last_digit;
}
