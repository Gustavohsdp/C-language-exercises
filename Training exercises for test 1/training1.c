// Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

#include <stdio.h>

int main() {
  int number1, number2, number3, multiplicacao;

  printf("Informe o numero 1: ");
  scanf("%d", &number1);
  printf("Informe o numero 2: ");
  scanf("%d", &number2);
  printf("Informe o numero 3: ");
  scanf("%d", &number3);

  multiplicacao = number1 * number2 * number3;
  
  printf("O resultado da multiplicação é %d", multiplicacao);
}