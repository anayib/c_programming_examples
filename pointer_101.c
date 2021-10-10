#include <stdio.h>

int main()
{
  int five = 5;
  int * pointer = &five;

  printf("The variable five value is %d \n and its value via the pointerfive is %d \n", five, *pointer);

  *pointer += 1;

  printf("Added one to *pointer now the five variable that was 5 is %d", five);

  return 0;
}
