#include <stdio.h>

int main() {
  //Declaração das variaveis.
  char aluno_nome[100];
  int numero_alunos;
  int aluno, soma = 0, result;

  printf("Informe o número de alunos: ");
  scanf("%d", &numero_alunos);

  for(aluno = 0; aluno < numero_alunos; aluno++) {
    printf("Qual o nome do aluno: ", aluno_nome[aluno]);
    scanf("%s", &aluno_nome);
    
    int notas[3];
    for( int i=0; i < 3; i++) {
      printf("\n Digite suas notas : ");
      scanf("%d", &notas[i]);
      soma = (soma + notas[i]);
      result = soma / 3;
    }

    printf("O nome do aluno é: %s, sua nota média foi: %d \n", aluno_nome, result);

    if(result < 6) {
      printf("Aluno não aprovado \n");
      printf("Para você ser aprovado, você precisa tirar mais de 6 no exame especial \n");
    }
    if(result > 6) {
      printf("Aluno aprovado \n");
    }
  }
}
