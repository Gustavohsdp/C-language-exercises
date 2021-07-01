// Darlan recebeu seu pagamento mensal e precisa pagar duas contas atrasadas. 
// Em razão do atraso, a multa que deverá ser paga é de 4% sobre cada conta. 
// Você então deverá fazer um programa para calcular e mostrar quanto restará do salário do Darlan. 
// O Darlan deverá entrar com o valor do seu pagamento e o valor das contas sem a multa. 
// Se o valor das contas for maior do que o salário deverá ser informado que o valor somado das contas é maior do que o valor do salário.

//Esse programa realizará as conta que o cliente deve com 4% de juros sobre cada conta e irá informar o que sobrou do sálario do Darlan
#include <stdio.h>

int main() {
  //Declarações das variaveis;
  float salario, conta1, conta2, multa, multa1, contas_total, restante_salario, valor_total_conta_1, valor_total_conta_2;

  printf("Informe o seu salario: ");
  scanf("%f", &salario);
  printf("Informe o valor da sua conta 1: ");
  scanf("%f", &conta1);
  printf("Informe o valor da sua conta 2: ");
  scanf("%f", &conta2);

  //Achar o valor da porcentaem da multa
  multa = conta1 * 4 / 100;
  multa1 = conta2 * 4 /100;

  // Somar o valor da conta mais a multa
  valor_total_conta_1 = conta1 + multa;
  valor_total_conta_2 = conta2 + multa1;

  //somar o valor das 2 contas com a multa
  contas_total = valor_total_conta_1 + valor_total_conta_2;

  // Realizar a verificação se o sálario é menor que a conta total;
  if(salario < contas_total) {
    printf("O valor somado das conta é maior que o salario");
    return 0;
  }

  //Calculo do resto do salario.
  restante_salario = salario - contas_total;
  printf("O restante do salario é: %f", restante_salario);
}