// Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a
// quantidade de quilômetros rodados e a quantidade de combustível consumido.

#include <stdio.h>

int main()
{
  float kilometers_traveled, spent_fuel, average_of_spent_fuel;

  printf("Quantos quilômetros foram percorridos: ");
  scanf("%f", & kilometers_traveled);
  printf("Quantidade de combustível consumido: ");
  scanf("%f", &spent_fuel);

  average_of_spent_fuel = kilometers_traveled / spent_fuel;

  printf("A média de combustível gasto é: %f", average_of_spent_fuel);
}