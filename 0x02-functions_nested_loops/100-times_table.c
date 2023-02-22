#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table starting with 0
 * @n: the number of rows and columns in the table
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
for (int row = 0; row <= n; row++)
{
for (int col = 0; col <= n; col++)
{
int value = row * col;
int digits = 0;
/** count the number of digits in the value*/
if (value == 0)
{
digits = 1;
}
else
{
for (int temp = value; temp > 0; temp /= 10) {
digits++;
}
}
/** print the value with appropriate padding*/
if (col > 0)
{
_putchar(' ');
}
for (int i = digits; i < 4; i++) {
_putchar(' ');
}
if (value == 0)
{
_putchar('0');
}
 else
{
for (int temp = value; temp > 0; temp /= 10)
{
_putchar(temp % 10 + '0');
}
}
}
_putchar('\n');
}
}
