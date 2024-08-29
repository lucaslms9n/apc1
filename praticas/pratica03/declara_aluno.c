#include <stdio.h> 


int main() {

  unsigned long int MATRICULA = 00000000;
  unsigned char IDADE = 99;
  float ALTURA = 9.90;
  float PESO = 999.0;
  char SEXO = 'F';
   printf("Matricula %08li\n", MATRICULA);
   printf("Idade %i anos\n", IDADE);
   printf("Altura %.2f m\n", ALTURA);
   printf("Peso %.1f kg\n", PESO);
   printf("Sexo %c\n", SEXO);

    return 0;
}