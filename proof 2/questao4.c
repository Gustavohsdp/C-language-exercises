#include <stdio.h>
#include <stdlib.h>

int main() {
  //declaração de variaveis
  char sexo;
  int i, quantidade_pessoas = 0, m = 0, f = 0, nao = 0, sim = 0, mulheres_nao = 0, percentage, percentage1; 
  float opiniao = 0;
  //Informando a quantidade de pessoas
  printf("Informe a quantidade de pessoas: ");
  scanf("%i", &quantidade_pessoas);

  //Inicializando o for para a captura dos dados
  for (i = 1; i <= quantidade_pessoas; i++) {
    printf("informe o seu sexo:  m - para masculino f - feminino :");
    scanf("%c", &sexo);
    scanf("%c", &sexo);
    printf("Você gostou do produto ? digite -1 para não ou 2 para sim: ");
    scanf("%f", &opiniao);

    //verificação se o sexo é masculino || feminino e armazenando dentro da variavel
    switch (sexo)
    {
    case 'm':
        m++;
        break;
    case 'f':
        f++;
        break;
    default:
        printf("Sexo invalido!\n");
        break;
    }

    //verificação se a opinião é não ou sim
    if(opiniao == -1) {
      nao++;
    } else if(opiniao == 2) {
      sim++;
    } else {
      printf("Opinião invalida!\n");
      return 0;
    }

    //verificando a quantidade de mulheres que informaram que não gostou do produto;
    if(sexo == 'f' && opiniao == -1) {
      mulheres_nao++;
    }
  }

  percentage = (mulheres_nao * 100) / f;

  printf("A quantidade de pesssoas que responderam sim é: %i \n", sim);
  printf("A quantidade de pesssoas que responderam não é: %i \n", nao);
  printf("A quantidade de homens que responderam sim é: %i \n", m);
  printf("A porcentagem de mulheres que responderam não, entre todas as mulheres analisadas é: %i \n", percentage);
  return 0;
}