#include <stdio.h>

int main() {
  float preco = 0;
  printf("Digite um preço: ");
  scanf("%f", &preco);
  printf("Você digitou: %.2f\n", preco);

  double fracao = 0;
  printf("Digite uma fração: ");
  scanf("%lf", &fracao);
  printf("Você digitou: %.10lf\n", fracao);


  return 0;
}
