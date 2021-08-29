#include <stdlib.h>
#include <stdio.h>



#define LIM 4

int tab[LIM]={50, 25, 10, 5,1};

main() {

    int d, valor, quant;

    printf("\n Digite o valor : ");
    scanf("%d", &valor);

    for( d=0; d <= 4; d++) {

        quant = valor / tab[d];
        printf("\n Valor do Troco %2d", valor);
        printf("\n Valor da nota %2d ", tab[d]);
        printf("\n Numero de notas = %2d ", quant);
        valor = valor % tab[d];
    }
    system("pause");
}