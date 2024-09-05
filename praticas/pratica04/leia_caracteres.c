#include <stdio.h>
int main (){
  char tecla = '\0'; //caractere nulo

  printf("Digite um caractere: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); //limpa o \n
  printf("Você digitou: %c\n", tecla);


  printf("Digite uma outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);

  char nome[31];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Ola %s\n", nome);



  return 0;
}
