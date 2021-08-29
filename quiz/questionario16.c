#include <stdio.h>

int main() {
  char name[15];
  int count = 0, venda[100], soma = 0, percentage[100], maior = 0, menor = 0;

  for (count = 0; count < 3; count++) {
    printf("Informe o nome dos vendedores: ");
    scanf("%s", &name[count]);

    printf("Informe quantos produtos você vendeu: ");
    scanf("%i", &venda[count]);

    printf("Informe o valor de comissão que terá pelas vendas: ");
    scanf("%i", &percentage[count]);

    //Verificação do vendedor que teve maior e menor lucro;
    if (count == 0) {
        menor = percentage[count];
    }
    
    if (percentage[count] < menor) {
        menor = percentage[count];
    }

    if (count == 0) {
        maior = percentage[count];
    }
    
    if (percentage[count] > maior) {
        maior = percentage[count];
    }
    soma+= venda[count];
  }

  for(int i = 0; i < 3; i++) {
    printf("O nome do vendedor é: %c, vendeu %i produtos, e sua comissão é %i\n", name[i], venda[i], percentage[i]);
  }
  printf("A quantidade de produtos vendidos no total foi: %i \n", soma);
  printf("maior lucro foi de :%i \n", maior);
  printf("menor lucro foi de:%i \n", menor);
}