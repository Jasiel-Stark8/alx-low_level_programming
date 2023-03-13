#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: The array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        int j = 0;
        while (argv[i][j])
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return 1;
            }
            j++;
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}
