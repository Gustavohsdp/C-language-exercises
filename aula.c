#include <stdio.h>

// int main() {
// int nota;
// int nota = 0;

// while( nota >= 0 ) {
//   printf("Entre com a nota: ");
//   scanf("%i", nota);
// }
// }

//   int qnt_dados, cont;
//   scanf()
//   for(cont = 0; cont < 5, cont++) {
//     printf("%d ", cont);
//   }
// }

int main() {
  int nota;

  do{
    printf("Entre com a nota: ");
    scanf("%i", &nota);
  } while( nota >= 0);
}