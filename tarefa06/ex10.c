#include <stdio.h>

char claiton (char aux[30]) {  
  for (int i = 0; aux[i] != 0; i++) {
    if ((aux[i] > 96) && (aux[i] < 123)) {
      aux[i] = aux[i]-32;
    } 
  }
  return aux[50];
}

void main() {

  char testo[50];
  
  printf("Insira o texto: ");
  scanf(" %[^\n]s", testo);  

  claiton(testo);

  printf("Upper: %s\n", testo);
}