#include <stdio.h>

int countCopy(char aux1[], char aux2[]) {
  int count=0;
  for (int i = 0; aux1[i] != 0 ; i++)  {
    aux2[i] = aux1[i];
    if (aux1[i] == ' ') {
      count++;
    }    
  }
  return count;
}

void main() {
  char x[50] = "Instituto Federal de Santa Catarina";
  char y[50] = "";
  int qntcara;

  qntcara = countCopy(x,y);
  printf("Qntd carac é %d\n",qntcara);
  printf("Y = %s\n",y);
}