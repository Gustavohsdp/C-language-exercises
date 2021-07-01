// Você trabalha em uma empresa e seu supervisor pede para você fazer um programa para calcular a quantidade de horas trabalhadas pelos funcionários. Você fará apenas um pequena parte deste programa. Então você deverá fazer um programa que irá receber uma hora ( uma variável para hora e outra para minutos), calcular e mostrar:

// a) a hora digitada convertida em minutos;

// b) o total de minutos, ou seja, os minutos digitados mais a conversão anterior;

// c) o total dos minutos convertidos em segundos;

// O seu programa deverá verificar a consistência da hora e dos minutos digitados. A hora não poderá passar de 24 e os minutos não poderão passar de 60. Caso o usuário digite uma hora ou minuto incorreto uma mensagem deverá ser mostrada informando o erro.

#include <stdio.h>

int main() {
  int hours, minutes;
  int conversion, conversion_seconds, total_minutes;

  printf("Informe suas horas trabalhadas: ");
  scanf("%d", &hours);

  if(hours > 24 ) {
    printf("A hora não pode ultrapassar 24 horas");
    return 0;
  }

  printf("Informe seus minutos trabalhados: ");
  scanf("%d", &minutes);

  if(minutes > 60) {
    printf("Os minutos não pode ultrapassar 60");
    return 0;
  }

  conversion = hours * 60;
  conversion_seconds = conversion * 60;
  total_minutes = minutes + conversion;

  printf("A hora convertida em minutos é %d.\n", conversion);
  printf("Os minutos digitados mais a coneversão anterior é: %d.\n", total_minutes); 
  printf("O total dos minutos convertidos em segundos é: %d.\n", conversion_seconds);
}