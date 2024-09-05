#include <stdio.h>

int main() {
  printf("Digite um numero inteiro: ");
  int numero = 0;
  scanf("%i", &numero);
  printf("Você digitou: %i\n", numero);
  printf("Digite as coordenadas x e y: ");
  int x = 0;
  int y = 0;
  scanf("%i %i", &x, &y);
  printf("Você digitou: %i e %i\n", x, y);
  
  
  return 0;
}
