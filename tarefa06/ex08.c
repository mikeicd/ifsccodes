#include <stdio.h>

char copyTesto (char fonte[30],char copia[30]) {
  for (int i = 0; i <= 30; i++) {
    copia[i]=fonte[i];
  }
  return copia[30];
}

void main() {
  char testo[30];
  char copiaTesto[30];

  printf("Insira o texto: ");
  scanf(" %[^\n]s", testo);

  copiaTesto[30] = copyTesto(testo, copiaTesto);

  printf("copiaTesto: %s\n",copiaTesto);
}