#include <stdio.h>

int recursion(int number) {
  int result;

  if (number == 1) {
    result = 1;
  } else if(number == 2 ) {
    result = 2;
  } else {
    result = 2 * recursion(number - 1) + 3 * recursion(number - 2);
  }

  return result;
}

int main() {
  int result, number;

  printf("Entre com um número para ser adicionado na função recursiva: ");
  scanf("%d", &number);

  result = recursion(number);

  printf("O resultado da função recursiva é: %d\n", result);

  return 0;
}