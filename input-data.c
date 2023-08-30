#include <stdio.h>

int main()
{
  int num, sum;
  printf("\nDigite um número: ");
  scanf("%d", &num);
  sum = num + 5;
  printf("Result: %d\n", num);
  printf("Result + 5: %d\n", sum);
  return 0;
}