#include <stdio.h>

void main() {
  char testo1[50];
  char testo2[50];
  int i = 0, j = 0;

  printf("Entro com o texto 1: ");
  scanf(" %[^\n]s", testo1);

  printf("Entro com o texto 2: ");
  scanf(" %[^\n]s", testo2);
  //printf("%s\n",testo);
  
  while (testo1[i] != 0) {
    if (testo1[i] == testo2[i]) {
      j++;
    }
    i++;
  }
  printf("A qntd de caracteres ocupando a mesma poisição é: %d\n",j);
}