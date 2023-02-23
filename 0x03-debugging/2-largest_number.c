#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int large = largest;

    if (b > large)
    {
        large = b;
    }
    if (c > large)
    {
        large = c;
    }
    else
      {
	large = a;
      }

    return (large);
}
