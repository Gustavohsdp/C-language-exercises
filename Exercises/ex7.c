// Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a
// 60, imprimir na tela "APROVADO", se for menor, imprimir "REPROVADO". Testar ainda se o valor lido foi
// maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA".

#include <stdio.h>

int main (int grade_student) {
  printf("Qual a nota do aluno: ");
  scanf("%d", &grade_student);

  if (grade_student > 100 || grade_student < 0) {
    printf("NOTA INVÁLIDA");
    return 0;
  } else if (grade_student >= 60) {
    printf("APROVADO");
  } else {
    printf("REPROVADO");
  };
};