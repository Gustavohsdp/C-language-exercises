#include <stdio.h>

int main() {
  int arrayU[2], arrayV[2];
  int somaUV = 0, somaVU = 0;
  
  for(int i=0; i<2; i++){
    printf("Insira um valor para a posicao %d do vetor U: ", i);
    scanf("%d", &arrayU[i]);
    
    printf("Insira um valor para a posicao %d do vetor V: ", i);
    scanf("%d", &arrayV[i]);
  }
  for(int i=0; i<2; i++){
    somaUV += arrayU[i]*arrayV[i];
    somaVU += arrayV[i]*arrayU[i];
  }
  if(somaUV == somaVU){
    printf("A propriedade e verdadeira.");
  } else {
    printf("A propriedade e falsa.");
  }
}