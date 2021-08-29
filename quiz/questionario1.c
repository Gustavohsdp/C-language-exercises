//Programa irá realizar o calculo de desconto de um produto, se o valor produto for
// maior que R$500 o cliente terá 10% de desconto e se for menor que R$ 500 terá
// 5% de desconto.

#include <stdio.h>

int main() {
  //Declaração das variaveis.
  int value, desconto, valor_produto, desconto1, valor_produto1;

  //Inserção do valor produto.
  printf("Informe o preço do seu produto: ");
  scanf("%d", &value);

  //verificando se o produto é mais caro que R$500 || menor, paraa ser feito o calculo do desconto.
  if (value > 500) {
    //calculo do desconto de 10%
    desconto = value * 10 / 100;
    valor_produto = value - desconto;
    printf("O preço do seu produto com desconto é R$ %d", valor_produto);
  } else if ( value <= 500 ) {
    //calculo do desconto de 10%
    desconto1 = value * 5 / 100;
    valor_produto1 = value - desconto1;
    printf("O preço do seu produto com desconto é R$ %d", valor_produto1);
  }
}