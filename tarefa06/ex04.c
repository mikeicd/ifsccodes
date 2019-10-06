#include <stdio.h>

void main() {
  char testo[50];
  int i = 0;

  printf("Entro com o texto: ");
  scanf("%[^\n]s", testo);
  //printf("%s\n",testo);
  
  while (testo[i] != 0) {
    if (testo[i] == 'o') {
      testo[i]='O';
    }
    i++;
  }
  printf("Trocando os 'os': %s\n",testo);  
}