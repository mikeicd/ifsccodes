#include <stdio.h>

int main ()
{
    int y;
    for (int x = 1 ; x<=5 ; x++) {
        printf("Iforme o %d° número: ",x);
        scanf("%d",&y);
        if (y<0) {
            printf("Sai daqui com essa negatividade!!!!!!\n");
            break;
        }
    }
    return 0;
}