#include <stdio.h>
#include <string.h>

int main() {
  //Declaração das variaveis e vetor
  char name_products[15];
  int codigo_products[15];
  float price_products[15];
  int count_position = 0, soma = 0, menor = 0, maior = 0;

  //Inserção dos dados
  for (count_position = 0; count_position < 15; count_position++) {
    printf("Qual o nome do produto: ", name_products[count_position]);
    scanf("%s", &name_products[count_position]);

    printf("Qual o código do produto: ", codigo_products[count_position]);
    scanf("%i", &codigo_products[count_position]);

  //Verificação do produto que teve maior e menor lucro;
    if (count_position == 0) {
        menor = codigo_products[count_position];
    }
    
    if (codigo_products[count_position] < menor) {
        menor = codigo_products[count_position];
    }

    if (count_position == 0) {
        maior = codigo_products[count_position];
    }
    
    if (codigo_products[count_position] > maior) {
        maior = codigo_products[count_position];
    }

    printf("Qual o preço do produto: ", price_products[count_position]);
    scanf("%f", &price_products[count_position]);

    //Somatorio dos preços;
    soma += price_products[count_position];
    printf("\n");
  }
  
  //Buscando os dados dos vetores para ser realizado o relatorio;
  for(int i = 0; i < 15; i++) {
    printf("produto: %c, código: %i, preço do produto é: %2.f \n", name_products[i], codigo_products[i], price_products[i]);
  }

  printf("O lucro total da loja é: %i \n", soma);
  printf("O código do produto que teve maior lucro foi %i \n", maior);
  printf("O código do produto que teve menor lucro foi %i \n", menor);
}