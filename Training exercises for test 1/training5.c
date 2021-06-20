// Faça um programa que receba o número de notas que o usuário digitar. 
// Calcule e mostre a média ponderada dessas notas. O usuário deverá entrar com o peso de cada uma das notas que ele digitou. 
// No final esta média deverá ser mostrada.

#include <stdio.h> 

int main() {
  float 
  calculo1, 
  peso_Calculo1, 
  fundamentos_de_sistemas, 
  peso_Fundamentos_de_sistemas, 
  programacao1, 
  peso_Programacao1,
  sum_peso,
  media;

  printf("Informe sua nota da materia calculo1: ");
  scanf("%f", &calculo1);
  printf("Informe o peso da materia calculo1: ");
  scanf("%f", &peso_Calculo1);

  printf("Informe sua nota da materia calculo1: ");
  scanf("%f", &fundamentos_de_sistemas);
  printf("Informe o peso da materia calculo1: ");
  scanf("%f", &peso_Fundamentos_de_sistemas);

  printf("Informe sua nota da materia calculo1: ");
  scanf("%f", &programacao1);
  printf("Informe o peso da materia calculo1: ");
  scanf("%f", &peso_Programacao1);

  sum_peso = peso_Calculo1 + peso_Fundamentos_de_sistemas + peso_Programacao1;
  media = (calculo1 * peso_Calculo1 + fundamentos_de_sistemas * peso_Fundamentos_de_sistemas + programacao1 * peso_Programacao1) / sum_peso;
  printf("A media %f", media);
};