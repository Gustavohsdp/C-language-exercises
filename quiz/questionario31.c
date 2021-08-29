#include <stdio.h>
#include <stdlib.h>

int main() {
  int janela[24], corredor[24];
  int i;

  printf("*************************Posicoes livres*************************");

  for (i = 0; i < 24; i++) {
    janela[i] = 0;
  }

  printf("\nJanelas:");

  for (i = 0; i < 24; i++) {
    printf("\t%d", janela[i]);
  }

  printf("\n");

  for (i = 0; i < 24; i++) {
    corredor[i] = 0;
  }

  printf("\nCorredor :");

  for (i = 0; i < 24; i++) {
    printf("\t%d", corredor[i]);
  }

  printf("\n");

  int opcao;

  printf("\n\n");
  printf("************************MENU**************************\n");
  printf("1 - Vender passagem \n2 - Mostrar mapa de ocupação do ônibus \n3 - Encerrar\n\n");
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      printf("Você deseja o assento da janela(j) ou do corredor(c)?Digite o caracter.\n");
      char assento;

      scanf("%s", &assento);

      if (assento == 'j') {
        printf("Qual poltrona você deseja?Digite um número de 0 a 23.\n");
        int poltrona;
        scanf("%d", &poltrona);

        if (janela[poltrona] == 0) {
          for (i = 0; i < 24; i++) {
            if (janela[i] == janela[poltrona])
              janela[i] = 1;
          }
          printf("\nJanela[%d] = 1", poltrona);
          printf("\n\nVenda efetivada!!!");
        }
        else if (janela[poltrona] == 1) {
          printf("Poltrona ocupada!!!");
        } else {
          printf("Todas as poltronas estão ocupadas!");
        }
      }
      if (assento == 'c') {
        printf("Qual poltrona você deseja?Digite um número de 0 a 2.\n");
        int poltrona;
        scanf("%d", &poltrona);

        if (corredor[poltrona] == 0) {
          for (i = 0; i < 24; i++) {
            if (corredor[i] == corredor[poltrona])
              corredor[i] = 1;
          }
          printf("\nJanela[%d] = 1", poltrona);
          printf("\n\nVenda efetivada!!!");
        } else if (corredor[poltrona] == 1) {
          printf("Poltrona ocupada!!!");
        }else {
          printf("Todas as poltronas estão ocupadas!");
        }
      }
      break;
    case 2:
      printf("\n**************************************************************");
      printf("\n*Posições livres");
      printf("\nJanela: ");
      for (i = 0; i < 24; i++) {
        if (janela[i] == 0)
          printf("\t%d", i);
      }
      printf("\n");
      printf("\nCorredor: ");
      for (i = 0; i < 24; i++) {
        if (corredor[i] == 0)
          printf("\t%d", i);
      }
      printf("\n");
      printf("\n*Posições ocupadas");
      printf("\nJanela: "); 

      for (i = 0; i < 24; i++) {
        if (janela[i] == 1)
          printf("\t%d", i);
      }
      printf("\n");
      printf("\nCorredor: ");

      for (i = 0; i < 24; i++) {
        if (corredor[i] == 1)
          printf("\t%d", i);
      }
      break;

    case 3:
      printf("\n\n");
      break;
    default:
      printf("Você deve escolher uma opção válida\n");
      system("pause");
  }
  return 0;
}