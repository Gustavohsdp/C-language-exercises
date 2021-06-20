// Faça um programa que receba a idade de oito pessoas calcule e mostre:

// a) a quantidade de pessoas em cada faixa etária;
// b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
// c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

// A tabela para classificação da idade em cada faixa etária é:

// Faixa etária	Idade
// 1ª	Até 15 anos
// 2ª	De 16 a 30 anos
// 3ª	De 31 a 45 anos
// 4ª	De 46 a 60 anos
// 5ª	Acima de 60 anos

#include <stdio.h>

int main() {
  int age;
  int multiplication;
  int percentage;
  int multiplication1;
  int percentage1;
  int ages[8];

  int faixaEtaria1 = 0;
  int faixaEtaria2 = 0;
  int faixaEtaria3 = 0;
  int faixaEtaria4 = 0;
  int faixaEtaria5 = 0;


  printf("Insira as 8 idades das pessoas: \n");
  for (age = 0; age < 8; age++) {
    scanf("%d", &ages[age]);
  };
  for (age = 0; age < 8; age++) {
      if(ages[age] > 0 && ages[age] <= 15) {
        faixaEtaria1 += 1;
        multiplication = 100 * faixaEtaria1;
        percentage = multiplication / 8;
      } else if(ages[age] >= 16 && ages[age] <= 30) {
        faixaEtaria2 += 1;
      }else if(ages[age] >= 31 && ages[age] <= 45) {
        faixaEtaria3 += 1;
      }else if(ages[age] >= 46 && ages[age] <= 60) {
        faixaEtaria4 += 1;
      } else if(ages[age] > 60 ) {
        faixaEtaria5 += 1;
        multiplication1 = 100 * faixaEtaria5;
        percentage1 = multiplication1 / 8;
      }
  };
  printf("Tenho na faixa etaria de 15 anos %d \n", faixaEtaria1);
  printf("Tenho na faixa etaria entre 16 e 30 anos %d \n", faixaEtaria2);
  printf("Tenho na faixa etaria entre 31 e 45 anos %d \n", faixaEtaria3);
  printf("Tenho na faixa etaria entre 46 e 60 anos %d \n", faixaEtaria4);
  printf("Tenho na faixa etaria acima de 60 anos %d \n", faixaEtaria5);
  printf("Porcentagem de pessoas na primeira faixa etária %d \n", percentage);
  printf("Porcentagem de pessoas na primeira faixa etária %d \n", percentage1);
};