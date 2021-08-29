#include <stdio.h>

int main() {
  //declaração do ponteiro e variavel
  int * pt;
  int valores[100], i, count, tamanho, contador;
  
  //atribuindo valor ao ponteiro
  pt = valores;

  //Solicitando o usuario digitar o tamanho do vetor
  printf("Digite o tamanho do array: ");
  scanf("%d", &tamanho);

  //usuario digita os valores do vetor
  for(i = 0; i < tamanho; i++) {
    printf("Informe um valor: ");
    scanf("%d", &valores[i]);
  }

  //Mostrando os valores do vetor
  for (count = 0; count < tamanho; count++) {
    printf("O valor armazenado %d\n", *pt++);
  }

  //Mostrando os valores do vetor invetido
  for (contador = tamanho; contador >= 0; contador--) {
    printf("O valor armazenado inverso é: %d\n", *pt--);
  }
}