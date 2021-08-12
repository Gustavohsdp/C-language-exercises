#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    int i, result = 0;

    if(n == 0) {
      return 0;
    }

    for( i = 0; i < n; i++ ) {
      result += 1;
    }   

    return result;
}

int main (result) {
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    for(int count  = 0; count < n; count++ ) {
      printf(" %d/%d + ", result++, n);
    }
    return 0;
}