#include <stdio.h>

int main() {
  int qtd_operarios;
  int codigo, pecas;
  int salario_min = 1000;
  int class_2, soma,salario_atual, total;
  int class_3;
  int index;
  int salario_total = 0;
  int total_pecas = 0;
  int  med_mul, total_qtd_mulheres = 0, pecas_mul = 0;
  int med_hom, total_qtd_homens = 0, pecas_hom = 0;
  int sexo;
  int maior_salario = 0;

  printf("Qual o total de funcionários da empresa? ");
  scanf("%d", &qtd_operarios);

  for( index = 0; index <= qtd_operarios -1; index++ ) {

    printf("codigo do(a) operario(a): ");
    scanf("%d", &codigo);
    printf("Você é de qual sexo, informe 0 para mulher e 1 para homem: ");
    scanf("%d", &sexo);
    printf("Quantidade de peças: ");
    scanf("%d", &pecas);
    total_pecas = total_pecas + pecas;
    printf("O total de peças é %d \n", total_pecas);

    if( sexo == 0 ) {
      total_qtd_mulheres++;
      pecas_mul = pecas_mul + pecas;
      med_mul = pecas_mul + total_qtd_mulheres - 1;
      printf("Total da media de peças das mulheres é %d \n", med_mul);
    } else if( sexo == 1) {
      total_qtd_homens++;
      pecas_hom = pecas_hom + pecas;
      med_hom = pecas_hom / total_qtd_homens - 1;
      printf("Total da media de peças dos homens %d \n", med_hom);
    }

    if ( pecas > 0 && pecas <= 35 ) {
      printf("Classe 1 \n");
      printf("O seu salario é minimo no valor de %d \n", salario_min);
      salario_total = salario_min + salario_total;
      printf("O valor total dos sálarios dos funcionários é %d \n", salario_total);
    } else if(pecas >= 36 && pecas <= 60 ) {
      printf("Classe 2 \n");
      class_2 = salario_min * 5 / 100;
      total = pecas - 35;
      soma = class_2 * total;
      salario_atual = salario_min + soma;
      salario_total = salario_atual + salario_total;
      printf("O seu salario é: %d \n", salario_atual);
      printf("O valor total dos sálarios dos funcionários é %d \n", salario_total);
    } else if(pecas > 60 ) {
      printf("Classe 3 \n");
      class_3 = salario_min * 10 / 100;
      total = pecas - 35;
      soma = class_3 * total;
      salario_atual = salario_min + soma;
      salario_total = salario_atual + salario_total;
      printf("O seu salario é: %d \n", salario_atual);
      printf("O valor total dos sálarios dos funcionários é %d \n", salario_total);
      maior_salario++;
    }
    printf("A quantidade de pessoas com maior salario é %d \n", maior_salario);
  }

  return 0;
}
