// Programa irá calcular a média aritmética das 3 notas de cada aluno, informar a mensagem
// se o aluno foi reprovado, exame, aprovado e o número de alunos reprovado, exame, aprovado e a 
// média dos dez alunos.

#include <stdio.h>

int main() {
  //Declaração das variaveis.
  int aluno, nota1, nota2, nota3, media, soma, aprovado = 0, exame = 0, 
      reprovado = 0, media_aluno = 0, media_final = 0, result;

  for(aluno = 0; aluno < 10; aluno++) {
    //inserção das notas
    printf("Informe a primeira nota do aluno de 0 a 10: ");
    scanf("%d", &nota1);
    printf("Informe a segunda nota do aluno de 0 a 10: ");
    scanf("%d", &nota2);
    printf("Informe a terceira nota do aluno de 0 a 10: ");
    scanf("%d", &nota3);

    //soma de todas as notas
    soma = nota1 + nota2 + nota3;
    // valor da soma de todas as notas divido por 3, quantidade de notas inseridas.
    media = soma / 3;
    //recalculado o valor da média a cada loop
    media_aluno = media_aluno + media;
    //soma da media final divida pela quantidade de alunos que é 10.
    media_final = media_aluno / 10;

    //Informação da media aritmética de cada aluno.
    printf("A media aritmética  do aluno é: %d \n", media);

    //Informando se o aluno foi reprovado, exame ou aprovado
    if( media <= 4) {
      printf("Reprovado \n");
      reprovado++;
    } else if( media > 4 && media <= 6 ) {
      printf("Exame \n");
      exame++;
    }else if(media > 6 && media <= 10 ) {
      printf("Aprovado \n");
      aprovado++;
    }
  }
  //informando a quantidade de alunos reprovados
  printf("Total de aluno reprovado é: %d \n", reprovado);
  //informando a quantidade de alunos exame
  printf("Total de aluno exame é: %d \n", exame);
  //informando a quantidade de alunos aprovado
  printf("Total de aluno aprovado é: %d \n", aprovado);
  //informando a media final.
  printf("Media dos 10 alunos é: %d \n", media_final);
}