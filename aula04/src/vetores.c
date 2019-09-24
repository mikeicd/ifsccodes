#include <stdio.h>

int main()
{
    int ax,ay,bx,by,pEscalar;

    printf("Informe as coordenadas de do vetor A:\n");
    printf("X:");
    scanf("%d",&ax);
    printf("Y:");
    scanf("%d",&ay);

    printf("Informe as coordenadas de do vetor B:\n");
    printf("X:");
    scanf("%d",&bx);
    printf("Y:");
    scanf("%d",&by);

    pEscalar=(ax*bx)+(ay*by);

    printf("O produto escalar entre os vetores A e B é: %d\n",pEscalar);

return 0;    
}