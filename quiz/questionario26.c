#include <stdio.h>

int main() {
  char *frase, *frase_final;
  int tam, cont_caract;
  frase = (char *)malloc(100 * sizeof(char));
  printf("Digite uma frase qualquer: ");
  fgets(frase, 100, stdin);
  printf("Esta frase: %s", frase);
  tam = strlen(frase);
  printf("O tamanho da string: %d \n", tam);
  frase_final = frase;
  for (cont_caract = 0; cont_caract < tam; cont_caract++) {
    switch(*frase) {
      case 'a':
      *frase = 'u';
      break;
      case 'e':
      *frase = 'o';
      break;
      
    }
    frase++;
  }
  printf("A frase trocada é: %s", frase_final);
}