#include <stdio.h>

int main () {
  int m,h,l;
  char letra;

  printf("Informe a letra que será montado o desenho: ");
  scanf(" %c",&letra);

  printf("Informe a quantidade de linhas vazadas do desenho: ");
  scanf("%d",&h);
  h=h+2;

  printf("Informe a quantidade de espaçoes em branco do desenho: ");
  scanf("%d",&l);
  l=l+2;
  
  printf("Informe a margem do desenho: ");
  scanf("%d",&m);

//TOPO

  for (int i = 1; i <= h; i++)
  {
    /* code */
  }
  
  for (int i = 1; i <= m; i++)
  {
    printf(".");
  }
  for (int i = 1; i <= l ; i++)
  {
    printf("%c ",letra);
  }
  printf("\n");
//MEIO
  for (int i = 1; i <= h; i++)
  {
    for (int i = 1; i <= m; i++)  {
      printf(".");
    }
    for (int i = 1; i <= l ; i++) {
      if (i==1 || i==l) {
        printf("%c ",letra);
      } else {
        printf("  ");
    }
    }
  printf("\n");
  }
//FUNDO
  for (int i = 1; i <= m; i++)
  {
    printf(".");
  }
  for (int i = 1; i <= l ; i++)
  {
    printf("%c ",letra);
  }
  printf("\n");
  
  return 0;
}