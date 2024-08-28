#include <stdio.h> // biblioteca de entrada e saida no console

int main () {
  // imprime um texto na tela
  printf("um texto na tela\n");

  // imprime um numero
  printf("%5i%%\n", 0001);
  
  // imprime dois numeros
  printf("%i %i\n", 50,100);
  
  // imprime um numero decimal
  printf("%f\n", 9.5);
  printf("%.3f\n", 3.78915);
  printf("%8.2f\n", 110.59);
  printf("%8.2f\n", 2556.86);

  // imprime um caractere
  
  printf("%C\n", 76);
  printf("%C\n", 85);
  printf("%C\n", 67);
  printf("%C\n", 65);
  printf("%C\n", 53);
  printf("%C\n", 76 85 67 65 53);

  // imprime uma string
  printf("%s\n", "Boa noite");
  printf("%30s!\n", "Quero café");
  printf("%-30s!\n", "Quero café");
  return 0;
}