#include <stdio.h>

int main() {
    
    int i,p1,p2,p3;
    char a1,a2,a3;
    
    
    printf ("Informe o Character a ser digitado: ");
    scanf(" %c",&a1);
    printf ("Informe a quantidade de repetições: ");
    scanf("%d",&p1);

    printf ("Informe o Character a ser digitado: ");
    scanf(" %c",&a2);
    printf ("Informe a quantidade de repetições: ");
    scanf("%d",&p2);

    printf ("Informe o Character a ser digitado: ");
    scanf(" %c",&a3);
    printf ("Informe a quantidade de repetições: ");
    scanf("%d",&p3);
    i=0;
    while (i<p1)  {
        printf("%c",a1);
        i++;
        } 
    i=0;
    while (i<p2) {
         printf("%c",a2);
         i++;
        }
    i=0;  
    while (i<p3)  {
         printf("%c",a3);
         i++;
        }
    printf("\n");
    return 0;
    }