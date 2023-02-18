#include <stdio.h>
/**                                                                     
 * main - Entry point                                                   
 *                                                                      
 * Return: Always 0 (Success)                                           
 */
int main(void)
{
  int letter;
  for (letter = 0; letter < 26; letter++)
    {
      alph[letter] = 'a' + letter;
      putchar('a' + letter);
    }
  putchar('\n');
  return (0);
}
