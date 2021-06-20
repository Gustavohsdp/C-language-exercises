// Faça uma função que receba um número inteiro e teste se o valor lido termina com 0 (divisível por 10). 
// Em caso positivo, exiba a metade deste número. Caso contrário, exibir a mensagem "O número digitado 
// não termina com 0".

#include <stdio.h>

int main() {
  int number, result;

  printf("Informe um número");
  scanf("%d", &number);

  if(number % 10 == 0) {
    result = number / 2;
    printf("A metade do número é %d", result);
  }else {
    printf("O número digitado não termina com 0");
  }
}
