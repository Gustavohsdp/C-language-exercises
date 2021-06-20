// Faça uma função que imprima se um número real recebido como parâmetro é positivo, negativo ou 
// neutro (zero).

#include <stdio.h>

int main() {
  int number;
  printf("Informe o número: ");
  scanf("%d", &number);

  test_number(number);
}

int test_number(int number) {

  if(number > 0) {
    printf("O número é real");
  } else if(number < 0) {
    printf("O número é negativo");
  }else if ( number == 0) {
    printf("O número é neutro");
  }
}