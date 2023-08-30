#include <stdio.h>

int soma(int a, int b)
{
  int sum = a + b;
  return sum;
}

int sub(int a, int b)
{
  int sub = a - b;
  return sub;
}

int main()
{
  int n1, n2, op, res;

  printf("Digite um valor: ");
  scanf("%d", &n1);

  printf("Digite um valor: ");
  scanf("%d", &n2);

  printf("Escolha a operação: \n1 - Adição \n2 - Subtração\n");
  scanf("%d", &op);

  if (op == 1)
  {
    res = soma(n1, n2);
    printf("O resultado é: %d\n", res);
  }
  else if (op == 2)
  {
    res = sub(n1, n2);
    printf("O resultado é: %d\n", res);
  }
  else
  {
    printf("Operação inválida.\n");
  }
}