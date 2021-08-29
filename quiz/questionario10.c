#include <stdio.h>

int main() {
  //declaração de variaveis
  int valor_produtos[15], vendas_produtos[15];
  int count_valor_produtos, count_vendas_produtos;
  int produtos_vendidos, soma = 0, salario, salario_total;
  int menor = 0;

  //declaração de quantidade de produtos vendidos
  printf("Informe a quantidade de produtos vendidos: ");
  scanf("%i", &produtos_vendidos);
  printf("\n");


  for(count_vendas_produtos = 0; count_vendas_produtos < produtos_vendidos; count_vendas_produtos++) {
    printf("Informe o valor unitario do produtos:", valor_produtos[count_valor_produtos]);
    scanf("%i", &valor_produtos[count_vendas_produtos]);
    printf("\n");
    printf("O valor do produto é: [%i] \n", valor_produtos[count_vendas_produtos]);

    if (count_vendas_produtos == 0) {
        menor = valor_produtos[count_vendas_produtos];
    }
    
    if (valor_produtos[count_vendas_produtos] < menor) {
        menor = valor_produtos[count_vendas_produtos];
    }

    printf("Informe a quantidade de vendas de cada produto:", vendas_produtos[count_vendas_produtos]);
    scanf("%d", &vendas_produtos[count_vendas_produtos]);
    printf("A quantidade vendida deste produto é: [%i] \n", vendas_produtos[count_vendas_produtos] );

    soma += vendas_produtos[count_vendas_produtos];
  }

  //calculo da comissão e do salario
  salario = (soma * 3) / 100;
  salario_total = salario + 3550;

  printf("A quantidade total de produtos vendidos é: %d \n", soma);
  printf("O valor da comissão é: %d \n", salario);
  printf("O salario total com a comissão é de: %d \n", salario_total);
  
  printf("O valor do objeto que vendeu menos é %i \n", menor);
  printf("A posição do objeto que vendeu menos é %i \n", valor_produtos[menor]);
}