#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
n += (n < 98) ? 1 : -1;
}
printf("%d\n", n);
}
