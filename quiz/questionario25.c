#include <stdio.h>
#include <stdlib.h>

int main() {
  //Declaração das variaveis;
  int inteiro, inteiro1;

  //Obtendo os números digitados;
  printf("Digite um número: ");
  scanf("%d", &inteiro);

  printf("Digite um segundo número: ");
  scanf("%d", &inteiro1);

  //Verificando as areas maiores e menores;
  if(&inteiro < &inteiro1) {
    printf("A maior area é inteiro: %d\n", &inteiro);
    printf("A menor area é inteiro1: %d\n", &inteiro1);
  }else {
    printf("A maior area é inteiro1: %d\n", &inteiro1);
    printf("A menor area é inteiro: %d\n", &inteiro);
  }
}
