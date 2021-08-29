#include <stdio.h>

int main(){
    //declaração da variaveis
    int tam, vet[tam],i,indice_do_maior,indice_do_menor,maior,menor;
    
    //entrando com o valor da quantidade de elementos
    printf("Digite a quantidade de elementos que quer ter: ");
    scanf("%d", &tam);

    for(i=0; i<tam; i++){
      printf("Digite o valor: ");
      scanf("%d",&vet[i]);
    }
    maior = vet[0];
    menor = maior ;
    indice_do_maior = 0;
    indice_do_menor = 0;
    for(i=0; i<tam; i++) {
      if (vet[i] > maior){
        maior = vet[i];
        indice_do_maior = i;
      } else{
        if(vet[i] < menor){
          menor = vet[i];
          indice_do_menor = i;
        }
      }
    }
  printf("O maior elemento = %d, posição atual = %d\n",maior,indice_do_maior);
  printf("O menor elemento = %d, posição atual = %d\n",menor,indice_do_menor);
  return 0;
}