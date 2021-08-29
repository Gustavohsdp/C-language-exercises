#include <stdio.h>

//calculando a porcentagem sobre o imposto de renda

int main() {
    //declaração de variaveis
    int salario, tempo_servico;

    //Inserindo o salario
    printf("Informe o seu salario: ");
    scanf("%d", &salario);
    //Informando o tempo de servico
    printf("Informe o tempo de servico: ");
    scanf("%d", &tempo_servico);

    //verificação do salario em relação ao imposto de renda;
    if(salario < 250) {
      printf("insento");
    } else if(salario >= 250 && salario < 500) {
      printf("5%");
    } else if(salario >= 500 && salario < 750) {
      printf("10%");
    } else if(salario > 750) {
      printf("14%");
    }
  }