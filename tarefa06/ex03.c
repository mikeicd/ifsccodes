#include <stdio.h>

void main() {
  char testo[50];
  int i = 0, j = 0;
  printf("Entre com o texto: ");
  scanf("%[^\n]s", testo);
  //printf("%s\n",testo);
  
  while (testo[i] != 0) {
    if (testo[i] == 'a' && testo[i+1] == 'b') {
      j++;
    }
    i++;
  }
  printf("A quantidade de 'ab' no texto é: %d\n",j);  
}