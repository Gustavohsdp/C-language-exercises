// Faça um algoritmo que receba o valor do salário de uma pessoa e o valor de um financiamento
// pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o algoritmo deverá
// escrever "Financiamento Concedido"; senão, ele deverá escrever "Financiamento Negado".

int main() {
  int wage, financing_amount, wage_multiplication;

  printf("Informe o seu salario atual: ");
  scanf("%d", &wage);
  printf("Informe o valor do financiamento: ");
  scanf("%d", &financing_amount);

  //Calculo de multiplicação do salario da pessoa * 5;
  wage_multiplication = wage * 5;

  //Verificando se o financiamento foi APROVADO ou REPROVADO
  if( financing_amount <= wage_multiplication) {
    printf("Financiamento concedido");
  } else {
    printf("Financiamento Negado");
  }
}