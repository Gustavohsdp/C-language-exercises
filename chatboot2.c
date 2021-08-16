#include <stdio.h>

int main() {
  FILE *pont_arq;
  char texto_str[100];
  char fala_jarvis[10000];

  pont_arq = fopen("fala_jarvis.txt", "r");

  while (fgets(texto_str, 10000, pont_arq) != NULL) 
    printf("%s", texto_str);
    printf("%i", pont_arq);
    fclose(pont_arq);

  return 0;
}

