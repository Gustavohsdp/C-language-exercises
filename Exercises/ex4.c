// Calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o valor das
// horas extras subtraindo 8% de INSS do total. Serão lidos nesse problema o salário bruto, o valor das
// horas extras e o número de horas extras. Apresentar ao final o salário líquido.

#include <stdio.h>

int main()
{
  float gross_salary, value_overtime, overtime, net_salary, inss, hours;

  printf("Qual o valor do seu salario bruto?");
  scanf("%f", &gross_salary);
  printf("Qual o valor que você recebe por horas extras?");
  scanf("%f", &value_overtime);
  printf("Quantas horas extras você realizou ?");
  scanf("%f", &overtime);

  hours = value_overtime * overtime + gross_salary;
  inss = hours * 8 / 100;
  net_salary = hours - inss;

  printf("O salario liquido é %f \n", net_salary);
};