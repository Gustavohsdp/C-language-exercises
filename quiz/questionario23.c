#include <stdio.h>

int NumeroDigitos(int numero) {
  static int contador = 0;
  
  if(numero != 0) {
    contador++;
    NumeroDigitos(numero / 10);
  }

  return contador;
}

int main() {
  int numero, contador;

  printf("Informe um determinado número inteiro: ");
  scanf("%d", &numero);

  contador = NumeroDigitos(numero);

  printf("A quantidade de digitos do número %d é %d", numero, contador);
}