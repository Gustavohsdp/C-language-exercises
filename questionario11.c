#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  //declaração de variaveis
  char frase[50], frasecopy[50];
  int count_frase, count_frase_copy, length;

  //declaração da frase
  printf("Digite uma frase: ");
  gets(frase);

  length = strlen(frase);
    count_frase_copy = 0;
    for( count_frase = 0; count_frase < length; count_frase++ ) {
      if( frase[count_frase] == 'a' || frase[count_frase] == 'e' || frase[count_frase] == 'i' || frase[count_frase] == 'o' || frase[count_frase] == 'u') {
        frasecopy[count_frase_copy] = 'P';
        count_frase_copy++;
      } else if(frase[count_frase] == 'A' || frase[count_frase] == 'E' || frase[count_frase] == 'I' || frase[count_frase] == 'O' || frase[count_frase] == 'U') {
        frasecopy[count_frase_copy] = 'P';
        count_frase_copy++;
      }
      frasecopy[count_frase_copy] = frase[count_frase];
      count_frase_copy++;
    }
    printf("%s", frasecopy);
    return 0;
}