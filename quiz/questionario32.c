#include<stdio.h>

int num_digitos(int numero) {
  static int cont=0;

  if(numero!=0) {
    cont++;
    num_digitos(numero/10);
  }
  return cont;
}

int main() {
  int numero,contador;

  printf("\n\t Programa para contar o numero de digitos :\n");
  printf(" Insira o numero : ");
  scanf("%d",&numero);

  contador = num_digitos(numero);

  printf("\n Quantidade de digitos = %d \n\n",contador);
  return 0; 
}