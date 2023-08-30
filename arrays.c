#include <stdio.h>

int arr[4];

int main()
{
  for (int i = 0; i < 4; i++)
  {
    printf("Digite um valor:\n");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 4; i++)
  {
    printf("O valor de arr[%d] é %d\n", i, arr[i]);
  }
  return 0;
}