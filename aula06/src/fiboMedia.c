//FIBONACCI MEDIA!

#include <stdio.h>

int main () {
  int x,n1=1,n2=1,p1;
  float soma=2;

  printf("Quantos numeros da sequencia de Fibonacci: ");
  scanf("%d",&x);
  printf("1 1 ");
  for (int i = 3; i <= x; i++)
  {
    p1=n1+n2;
    printf("%d ",p1);
    soma=soma+p1;
    n1=n2,n2=p1;
  }
  printf("\nA média dos numeros é : %.2f\n",((soma/x)*1.00));
}