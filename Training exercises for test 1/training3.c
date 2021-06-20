//Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. 
//Sabe-se que o segundo número não pode ser zero, portanto, será necessário fazer a validações.

#include <stdio.h>

int main() {
  int number1, number2, result;

  printf("Informe o primero número: ");
  scanf("%d", &number1);
  printf("Informe o segundo número: ");
  scanf("%d", &number2);

  if (number2 == 0 ) 
  {
    printf("Escreva um número diferente de 0");
    return 0;
  } 

  result = number1 / number2;

  printf("O resultado é %d", result);
}