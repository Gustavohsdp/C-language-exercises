// A taxa de juros aplicada em fundos depositados em um banco é determinada pelo tempo em que estes 
// ficam depositados. Para um banco em particular, a seguinte tabela é usada:
// Tempo em depósito                            Taxa de juro
// Maior ou igual a 5 anos                           0,95
// Menor que 5 anos mas maior ou igual a 4 anos      0,9
// Menor que 4 anos mas maior ou igual a 3 anos      0,85
// Menor que 3 anos mas maior ou igual a 2 anos      0,75
// Menor que 2 anos mas maior ou igual a 1 ano       0,65
// Menor que 1 ano 0,55
// Usando esta informação, escreva uma função que receba o tempo em que os fundos foram mantidos 
// em depósito e retorne a taxa de juros correspondente

int main() {
  int time;
  
  printf("Informe quantos anos que tem que o seu dinheiro está aplicado: ");
  scanf("%d", &time);

  //Verificação para mostrar a taxa de juros correspondente
  if( time >= 5 ) {
    printf("A taxa de juros correspondente é de 0,95");
  }else if( time < 5 && time >= 4) {
    printf("A taxa de juros correspondente é de 0,9");
  }else if( time < 4 && time >= 3) {
    printf("A taxa de juros correspondente é de 0,85");
  }else if( time < 3 && time >= 2) {
    printf("A taxa de juros correspondente é de 0,75");
  }else if( time < 2 && time >= 1) {
    printf("A taxa de juros correspondente é de 0,65");
  }else if( time < 1) {
    printf("A taxa de juros correspondente é de 0,55");
  }
}