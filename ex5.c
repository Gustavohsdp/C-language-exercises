// Faça uma função que receba a quantidade de quilowatts consumido em uma casa e calcule o valor a ser
// pago de energia elétrica, sabendo-se que o valor a pagar por quilowatt é de R$ 0,46. Apresentar o valor
// total a ser pago pelo usuário acrescido de 18% de ICMS.

#include <stdio.h>

int main()
{
  float kilowatt_consumption, consumption_of_kilowatts_to_be_paid, kilowatt_consumption_plus_additions, amount;

  printf("Qual o valor consumido de quilowatts: ");
  scanf("%f", &kilowatt_consumption);

  consumption_of_kilowatts_to_be_paid = kilowatt_consumption * 0.46;
  kilowatt_consumption_plus_additions = consumption_of_kilowatts_to_be_paid * 18 / 100;
  amount = consumption_of_kilowatts_to_be_paid + kilowatt_consumption_plus_additions;
  printf("O valor da sua fatura é  R$ %f", amount);
}