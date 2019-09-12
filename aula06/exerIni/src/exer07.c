// Dado dois números inteiros positivos "M" e "N", computar o valor "V" conforme a equação: V=(M!*2.5)/(N!*7)

#include <stdio.h>

int main () {
    
    float v;
    int n,m,fat1,fat2;
    fat1=fat2=1;

    printf("Insira o valor de M: ");
    scanf("%d",&m);

    for (int i = 1; i <= m; i++)  {
        fat1=fat1*i;
    }
    printf("O valor de M! é : %d\n",fat1);

    printf("Insira o valor de N: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)  {
        fat2=fat2*i;
    }
    printf("O valor de N! é : %d\n",fat2);

    v=((fat1*2.5)/(fat2*7.0));
    printf("O valor de V é : %.3f\n",v);

    return 0;
}