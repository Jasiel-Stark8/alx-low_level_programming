#include <stdio.h>

int main(void)
{
  int num[5];
  int *p = &num[5];

  printf("%p\n", p);
}
