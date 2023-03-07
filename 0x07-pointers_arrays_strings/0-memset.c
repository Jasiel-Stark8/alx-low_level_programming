#include "main.h"
#include <string.h>
/**
 * *_memset: Fills memory with a constant byte
 * @s: points to memory area
 * @b: contstant byte
 * @n: number of bytes to fill
 *
 * Returns: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      s[i] = b;
      n--;
    }
  return (s);
}
