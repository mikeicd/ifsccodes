#include <stdio.h>

void main() {
  char testo1[50];
  char testo2[50];
  int j = 0; 
  int i = 0;

  printf("Entro com o texto 1: ");
  scanf(" %[^\n]s", testo1);

  printf("Entro com o texto 2: ");
  scanf(" %[^\n]s", testo2);
  //printf("%s\n",testo);
  
  while ((testo1[i] != 0) && (testo2[i] != 0)) {
        
    if ((testo1[i] != testo2[i]) || (testo1[i] == 0 && testo2[i] != 0) || (testo1[i] != 0 && testo2[i] == 0)) {
      j=1;
      break;
    }           
    i++;
  }
  if (j == 0) {
    printf("Os textos são iguais!\n");
  }   
}