#include "main.h"
#include <string.h>
/**
 * *_memset: Fills memory with a constant byte
 * @s: puts a char s
 * @b: puts a char b
 * @n: puts an integer n
 *
 * Returns: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  
  for (i = 0; i < 10; i++)
    {
      s[i] = b;
    }

  return s
}
