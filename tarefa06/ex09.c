#include <stdio.h>

int qntdTesto (char aux[30]) {
  int i = 0;
  while (aux[i] != 0) {
    i++;
  }
  return i;
}

void main() {

  char testo[30];
  int  x = 0;

  printf("Insira o texto: ");
  scanf(" %[^\n]s", testo);

  x = qntdTesto(testo);

  printf("Quantidade de caracteres: %d\n",x);
}