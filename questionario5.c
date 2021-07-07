#include <stdio.h>

int main() {
  int parcelas;
  float valor_carro, pagamento_vista, result_vista;
  float porcentagem, resultado, valor_parcela;
  float porcentagem1, resultado1, valor_parcela1;
  float porcentagem2, resultado2, valor_parcela2;
  float porcentagem3, resultado3, valor_parcela3;
  float porcentagem4, resultado4, valor_parcela4;
  float porcentagem5, resultado5, valor_parcela5;
  float porcentagem6, resultado6, valor_parcela6;
  float porcentagem7, resultado7, valor_parcela7;
  float porcentagem8, resultado8, valor_parcela8;
  float porcentagem9, resultado9, valor_parcela9;

  printf("Informe o valor do carro: ");
  scanf("%f", &valor_carro);

  printf("Informe o número de parcelas entre 6, 12,18, 24, 30,36, 42, 48, 54 e 60: ");
  scanf("%d", &parcelas);

  //Pagamento do carro a vista com desconto de 20%
  pagamento_vista = (valor_carro * 20) / 100;
  result_vista = valor_carro - pagamento_vista;
  printf("\tO pagamento do carro no valor a vista com 20 de desconto é: %f\n", result_vista);

  switch(parcelas) {
    case 6: {
      porcentagem = (valor_carro * 4) / 100;
      resultado = valor_carro + porcentagem;
      valor_parcela = resultado / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela);
      printf("\tO valor do carro em 6 parcelas é: %f\n", resultado);
      break;
    }

    case 12: {
      porcentagem1 = (valor_carro * 7) / 100;
      resultado1 = valor_carro + porcentagem1;
      valor_parcela1 = resultado1 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela1);
      printf("\tO valor do carro em 12 parcelas é: %f\n", resultado1);
      break;
    }

    case 18: {
      porcentagem2 = (valor_carro * 10) / 100;
      resultado2 = valor_carro + porcentagem2;
      valor_parcela2 = resultado2 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela2);
      printf("\tO valor do carro em 18 parcelas é: %f\n", resultado2);
      break;
    }

    case 24: {
      porcentagem3 = (valor_carro * 13) / 100;
      resultado3 = valor_carro + porcentagem3;
      valor_parcela3 = resultado3 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela3);
      printf("\tO valor do carro em 24 parcelas é: %f\n", resultado3);
      break;
    }

    case 30: {
      porcentagem4 = (valor_carro * 16) / 100;
      resultado4 = valor_carro + porcentagem4;
      valor_parcela4 = resultado4 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela4);
      printf("\tO valor do carro em 30 parcelas é: %f\n", resultado4);
      break;
    }

    case 36: {
      porcentagem5 = (valor_carro * 21) / 100;
      resultado5 = valor_carro + porcentagem5;
      valor_parcela5 = resultado5 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela5);
      printf("\tO valor do carro em 36 parcelas é: %f\n", resultado5);
      break;
    }

    case 42: {
      porcentagem6 = (valor_carro * 22) / 100;
      resultado6 = valor_carro + porcentagem6;
      valor_parcela6 = resultado6 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela6);
      printf("\tO valor do carro em 42 parcelas é: %f\n", resultado6);
      break;
    }

    case 48: {
      porcentagem7 = (valor_carro * 24) / 100;
      resultado7 = valor_carro + porcentagem7;
      valor_parcela7 = resultado7 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela7);
      printf("\tO valor do carro em 48 parcelas é: %f\n", resultado7);
      break;
    }

    case 54: {
      porcentagem8 = (valor_carro * 28) / 100;
      resultado8 = valor_carro + porcentagem8;
      valor_parcela8 = resultado8 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela8);
      printf("\tO valor do carro em 54 parcelas é: %f\n", resultado8);
      break;
    }

    case 60: {
      porcentagem9 = (valor_carro * 30) / 100;
      resultado9 = valor_carro + porcentagem9;
      valor_parcela9 = resultado9 / parcelas;
      printf("\tO valor de cada parcelas é: %f\n", valor_parcela9);
      printf("\tO valor do carro em 60 parcelas é: %f\n", resultado9);
      break;
    }
  }
}