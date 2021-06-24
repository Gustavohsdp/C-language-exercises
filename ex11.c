// Faça a leitura do salário atual e do tempo de serviço de um funcionário. A seguir, em uma função, calcule 
// o seu salário reajustado. Funcionários com até 1 ano de empresa, receberão aumento de 10%. 
// Funcionários com mais de um ano de tempo de serviço, receberão aumento de 20%. A função deverá 
// retornar o salário reajustado.

#include <stdio.h>

int main() {
  float current_wage, service_time, readjustment_calculation, readjusted_salary, 
    readjustment_calculation1, readjusted_salary1, new_salary, new_salary1;

  printf("Informe o seu salario atual: ");
  scanf("%f", &current_wage);
  printf("Informe o seu tempo de trabalho em mês: ");
  scanf("%f", &service_time);

  //Calculo do reajuste de 10%
  readjustment_calculation = current_wage * 10;
  readjusted_salary = readjustment_calculation / 100;
  new_salary = current_wage + readjusted_salary;

  //Calculo do reajuste de 20%
  readjustment_calculation1 = current_wage * 20;
  readjusted_salary1 = readjustment_calculation1 / 100;
  new_salary1 = current_wage + readjusted_salary1;

  //Verificando se o tempo de trabalho é menor ou igual a 12 meses, neste caso,
  //funcionario terá aumento de 10% e vericando se o funcionario tem mais de 12
  // meses de trabalho, para receber o aumento de 20%.
  if(service_time <= 12) {
    printf("O seu novo salario é %f", new_salary);
  }else if(service_time > 12) {
    printf("O seu novo salario é %f", new_salary1);
  }
}