#include <stdio.h>
 int main () {
   int matricula;
   float a1 = 0;
   float a2 = 0;

   printf("Digite a matrícula: ", matricula);
   scanf("%i", &matricula);
   printf("Digite a primeira nota: ", a1);
   scanf("%f", &a1);
   printf("Digite a segunda nota: ", a2);
   scanf("%f", &a2);
   float media = (a1 + a2) / 2;
   printf("A média do aluno %i é: %.1f\n", matricula, media);

   return 0;
 }