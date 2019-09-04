#include <stdio.h>
 
int main()
{
  int soma,n;
  double fat;
  soma=0;
  n=1;
  fat=1;
  do 
  {
    printf("Digite um número para adicionar a somatória ou digite 0 (Zero) para ver a fatoração do mesmo!\nSomatório até o momento:%d\nNúmero:",soma);
    scanf("%d",&n);
    soma=soma+n;
  }while (n!=0);
  n=1;
  do
  {
    fat=fat*n;
    n=n+1;
  }while (n<=soma);
  printf("Fatorial de %d é: %d",soma,fat);
return 0;
}
