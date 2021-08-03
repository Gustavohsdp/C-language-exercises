#include <stdio.h>

int main() {
  //declaração de variaveis
  float salario_min, salario,result;

  //entrada do valor do salario minimo
  printf("Informe o valor do sálario minimo: ");
  scanf("%f", &salario_min);

  //verificando se o valor do salario minimo é igual a 0
  if(salario_min <= 0) {
    printf("Favor informar o valor do sálario minimo");
    return 0;
  }

  //entrada do valor do salario
  printf("Informe o valor do seu sálario: ");
  scanf("%f", &salario);

  //verificando se o valor do salario 0
  if(salario <= 0) {
    printf("Favor informar o valor do seu sálario");
    return 0;
  }

  //calculo para saber a quantidade de salario minimo que o usuario recebe
  result = salario / salario_min;

  printf("O funcionário ganha %f salarios mínimos", result);
}