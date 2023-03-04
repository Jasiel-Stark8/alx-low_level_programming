#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
// Hexadecimal Logic | Digits [1 - 9] and Letters [a - f]
