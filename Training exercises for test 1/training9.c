// Na aula de matemática o professor pediu para você fazer um programa para verificar se três medidas podem ser lados de um triângulo. 
// Este programa deve receber o valor dos catetos de um triângulo, calcular e mostrar o valor da hipotenusa. 
// O programa deverá conferir se os valores dos catetos são consistentes, ou seja, a soma de dois catetos quaisquer não é maior do que o que sobrou. 
// Caso os valores sejam inconsistentes deverá mostrar uma mensagem para o usuário informando que os valores são inconsistentes.

#include <stdio.h> 
#include <math.h> 

main() { 
    float hipotenusa,cateto1,cateto2, soma; 

    printf("Digite o cateto 1: "); 
    scanf("%f",&cateto1); 
    printf("Digite o cateto 2: "); 
    scanf("%f",&cateto2); 
    hipotenusa=pow(cateto1, 2) + pow(cateto2, 2); 
    printf("A hipotenusa é: %f",sqrt(hipotenusa)); 

    soma = cateto1 + cateto2;

    if(soma > hipotenusa) {
      printf("O valor não é consistente");
    } else {
      printf("O valor é consistente");
    }
} 