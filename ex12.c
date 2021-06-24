// Faça uma função que receba o ano atual e o ano de nascimento de uma pessoa e imprima sua idade. A 
// seguir, imprima se a pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), 
// adulta (19 a 50 anos) ou idosa (51 anos em diante)

#include <stdio.h>

int main() {
  int current_year, year_of_birth, age;

  printf("Informe o ano atual: ");
  scanf("%d", &current_year);
  printf("Informe o seu ano de nascimento: ");
  scanf("%d", &year_of_birth);
  
  //Calculo para saber a idade atual da pessoa.
  age = current_year - year_of_birth;

  // Verificações para saber se a pessoa é bebe, criança, adolescente, adulto ou idosa e informa sua idade atual.
  if( age > 0 && age <= 3) {
    printf("Sua idade é %d \n", age);
    printf("Essa pessoa é um bebê");
  }else if( age >= 4 && age <= 10) {
    printf("Sua idade é %d \n", age);
    printf("Essa pessoa é uma criança");
  }else if( age >= 11 && age <= 18) {
    printf("Sua idade é %d \n", age);
    printf("Essa pessoa é adolescente");
  }else if( age >= 19 && age <= 50) {
    printf("Sua idade é %d \n", age);
    printf("Essa pessoa é adulta");
  }else if( age > 51) {
    printf("Sua idade é %d \n", age);
    printf("Essa pessoa é idosa");
  }
}