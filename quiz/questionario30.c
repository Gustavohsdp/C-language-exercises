#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ponteiro;
  int tam;

  printf("digite quantos numeros voce quer digitar: ");
  scanf("%d",&tam);

  *ponteiro=(malloc(tam *sizeof(int)));

  for(int i=0;i<tam;i++) {
    printf("digite valor para posicao %d:",i+1);
    scanf("%d",&ponteiro[i]);
  }
  for(int i=0;i<tam;i++) {
    if(ponteiro[i]%2==0) {
      printf("Os numeros pares são %d\n",ponteiro[i]);
    }
  }
  return 0;
}