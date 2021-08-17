#include <stdio.h>

//função recursiva, recebendo numero1 & numero2 como parametro da função;
int MaximoDivisorComum(int numero1, int numero2) {

  //Validação para obter o maximo divisor comum
  if(numero2 != 0) {
    return MaximoDivisorComum(numero2, numero1 % numero2);
  }else {
    return numero1;
  }
}

int main() {
  //declaração de variaveis;
  int numero1, numero2, calculo;

  //Solicitando o usuário o primeiro número inteiro;
  printf("Digite o primeiro número inteiro positivo: ");
  scanf("%d", &numero1);
  //Solicitando o usuário o segundo número inteiro;
  printf("Digite o segundo número inteiro positivo: ");
  scanf("%d", &numero2);

  //Variavel calculo está chamando a função mdc
  calculo = MaximoDivisorComum(numero1, numero2);

  printf("O Maximo divisor comum entre %d e %d é: %d", numero1, numero2, calculo);
}