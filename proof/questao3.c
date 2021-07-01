//Esse programa esta calculando a area do triangulo e verificando se a soma dos lados 1 e 2 é maior que o lado 3

#include <stdio.h>
#include <math.h>

int main() {
    int lado1, lado2, lado3, soma;
    int base = 0, altura = 0;
    float area = 0;

    //Obtendo valor do triangulo para calcular a area
    printf("Digite o valor da base: ");
    scanf("%i", &base);
    printf("\nDigite o valor da altura: ");
    scanf("%i", &altura);

    //calculando a area;
    area = (base * altura) / 2; 
    printf("O valor da area: %f\n", area);

    //obtendo os lados do triangulo
    printf("Digite o lado 1: ");
    scanf("%i", &lado1);
    printf("\nDigite o lado 2: ");
    scanf("%i", &lado2);
    printf("\nDigite o lado 3: ");
    scanf("%i", &lado3);

    //somando os lados do triangulo
    soma = lado1 + lado2;

    //verificando se a soma do lado 1 e lado 2 é maior que lado 3.
    if( soma > lado3) {
      printf("Os lados do triângulo estão incorretos, tente novamente");
      return 0;
    }else {
        printf("\n\nO valor da area do triangulo é igual a: %f\n\n", area);
        return 0;
    }
}