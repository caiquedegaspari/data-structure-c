#include <stdio.h>

int main()
{

  int a;

  printf("Digite um número: ");
  scanf("%d", &a);

  if (a == 0)
  {
    printf("A variável a é igual à zero\n");
  }
  else
  {
    printf("A variável 'a' é diferente de zero\n");
  }
}