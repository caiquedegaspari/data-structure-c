#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Digite um número: ");
  scanf("%d", &a);
  printf("Digite um número: ");
  scanf("%d", &b);
  printf("Digite um número: ");
  scanf("%d", &c);

  if (a == b && b == c)
  {
    printf("a, b, c tem valores iguais\n");
  }
  if (a == b || b == c)
  {
    printf("a ou b ou c tem valores iguais\n");
  }
  if (!(a == b))
  {
    printf("a é diferente de b\n");
  }
}