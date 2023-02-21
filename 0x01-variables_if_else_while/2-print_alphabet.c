#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *                                                                      
 * Return: Always 0 (Success)
 */
int main(void)
{
char alph[26];
int letter;
for (letter = 0; letter < 26; letter++)
{
alph[letter] = 'a' + letter;
putchar(alph[letter]);
}
putchar('\n');
return (0);
}
