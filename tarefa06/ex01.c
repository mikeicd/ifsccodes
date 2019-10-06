#include <stdio.h>

void main() {
  char testo[4];
  printf("Entre com o texto: ");
  scanf("%s", testo);
  //printf("%s\n",testo);
  printf("Invertendo: ");
  for (int i = 4; i >= 0; i--)
  {
    printf("%c",testo[i]);
  }
  printf("\n");
}