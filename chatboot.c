/* 
 * File:   main.c
 * Author: Gustavo Henrique
 *
 * Created on 27 de Maio de 2021, 17:10
 */
// Importando bibliotecas para utilização
#include <stdio.h>    //Biblioteca padrão do C
#include <sys/stat.h> //Retorna informações do path
#include <time.h>     //Para lidar com o tempo

char user_input[]; //Declarando a variavel que irá armazenar o valor que o usúario irá digitar

//Função principal que é chamada quando o programa é executado
int main()
{
  //struct estrutura de agrupamento
  struct stat filestat;
  // Irá obter as estatisticas do arquivo main.c
  stat("main.c", &filestat);

  printf("Chatboot UFOP\n");

  // Sempre entre no loop
  while (1)
  {
    printf("Usuário: ");
    // gets irá ler o valor que for digitado no printf acima
    gets(user_input);

    // strcmp = Irá comparar o valor na entrada1 e o valor na entrada 2,
    //se for 0 quer dizer que é igual, se for 1 ou -1 os valores da entrada1 e entrada2 são diferentes
    if (strcmp(user_input, "Qual o seu nome?") == 0)
    {
      printf("Resposta: Jarvis\n");
    }
    else if (strcmp(user_input, "Qual a sua idade?") == 0)
    {
      // Irá imprimir a data de criação do arquivo main.c
      printf("%s", ctime(&filestat.st_birthtime));
      return 0;
    }
    else
    {
      printf("Ainda não aprendi esta resposta. No futuro aprenderei\n");
    }
  }
  return 0;
}

//\n quebra de linha
//%s para str - substituição do valor a seguir da virgula de acordo com a quantidade de argumetos.
//%c parta char
//%d para int