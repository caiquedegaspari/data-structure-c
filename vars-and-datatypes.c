#include <stdio.h>

int firstVar = 3;
float floatVar = 2.3;
char charVar = 'a';

int main()
{
  printf("first var value is: %d\n", firstVar);
  printf("float var value is: %.1f\n", floatVar);
  printf("char var value is: %c\n", charVar);

  return 0;
}