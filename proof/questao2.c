// Esse progrma irá permitir que o professor coloque quantas notas ele quer adicionar e vai fazer o calculo
// da media ponderada e vai informar se o aluno tirou nota A,B,C ou D

#include <stdio.h>

int main() {

  //Declarações de variaveis
  int count = 0, numero_notas = 0;
  float peso = 0, soma_peso = 0, nota = 0, media_parcial = 0, soma_media_parcial = 0, media = 0;

  //Entrada dos número de notas
  printf("Informe o número de notas que você pretende digitar: ");
  scanf("%d", &numero_notas);

  //loop para inserir nota, peso e o número das notas
  while (count < numero_notas) {
    //Inserção do valor da nota
    printf("Digite o valor da nota do aluno de 0 a 10: ");
    scanf("%f", &nota);
    //inserção do valor do peso
    printf("Digite o valor do peso: ");
    scanf("%f", &peso);

    soma_peso = soma_peso + peso;
    media_parcial = nota * peso;
    media = media + media_parcial;

    count++;
  }

    //calculo da media ponderada
    media = media / soma_peso;
    printf("A media ponderada das notas é %f", media);

    //verificação para saber a nota final do aluno
    if( media >= 8 && media <= 10) {
      printf("A nota final do aluno é A");
    }else if (media >= 6 && media < 8) {
      printf("A nota do aluno é B");
    }else if(media >= 5 && media < 6) {
      printf("A nota do aluno é C");
    } else if (media < 5) {
      printf("A nota do aluno é D");
    }
}