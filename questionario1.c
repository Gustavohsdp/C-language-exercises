// Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. 
// Se der mais do que 100.000 gramas informe ao usuário que é necessário uma redução de peso.

#include <stdio.h>

int main() {
  //Declaração das variavis do peso da pessoa e da conversão para gramas;
  int person_weight, gramas;

  printf("Informe o seu peso em Kg: ");
  scanf("%d", &person_weight);

  //Conversão para gramas;
  gramas = person_weight * 1000;

  //Verificação se o user está com mais de 100000 gramas;
  printf("O seu peso em gramas é %d \n", gramas);
  if (gramas > 100000) {
    printf("Você precisa fazer uma redução em seu peso.");
  }
}