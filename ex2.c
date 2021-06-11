//Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como
//parâmetro o salário atual do funcionário e a porcentagem de aumento. A função deverá, ao final, imprimir
//o novo valor do salário e o valor do aumento.

#include <stdio.h>

int newsalary( int wage, int increase_percentage) {

  int percentage, result;

  percentage = wage * increase_percentage/100;
  result = wage + percentage;
}

int main() {
  int wage, increase_percentage, percentage, result;

  printf("Escreva o seu salario atual do funcionário: ");
  scanf("%d", &wage);
  printf("Informe qual o valor da porcentagem do aumento do funcionário: ");
  scanf("%d", &increase_percentage);
  percentage = wage * increase_percentage/100;
  result = wage + percentage;

  printf("O valor do aumento do funcionário é : %d \n", percentage);
  printf("O novo salário do funcionário é: %d \n", result);
}