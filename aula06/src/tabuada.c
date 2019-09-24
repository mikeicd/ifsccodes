#include <stdio.h>

int main () {
    int n;

    printf("Digite um numero para ver sua tabuada de 1 a 10: ");
    scanf("%d",&n);
    printf("A tabuada do %d é:\n",n);
    for (int i = 1; i <= 10; i++)
    {
        printf("3x%d= %d\n",i,(n*i));
    }
    return 0;
}