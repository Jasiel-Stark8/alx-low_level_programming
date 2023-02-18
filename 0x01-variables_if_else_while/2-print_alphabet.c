#include <stdio.h>
/**                                                                     
 * main - Entry point                                                   
 *                                                                      
 * Return: Always 0 (Success)                                           
 */
int main(void)
{
  char alph[26];
      for (int letter = 0; letter < 26; letter++)
        {
          alph[letter] = 'a' + letter;
          putchar(alph[letter]);
        }
    putchar('\n');
    return (0);
}
