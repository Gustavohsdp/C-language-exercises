#include <stdio.h>

int main() {
  //Declaração de variaveis;
  int elementos[5], par = 0, impar = 0, count = 0;
  //Estrutura de repetição para ser informado os números;
  for (count = 0; count < 5; count++) {
    printf("Informe um número: ");
    scanf("%d", &elementos[count]);

    //Verificação se o número é impar ou par com a mensagem pro usuario;
    if(elementos[count] %2 == 0) {
      printf("O número é par \n");
      par += 1;
    } else {
      printf("O número é impar \n");
      impar += 1;
    }
  }
  //Mostrando a quatidade de números impares e pares;
  printf("A quantidade de número par é: %d \n, a quantidade de número impar é: %d \n", par, impar);
}