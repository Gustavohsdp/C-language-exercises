#include <stdio.h>

int main() {
  int * pt;
  int valores[100], i, count, tamanho, contador;

  pt = valores;

  printf("Digite o tamanho do array: ");
  scanf("%d", &tamanho);

  for(i = 0; i < tamanho; i++) {
    printf("Informe um valor: ");
    scanf("%d", &valores[i]);
  }

  for(i = 0; i < tamanho; i++) {
    printf("Elementos inseridos %d\n ", valores[i]);
  }

  printf("O tamanho do vetor é %d\n", sizeof(pt) * tamanho);
}