#include <stdio.h>

int main(void)
{
  int i, length;
  char str[100];

  printf("digite seu nome: ");
  fgets(str, 100, stdin);
  length = strlen(str);
  printf("O tamanho do vetor é: %i \n", length);

  printf("Exibindo os Valores do Vetor \n");

  for (i = 0; i <= length - 2; i++)
  {
    printf("posicao[%d] = %c\n", i, str[i]);
  }
  return 0;
}