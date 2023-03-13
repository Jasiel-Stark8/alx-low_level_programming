#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - Entry point
 * @argc: Argument count from CL and name of program
 * @*argv[]: Array holding all arguments passed
 *
 * Returns: Always True 
 */
int main(int argc, char *argv[])
{
  if (argc != 3)
    {
    printf("Error\n");
  return (1);
    }
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
  int result = num1 * num2;

  printf("%d\n", result);
  return (0);
}
