#include "main.h"
/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
  if (sizeof(size) == 0)
    return (NULL);

  char* array = malloc(size + sizeof(char))

    if (array == 0)
      {
      return (NULL);
      }

  unsigned int i = 0;
  for (; i < size; i++)
    {
      array[i] = c;
    }
  return array;
}
