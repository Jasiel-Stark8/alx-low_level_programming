#include <stdio.h>
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
  int i = 0;
  for (; i < argc; i++)
    {
      printf("Name Of Program Is: %s\n", argv[0]);
    }
  return (0);
}
