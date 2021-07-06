// Você deverá fazer um programa para controlar o peso e a altura das pessoas. 
// Este programa deverá então ler o peso e a altura e calcular e mostrar:

// a) a media das idades de todas as pessoas entradas;

// b) a quantidade de pessoas com peso inferior a 80kg e altura superior a 1,8m; e

// c) a porcentagem de pessoas com idade entre 20 e 35 anos entre as pessoas que medem mais do que 1,70m.

#include <stdio.h>

int main() {
  int pessoas, count, idade, altura, peso, peso_80 = 0, autura_180 = 0, media = 0,result, porcentagem, porcentagem1, soma_idade = 0, media_final;

  printf("Informe o número de pessoas: ");
  scanf("%d", &pessoas);

  for( count = 0; count < pessoas; count++ ) {
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("Informe a sua altura: ");
    scanf("%d", &altura);
    printf("Informe o seu peso: ");
    scanf("%d", &peso);

    if( peso < 80 ) {
      peso_80++;
    }

    if(altura > 180) {
      autura_180++;
    }

    if( idade >= 20 && idade <= 35 && altura > 170 ) {
      media++;
    }

    soma_idade = soma_idade + idade;
    media_final = soma_idade / pessoas;
    porcentagem = pessoas * media;
    porcentagem1 = 100 / porcentagem;
  }
  printf("A media das idades de todas as pessoas entradas é: %d", media_final);
  printf("A quatidade de pessoas com altura superior a 1.8m é: %d ", autura_180);
  printf("A quantidade de pessoas com peso inferior a 80Kg é:  %d", peso_80);
  printf("A porcentagem de pessoas com idade entre 20 anos e 35 anos e altura maior que 1.70m é: %d: ", porcentagem1);
}