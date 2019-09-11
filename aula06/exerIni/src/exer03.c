#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
  int x,y;

  srand(time(NULL));

  y = rand() % 10 + 1;

  while(1) {
    printf("Chute um numero de 1 a 10: ");
    scanf("%d",&x);
    if (x>y){
     printf("Esse numero é maior que o desejado..\n");
    } else if (x<y)  {
      printf("Esse numero é menor que o desejado..\n");
    } else  {
     printf("Acerto Miseravel!!!\n");
    break;
    }
  }
return 0;  
}