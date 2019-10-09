#include <stdio.h>

char join (char aux1[50], char aux2[50], char aux3[50]) {
  int i;
  for (i = 0; aux1[i] != 0; i++) {
    aux3[i] = aux1[i];
  }
  for (int j = 0; aux2[j] != 0; j++) {
    aux3[i] = aux2[j];
    i++;
  }  
  return aux3[50];
}

void main() {
  char testo1[50];
  char testo2[50];
  char testo3[50];
    
  printf("Entro com o texto 1: ");
  scanf(" %[^\n]s", testo1);

  printf("Entro com o texto 2: ");
  scanf(" %[^\n]s", testo2);
   
  join(testo1, testo2, testo3);

  printf("Texto: %s\n",testo3);
}