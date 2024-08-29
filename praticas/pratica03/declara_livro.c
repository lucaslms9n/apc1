#include <stdio.h> 
int main() {
  
  unsigned long int ISBN = 000000000000;
  unsigned short int NUMPAGINAS = 000;
  float PRECO = 0000.000;
  unsigned short int PUBLICADO = 0000;
   printf("ISBN é: %013li\n", ISBN);
   printf("Número de Páginas é: %03i\n", NUMPAGINAS);
   printf("Preço é: R$%07.2f\n", PRECO);
   printf("Ano de Publicação: %04i\n", PUBLICADO);
    
    return 0;
}