//Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.

#include <stdio.h>

int main() {
  int number1, number2, result;

  printf("Informe o primeiro número: ");
  scanf("%d", &number1);
  printf("Informe o número que deseja subtrair: ");
  scanf("%d", &number2);

  result = number1 - number2;

  printf("O resultado da subtração é %d", result);
}