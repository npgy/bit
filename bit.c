#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(NULL));
  int r = rand() % 2;
  if(r == 1)
  {
    printf("yes\n");
  } else
  {
    printf("no\n");
  }
  return 0;
}
