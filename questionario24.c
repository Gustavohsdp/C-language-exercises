//Faça uma rotina recursiva em C para encontrar o fatorial de um número.

#include<stdio.h>

int factorial(int numero) {

  if(numero == 1)
    return 1;
  else

      return(numero*factorial(numero-1));
}

int main() {

  int numero,fatorial;

  printf("\n\t Fatorial de um numero :\n");
  printf("\n Insira o numero : ");
  scanf("%d",&numero);

  fatorial=factorial(numero);

  printf("\n O fatorial de %d = %d\n", numero, fatorial);

  return 0; 
}