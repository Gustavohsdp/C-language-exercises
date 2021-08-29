#include <stdio.h>

int main() {
  //declaração das variaveis int e char;
  int count, vagas_janela[24], vagas_corredor[24], opcoes_menu, poltrona;
  char poltrona_viagem;

  //Mostrando os lugares disponiveis na janela;
  printf("Lugares nas janelas: ");
  for(count = 0; count < 24; count++) {
    vagas_janela[count] = 0;
  }

  for (count = 0; count < 24; count++) {
    printf("%d", vagas_janela[count]);
  }

  for (count = 0; count < 24; count++) {
    vagas_corredor[count] = 0;
  }

  printf("\n");

  //Mostrando os lugares disponiveis no corredor;
  printf("Lugares no corredor : ");

  for (count = 0; count < 24; count++) {
    printf("%d", vagas_corredor[count]);
  }

  //Menu para o usúario escolher a opção;
  printf("\nPor gentileza, escolha uma opção: \n");
  printf("1 - Vender passagem : \n");
  printf("2 - mostrar mapa de ocupação do Ônibus : \n");
  printf("3 - Encerrar: \n");
  printf("Qual será a opção desejada ? ");
  scanf("%d", &opcoes_menu);
  //Neste switch estou obtendo a opção digitada no menu para realizar as verificações
  switch (opcoes_menu) {
    //Selecionando a opção 1, é para a venda de passagem, o usuario vai escolhar se quer viajar no assento
    //da janela ou corredor e vai escolhar a poltrona, e o programa vai informar
    //ao cliente se a venda deu certo ou se o assento já foi vendido para outro cliente
    case 1:
      printf("Você deseja viajar na poltrona da janela ou a do corredor? digite c para corredor e j para janela:");    
      scanf("%s", &poltrona_viagem);

      if (poltrona_viagem == 'j') {
        printf("Temos lugares na janela de 0 a 23, qual lugar deseja fazer sua viagem ?.\n");
        scanf("%d", &poltrona);

        if (vagas_janela[poltrona] == 0) {
          for (count = 0; count < 24; count++) {
            if (vagas_janela[count] == vagas_janela[poltrona])
              vagas_janela[count] = 1;
          }
          printf("Sua compra na janela %d deu certo e seu lugar já se encontra reservado \n", poltrona);
        }
        else if (vagas_janela[poltrona] == 1) {
          printf("Não podemos te vender este lugar, uma pessoa já comprou");
        } else {
          printf("No momento, todas as vagas estão ocupadas, o que acha de ir no próximo ônibus? aguardamos sua compra !");
        }
      }
      if (poltrona_viagem == 'c') {
        printf("Temos lugares no corredor de 0 a 23, qual lugar deseja fazer sua viagem ?.\n");
        scanf("%d", &poltrona);

        if (vagas_corredor[poltrona] == 0) {
          for (count = 0; count < 24; count++) {
            if (vagas_corredor[count] == vagas_corredor[poltrona])
              vagas_corredor[count] = 1;
          }
          printf("Sua compra no corredor %d deu certo e seu lugar já se encontra reservado \n", poltrona);
        } else if (vagas_corredor[poltrona] == 1) {
          printf("Não podemos te vender este lugar, uma pessoa já comprou");
        }else {
          printf("No momento, todas as vagas estão ocupadas, o que acha de ir no próximo ônibus? aguardamos sua compra !");
        }
      }
      break;
    //Selecionando a opção 2, iremos mostrar ao cliente todas as vagas disponiveis na janela e corredor;
    case 2:
      printf("Todas as vagas disponiveis \n");
      printf("Lugares disponiveis na janela: \n");
      for (count = 0; count < 24; count++) {
        if (vagas_janela[count] == 0)
          printf("\t%d", count);
      }
      printf(" \nLugares disponiveis no corredor: \n");
      for (count = 0; count < 24; count++) {
        if (vagas_corredor[count] == 0)
          printf("\t%d", count);
      }
      //Informando ao usuario qual vaga já foi vendida;
      printf("\nEssas vagas já foram vendidas \n");
      printf("\nVagas vendidas na janela: \n"); 
      for (count = 0; count < 24; count++) {
        if (vagas_janela[count] == 1)
          printf("\t%d \n", count);
      }
      printf("Vagas vendidas no corredor: ");
      for (count = 0; count < 24; count++) {
        if (vagas_corredor[count] == 1)
          printf("\t%d \n", count);
      }
      break;
    //Selecionando a opção 3 iremos realizar a finalização do programa;
    case 3:
    break;
    //Caso o cliente escolha uma opção que não tenha no menu, iremos mostrar essa
    //informação ao mesmo;
    default:
      printf("Usuário, escolha uma opção válida\n");
  }
}