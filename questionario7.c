#include <stdio.h>
#include <stdlib.h>

int main(){
    char sexo;
    int i, numcriancas=0, m=0, f=0, menos36=0;
    float tempo=0, percm, percf, percmenos36;
    printf("Insira o numero de criancas nascidas durante os ultimos meses: \n");
    scanf("%i", &numcriancas);

    for(i=1; i<=numcriancas; i++){
      printf("Insira o sexo da crianca sendo:  m- para masculina f- feminina \n");
      scanf("%c", &sexo);
      scanf("%c", &sexo);
      printf("Digite o tempo que a crianca ficou viva em meses: \n");
      scanf("%f", &tempo);
      
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
      
      
      if (tempo<=36){
          menos36++;
      }
    }
    percm=(m*100)/numcriancas;
    percf=(f*100)/numcriancas;
    percmenos36=(menos36*100)/numcriancas;
    printf("O percentual de criancas do sexo masculino que faleceram nos ultimos meses e de: %.f porcento.\n", percm);
    printf("O percentual de criancas do sexo feminino que faleceram nos ultimos meses e de: %.f porcento.\n", percf);
    printf("O percentual de criancas 36 meses ou menos que faleceram nos ultimos meses e de: %.f porcento.\n", percmenos36);
    return 0;
}