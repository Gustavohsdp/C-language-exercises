// Faça uma função que receba um número inteiro e imprima o número lido é par ou impar.

#include <stdio.h>

int main() {
  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  if(number % 2 == 0) {
    printf("O número é par");
  }else {
    printf("O número é impar");
  }
}