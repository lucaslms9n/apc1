#include <stdio.h>
#include <limits.h>
#include <float.h>
#define PI 3.141593

int main() {
  printf("O tipo 'char' ocupa %lu byte(s) na memória.\n", sizeof(char));
  printf("O tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));
  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));

  printf("O tipo 'char' aceita valores entre %i e %i\n.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i\n.\n", INT_MIN, INT_MAX);
  printf("O tipo 'float' aceita valores entre %E e %E\n.\n", FLT_MIN, FLT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", DBL_MIN, DBL_MAX);

  int idade = 25;
  printf("Idade: %i\n", idade);

  float altura = 1.75f;
  printf("Altura: %.2f\n", altura);

  char tecla = 'A';
  printf("Tecla: %c\n", tecla);

  double numero_e = 2.7182818284;
  printf("Numero de Euler: %.10f\n", numero_e);

  

  

  return 0;
}
