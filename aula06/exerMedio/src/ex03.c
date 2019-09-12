#include <stdio.h>

int main () {
  int m,h=1;
  char l1,l2;

  printf("Informe a 1° letra que será montado o desenho: ");
  scanf(" %c",&l1);
    
  printf("Informe a 2° letra que será montado o desenho: ");
  scanf(" %c",&l2);

  while (h%2==1)
  {
    printf("Informe o numero de linhas do desenho, deve ser par para ser simétrico: ");
    scanf("%d",&h);    
  }
  h=h/2; 
 
  printf("Informe a margem do desenho: ");
  scanf("%d",&m);



//PRIMEIRA PARTE
  for (int j = h; j > 0; j--) {
    for (int i = 1; i <= m; i++) {
      printf(".");
    }
    for (int i = 1; i <= j; i++) {
      printf("%c ",l1);
    }

  printf("%c\n",l1);
  }



//SEGUNDA PARTE
  for (int j = 1; j <= h; j++) {
    for (int i = 1; i <= m; i++) {
      printf(".");
    }
    for (int i = 1; i <= j; i++) {
      printf("%c ",l2);
    }
  printf("%c\n",l2);
  }
  
return 0;
}