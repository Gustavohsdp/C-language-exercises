//Faça uma função que retorne a soma de dois números reais passados como parâmetro.

#include <stdio.h>

//Função soma, função que irá receber 2 int, number1 e number2 como parâmetro,
//Será realizado a soma dos 2 números
int sum(int number1, int number2)
{
  int result;
  result = number1 + number2;
  return (result); //retornando o valor para main
}

//Função principal
int main()
{
  int number1, number2, result;
  
  printf("Escreva o primeiro numero: ");
  scanf("%d", &number1);
  printf("Esvreva o segundo numero: ");
  scanf("%d", &number2);
  result = number1 + number2;
  printf("Resultado = %d\n", result);
}