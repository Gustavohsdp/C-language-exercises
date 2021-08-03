#include <stdio.h>

int main() {
  //Declaração de variaveis
  int element[15], par = 0, impar = 0, i = 0, count = 0;
  //Estrutura de repetição para ser informado os números
  for (i = 0; i < 15; i++) {
    printf("Informe um número: ");
    scanf("%d", &element[i]);

    //Verificação se o número é impar ou par
    if(element[i] %2 == 0) {
      par += 1;
    } else {
      impar += 1;
    }
  }
  //Mostrando a quatidade de números impares e pares
  printf("A quantidade de número par é: %d, a quantidade de número impar é: %d", par, impar);
}