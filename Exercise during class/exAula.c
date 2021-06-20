//Nota de trabalho de laboratorio peso 2
//avaliação semestral peso 3
// exame final peso 5
//media 10


int main() {
  float grade_work, semester_evaluation, final_exam, media;

  printf("Informe sua nota de trabalho: ");
  scanf("%f", &grade_work);
  printf("Infome o valor da sua avaliação semestral: ");
  scanf("%f", &semester_evaluation);
  printf("Informe o valor do seu exame final: ");
  scanf("%f", &final_exam);

  media = (2 * grade_work + 3 * semester_evaluation + 5 * final_exam) / 10;
  
  if( media >= 8 && media < 10) {
    printf("A nota final do aluno é A");
  }else if (media >= 7 && media < 8) {
    printf("A nota do aluno é B");
  }else if(media >= 6 && media < 7) {
    printf("A nota do aluno é C");
  } else if (media >= 5 && media < 6) {
    printf("A nota do aluno é D");
  } else if (media >= 0 && media < 5) {
    printf("A nota do aluno é E");
  }
  }
