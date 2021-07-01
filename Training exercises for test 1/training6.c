#include <stdio.h>
#include <math.h>

int main() {
  int number = 0, count = 0;
  int cubo, quadrado, raiz;

  printf("Digite um número: ");
  scanf("%d", &number);

  for (count = 0; count - number; count++){
    if( number > 0) {
      cubo = pow(number, 3);
      quadrado = pow(number, 2);
      raiz = sqrt(number);
      printf("O número ao cubo é %d \n", cubo);
      printf("O número ao quadrado %d \n", quadrado);
      printf("O número ao raiz %d \n", raiz);

      printf("Digite um número: ");
      scanf("%d", &number);
    } else if ( number < 0){
      printf("O número digitado é negativo");
      return 0;
    }
  }
}