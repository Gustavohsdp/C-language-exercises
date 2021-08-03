#include <stdio.h>

int main() {
  //declaração de variaveis
  int parcelas;
  float valor_divida, result;
  float porcentagem, resultado, valor_parcela;

  //entrando com  o valor da divida;
  printf("Informe o valor da divida: ");
  scanf("%f", &valor_divida);

  //entrando com o número das parcelas
  printf("Informe o número de parcelas entre 2, 4, 7, 10 e 13: ");
  scanf("%d", &parcelas);

  //verificação do valor da parcela para mostrar o resultado do calculo para o usuario;
  switch(parcelas) {
    case 2: {
      porcentagem = (valor_divida * 5) / 100;
      resultado = valor_divida + porcentagem;
      valor_parcela = resultado / parcelas;
      printf("======================================================================= \n");
      printf("\tO valor da divida é R$ %2.f", valor_divida);
      printf("\tValor do juros R$ %2.f", porcentagem);
      printf("\t%i parcelas", parcelas);
      printf("\tO valor da parcela é R$ %2.f", valor_parcela);
      break;
    }

    case 4: {
      porcentagem = (valor_divida * 15) / 100;
      resultado = valor_divida + porcentagem;
      valor_parcela = resultado / parcelas;
      printf("======================================================================= \n");
      printf("\tValor da divida R$ %2.f", valor_divida);
      printf("\tValor do juros R$ %2.f", porcentagem);
      printf("\t%i parcelas", parcelas);
      printf("\tO valor da parcela é R$ %2.f", valor_parcela);
      break;
    }

    case 7: {
      porcentagem = (valor_divida * 20) / 100;
      resultado = valor_divida + porcentagem;
      valor_parcela = resultado / parcelas;
      printf("======================================================================= \n");
      printf("\tO valor da divida é R$ %2.f", valor_divida);
      printf("\tValor do juros R$ %2.f", porcentagem);
      printf("\t%i parcelas", parcelas);
      printf("\tO valor da parcela é R$ %2.f", valor_parcela);
      break;
    }

    case 10: {
      porcentagem = (valor_divida * 25) / 100;
      resultado = valor_divida + porcentagem;
      valor_parcela = resultado / parcelas;
      printf("======================================================================= \n");
      printf("\tO valor da divida é R$ %2.f", valor_divida);
      printf("\tValor do juros R$ %2.f", porcentagem);
      printf("\t%i parcelas", parcelas);
      printf("\tO valor da parcela é R$ %2.f", valor_parcela);
      break;
    }

    case 13: {
      porcentagem = (valor_divida * 30) / 100;
      resultado = valor_divida + porcentagem;
      valor_parcela = resultado / parcelas;
      printf("======================================================================= \n");
      printf("\tO valor da divida é R$ %2.f", valor_divida);
      printf("\tValor do juros R$ %2.f", porcentagem);
      printf("\t%i parcelas", parcelas);
      printf("\tO valor da parcela é R$ %2.f", valor_parcela);
      break;
    }

    default: {
      printf("Você digitou a quantidade de parcelas invalidas");
      break;
    }
  }
}