#include <stdio.h>

int main() {
  //Declaração das variaveis
  int quantidade_de_pessoas, cont, soma = 0, salario_maior = 0, menor = 0, maior = 0, media_final;
  int maior_salario, i_maior_salario;
  int idade [100], salario[100];
  char sexo;

  printf("Informe a quantidade de pessoas que serão entrevistada: ");
  scanf("%d", &quantidade_de_pessoas);

  for(cont = 0; cont <= quantidade_de_pessoas - 1; cont++) {
    printf("Qual a sua idade: ");
    scanf("%d", &idade[cont]);

    // Validando se a idade digitada não é < 0;
    if(idade < 0) {
      return 0;
    }

    // Verificação da pessoa com maior idade e menor idade;
    if (cont == 0) {
        maior = idade[cont];
    }
    
    if (idade[cont] > maior) {
        maior = idade[cont];
    }

        if (cont == 0) {
        menor = idade[cont];
    }
    
    if (idade[cont] < menor) {
        menor = idade[cont];
    }

    printf("Informe o seu sexo, M para masculino e F para feminino: ");
    scanf("%s", &sexo);

    printf("Informe o seu salário: ");
    scanf("%d", &salario[cont]);

    //Realizando a soma da quantidade de homens que recebeu 
    if(salario[cont] > 2500 && sexo == 'M' || sexo == 'm') {
      salario_maior++;
    }

    // // Somatorio dos preços;
    soma += salario[cont];
    media_final = soma / quantidade_de_pessoas;

    if (cont == 0) {
      maior_salario = salario[cont];
      i_maior_salario = cont;
    }
    
    if (salario[cont] > maior_salario) {
      maior_salario = salario[cont];
      i_maior_salario = cont;
    }
  }

  printf("A média dos salários dos habitantes é: %i\n", media_final);
  printf("A pessoa com maior idade é: %d \n", maior);
  printf("A pessoa com menor idade é: %d \n", menor);
  printf("A quatidade de homens com salario maior que 2500 é %d\n", salario_maior);
  printf("A idade da pessoa com maior salário é %d e o sexo é %c\n", idade[i_maior_salario]);
}