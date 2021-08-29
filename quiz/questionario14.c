#include <stdio.h>

int main() {
  char produto[15];
  int codigo[15], count = 0, par = 0, valor1, valor2, valor3, valor4;
  int resultado1, resultado2, resultado3;
  float preco[15];
  float soma = 0;

  for (count = 0; count < 3; count++) {
    printf("Informe o produto: ", produto[count]);
    scanf("%s", &produto[count]);

    printf("Digite o codigo: ", codigo[count]);
    scanf("%i", &codigo[count]);

    printf("Informe o preço: ", preco[count]);
    scanf("%f", &preco[count]);


    if(codigo[count] % 2 == 0 && preco[count] > 1550) {
      valor1 = (preco[count] * 20) / 100;
      valor2 = preco[count] + valor1;
      printf("O valor final é: %i \n", valor2);
    }

  //Condição de par
    if(codigo[count] % 2 == 0 ) {
      valor3 = (preco[count] * 10) / 100;
      resultado1 = valor3 + preco[count];
      printf("O valor final é: %i \n", resultado1);
    }

  //Condição do preço
    if(preco[count] > 1550) {
      valor4 = (preco[count] * 15) / 100;
      resultado2 = valor4 + preco[count];
      printf("O valor final é: %i \n", resultado2);
    }
  }
  for(int i=0; i < 3; i++){
    printf("produto: %c, codigo: %i, preço: %2.f\n", produto[i], codigo[i], preco[i]);
  }
}