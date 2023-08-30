#include <stdio.h>

int main()
{
  int a = 0;

  printf("Laço WHILE: ");
  while (a <= 5)
  {
    printf("\nVariável 'a' é: %d\n", a);
    a++;
  }

  printf("Laço FOR: ");
  for (int i = 0; i <= 4; i++)
  {
    printf("\nO valor de I é: %d", i);
  }
}