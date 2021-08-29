//Faça uma função que converta uma quantidade de horas digitadas pelo usuário em minutos e retorne
//esta quantidade. Faça a leitura da quantidade de horas na função principal.

#include <stdio.h>

int main() {
  int hours;
  int result;

  printf("Escreva que horas são para ser realizado a conversão: ");
  scanf("%d", &hours);
  result = 60 * hours;
  printf("A hora informada em minutos é : %d\n", result);
}