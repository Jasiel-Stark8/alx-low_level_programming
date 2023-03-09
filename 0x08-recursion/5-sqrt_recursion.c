#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of an integer
 * @n: Integer to calculate the square root of
 *
 * Return: Square root of integer
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;  // Negative numbers don't have a real square root
    } else if (n == 0 || n == 1) {
        return n;   // Base case: square root of 0 and 1 is the number itself
    } else {
        // Recursive case: check for square root in the range [1, n/2]
        int i = 1;
        while (i <= n / 2 && i * i < n) {
            i++;
        }
        return (i * i == n) ? i : _sqrt_recursion(n - 1);
    }
}
