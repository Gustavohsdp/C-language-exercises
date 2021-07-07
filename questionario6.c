#include <stdio.h>

int main() {
  int salario, salario_sem_juros_restante, pagamento, pagamento1, pagamento2, juros1, juros2, resultado1, resultado2, sem_juros, salario_restante;

  printf("Informe seu salario: ");
  scanf("%d", &salario);
  printf("Informe o valor do primero pagamento: ");
  scanf("%d", &pagamento1);
  printf("Informe O valor do segundo pagamento: ");
  scanf("%d", &pagamento2);

  if(pagamento1 > 500 || pagamento2 > 500) {
    juros1 = (pagamento1 * 0.30) / 100;
    resultado1 = pagamento1 + juros1;
    juros2 = (pagamento2 * 0.30) / 100;
    resultado2 = pagamento2 + juros2;
    pagamento = resultado1 + resultado2;
    salario_restante = salario - pagamento;
    printf("O valor restante de seu salario é: %d", salario_restante);
  }

  if(pagamento < 500 ) {
    sem_juros = pagamento1 + pagamento2;
    salario_sem_juros_restante = salario - sem_juros;
    printf("O salario restante é: %d", salario_sem_juros_restante);
  }
}